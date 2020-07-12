using System;
using System.IO;
using System.Linq;
using Kedacom.AutoGen.CppSharpUnsafeGenerator.Processors;

namespace Kedacom.AutoGen.CppSharpUnsafeGenerator
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            var options = CliOptions.ParseArgumentsStrict(args);

            if (options.Verbose)
            {
                Console.WriteLine("Working dir: " + Environment.CurrentDirectory);
                Console.WriteLine("Output dir: " + options.OutputDir);
                Console.WriteLine("headers dir: " + options.IncludesDir);
                Console.WriteLine("bin dir: " + options.BinDir);
                Console.WriteLine("Namespace name: " + options.Namespace);
                Console.WriteLine("Class name: " + options.ClassName);
            }

            var existingInlineFunctions =
                ExistingInlineFunctionsHelper.LoadInlineFunctions(Path.Combine(options.OutputDir,
                    "Kedacom.functions.inline.g.cs"));

            var exports = FunctionExportHelper.LoadFunctionExports(options.BinDir, "ipcsdk.dll",(funcName)=>funcName.StartsWith("IPC_")).ToArray();

            var astProcessor = new ASTProcessor
            {
                FunctionExportMap = exports
                    .GroupBy(x => x.Name).Select(x => x.First()) // Eliminate duplicated names
                    .ToDictionary(x => x.Name)
            };
          
            var defines = new string[] {};

            var g = new Generator(astProcessor)
            {
                IncludeDirs = new[] {options.IncludesDir},
                Defines = defines,
                Exports = exports,
                Namespace = options.Namespace,
                ClassName = options.ClassName,
                ExistingInlineFunctions = existingInlineFunctions,
                SuppressUnmanagedCodeSecurity = options.SuppressUnmanagedCodeSecurity
            };

            g.Parse("ipcsdk/ipcdefine.h");
            g.Parse("ipcsdk/ipcstruct.h");
            g.Parse("ipcsdk/ipcsdk_c.h");
            g.Parse("ipcsdk/ipcsdk_c.cpp");

            g.WriteLibraries(Path.Combine(options.OutputDir, "Kedacom.libraries.g.cs"));
            g.WriteMacros(Path.Combine(options.OutputDir, "Kedacom.macros.g.cs"));
            g.WriteEnums(Path.Combine(options.OutputDir, "Kedacom.enums.g.cs"));
            g.WriteDelegates(Path.Combine(options.OutputDir, "Kedacom.delegates.g.cs"));
            g.WriteArrays(Path.Combine(options.OutputDir, "Kedacom.arrays.g.cs"));
            g.WriteStructures(Path.Combine(options.OutputDir, "Kedacom.structs.g.cs"));
            g.WriteIncompleteStructures(Path.Combine(options.OutputDir, "Kedacom.structs.incomplete.g.cs"));
            g.WriteExportFunctions(Path.Combine(options.OutputDir, "Kedacom.functions.export.g.cs"));
            g.WriteInlineFunctions(Path.Combine(options.OutputDir, "Kedacom.functions.inline.g.cs"));
        }
    }
}
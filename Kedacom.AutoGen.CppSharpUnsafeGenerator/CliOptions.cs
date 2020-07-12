using System;
using System.IO;
using CommandLine;

namespace Kedacom.AutoGen.CppSharpUnsafeGenerator
{
    /// <summary>
    ///     Command line options.
    /// </summary>
    public class CliOptions
    {
        [Option('n', "namespace", Default = "Kedacom.AutoGen",
            HelpText = "The namespace that will contain the generated symbols.")]
        public string Namespace { get; set; }

        [Option('c', "class", Default = "Kedacom",
            HelpText = "The name of the class that contains the unmanaged method calls.")]
        public string ClassName { get; set; }

        /// <summary>
        ///     See http://ybeernet.blogspot.ro/2011/03/techniques-of-calling-unmanaged-code.html.
        /// </summary>
        [Option('f', "SuppressUnmanagedCodeSecurity",
            HelpText = "Add the [SuppressUnmanagedCodeSecurity] attribute to unmanaged method calls " +
                       "(faster invocation).")]
        public bool SuppressUnmanagedCodeSecurity { get; set; }

        [Option('i', "input", Required = false,
            HelpText = "The path to the directory that contains the header and binary files " +
                       "(must have the default structure).")]
        public string RootDir { get; set; }

        [Option('h', "headers", Required = false,
            HelpText = "The path to the directory that contains the header files.")]
        public string IncludesDir { get; set; }

        [Option('b', "bin", Required = false,
            HelpText = "The path to the directory that contains the binaries.")]
        public string BinDir { get; set; }

        [Option('o', "output", Required = false,
            HelpText = "The path to the directory where to output the generated files.")]
        public string OutputDir { get; set; }

        [Option('v',
            HelpText = "Print details during execution.")]
        public bool Verbose { get; set; }

        public static CliOptions ParseArgumentsStrict(string[] args)
        {
            var result = Parser.Default.ParseArguments<CliOptions>(args);
            var options = result.MapResult(x => x, x => new CliOptions());
            options.Normalize();
            return options;
        }

        private void Normalize()
        {
            // Support for the original path setup
            const string solutionDir = "../../../";

            if (string.IsNullOrWhiteSpace(RootDir) &&
                string.IsNullOrWhiteSpace(IncludesDir) &&
                string.IsNullOrWhiteSpace(BinDir))
                RootDir = Path.Combine(solutionDir, "kedacom");

            if (string.IsNullOrWhiteSpace(OutputDir)) OutputDir = Path.Combine(solutionDir, "Kedacom.AutoGen/");

            // If the RootDir option is specified, it will take precedence
            if (!string.IsNullOrWhiteSpace(RootDir))
            {
                IncludesDir = Path.Combine(RootDir, "include");
                BinDir = Path.Combine(RootDir, "bin/x64");
                RootDir = null;
            }

            // Fail if required options are not specified
            if (string.IsNullOrWhiteSpace(BinDir))
            {
                Console.WriteLine("The path to the directory that contains " +
                                  "the binaries is missing (specify it using -b or --bin).");
                Environment.Exit(1);
            }

            if (string.IsNullOrWhiteSpace(IncludesDir))
            {
                Console.WriteLine("The path to the directory that contains " +
                                  "the headers is missing (specify it using -h or --headers).");
                Environment.Exit(1);
            }

            // Check paths exist
            if (!Directory.Exists(BinDir))
            {
                Console.WriteLine("The path to the directory that contains " +
                                  "the binaries does not exist.");
                Environment.Exit(1);
            }

            if (!Directory.Exists(IncludesDir))
            {
                Console.WriteLine("The path to the directory that contains " +
                                  "the headers does not exist.");
                Environment.Exit(1);
            }

            if (!Directory.Exists(OutputDir))
            {
                Console.WriteLine("The output directory does not exist.");
                Environment.Exit(1);
            }

            // Resolve paths
            IncludesDir = Path.GetFullPath(IncludesDir);
            BinDir = Path.GetFullPath(BinDir);
            OutputDir = Path.GetFullPath(OutputDir);
        }
    }
}
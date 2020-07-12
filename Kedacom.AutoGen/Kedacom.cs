using System;
using System.Collections.Generic;
using System.Linq;
using Kedacom.AutoGen.Native;

namespace Kedacom.AutoGen
{
    public delegate IntPtr GetOrLoadLibrary(string libraryName);

    public static partial class Kedacom
    {
        private static readonly object SyncRoot = new object();

        public static readonly Dictionary<string, string[]> LibraryDependenciesMap =
            new Dictionary<string, string[]>
            {
                {"ipcsdk", new string[] {}},
            };

        public static readonly Dictionary<string, IntPtr> LoadedLibraries = new Dictionary<string, IntPtr>();

        static Kedacom()
        {
            GetOrLoadLibrary = libraryName => LoadLibrary(libraryName, true);
        }

        /// <summary>
        ///     Gets or sets the root path for loading libraries.
        /// </summary>
        /// <value>The root path.</value>
        public static string RootPath { get; set; } = string.Empty;

        public static GetOrLoadLibrary GetOrLoadLibrary { get; set; }

        public static T GetFunctionDelegate<T>(IntPtr libraryHandle, string functionName)
            => FunctionLoader.GetFunctionDelegate<T>(libraryHandle, functionName);

        private static IntPtr LoadLibrary(string libraryName, bool throwException)
        {
            if (LoadedLibraries.TryGetValue(libraryName, out var ptr)) return ptr;

            lock (SyncRoot)
            {
                if (LoadedLibraries.TryGetValue(libraryName, out ptr)) return ptr;

                var dependencies = LibraryDependenciesMap[libraryName];
                dependencies.Where(n => !LoadedLibraries.ContainsKey(n) && !n.Equals(libraryName))
                    .ToList()
                    .ForEach(n => LoadLibrary(n, false));

                var version = LibraryVersionMap[libraryName];
                ptr = LibraryLoader.LoadNativeLibrary(RootPath, libraryName, version);

                if (ptr != IntPtr.Zero) LoadedLibraries.Add(libraryName, ptr);
                else if (throwException)
                {
                    throw new DllNotFoundException(
                        $"Unable to load DLL '{libraryName}.{version}': The specified module could not be found.");
                }

                return ptr;
            }
        }
    }
}
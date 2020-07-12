using System;
using System.Collections.Generic;
using System.Drawing;
using System.Drawing.Imaging;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;

namespace FFmpeg.AutoGen.Example
{
    internal class Program
    {
        private static void Main(string[] args)
        {
            Console.WriteLine("Current directory: " + Environment.CurrentDirectory);
            Console.WriteLine("Running in {0}-bit mode.", Environment.Is64BitProcess ? "64" : "32");

            Console.WriteLine($"version info: {Kedacom.AutoGen.Kedacom.IPC_GetVersion()}");
        }
    }
}

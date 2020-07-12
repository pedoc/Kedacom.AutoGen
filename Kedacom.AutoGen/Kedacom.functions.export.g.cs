using System;
using System.Runtime.InteropServices;

namespace Kedacom.AutoGen
{
    public unsafe static partial class Kedacom
    {
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_AddConnectDetect_delegate(void* @pHandle, uint @dwConnectTimeOut, uint @dwReConnectTimes, void* @pcbfFun, void* @pContext, uint* @pErrorCode);
        private static IPC_AddConnectDetect_delegate IPC_AddConnectDetect_fptr = (void* @pHandle, uint @dwConnectTimeOut, uint @dwReConnectTimes, void* @pcbfFun, void* @pContext, uint* @pErrorCode) =>
        {
            IPC_AddConnectDetect_fptr = GetFunctionDelegate<IPC_AddConnectDetect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_AddConnectDetect");
            if (IPC_AddConnectDetect_fptr == null)
            {
                IPC_AddConnectDetect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_AddConnectDetect is not supported on this platform.");
                };
            }
            return IPC_AddConnectDetect_fptr(@pHandle, @dwConnectTimeOut, @dwReConnectTimes, @pcbfFun, @pContext, @pErrorCode);
        };
        public static int IPC_AddConnectDetect(void* @pHandle, uint @dwConnectTimeOut, uint @dwReConnectTimes, void* @pcbfFun, void* @pContext, uint* @pErrorCode)
        {
            return IPC_AddConnectDetect_fptr(@pHandle, @dwConnectTimeOut, @dwReConnectTimes, @pcbfFun, @pContext, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_AddUser_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_AddUser_delegate IPC_AddUser_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_AddUser_fptr = GetFunctionDelegate<IPC_AddUser_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_AddUser");
            if (IPC_AddUser_fptr == null)
            {
                IPC_AddUser_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_AddUser is not supported on this platform.");
                };
            }
            return IPC_AddUser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_AddUser(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_AddUser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_AssMalfInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_AssMalfInfo_delegate IPC_AssMalfInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_AssMalfInfo_fptr = GetFunctionDelegate<IPC_AssMalfInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_AssMalfInfo");
            if (IPC_AssMalfInfo_fptr == null)
            {
                IPC_AssMalfInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_AssMalfInfo is not supported on this platform.");
                };
            }
            return IPC_AssMalfInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_AssMalfInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_AssMalfInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_AssTeleZoomInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_AssTeleZoomInfo_delegate IPC_AssTeleZoomInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_AssTeleZoomInfo_fptr = GetFunctionDelegate<IPC_AssTeleZoomInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_AssTeleZoomInfo");
            if (IPC_AssTeleZoomInfo_fptr == null)
            {
                IPC_AssTeleZoomInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_AssTeleZoomInfo is not supported on this platform.");
                };
            }
            return IPC_AssTeleZoomInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_AssTeleZoomInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_AssTeleZoomInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_CheckConnectLost_delegate(uint @dwIp, ushort @wPort);
        private static IPC_CheckConnectLost_delegate IPC_CheckConnectLost_fptr = (uint @dwIp, ushort @wPort) =>
        {
            IPC_CheckConnectLost_fptr = GetFunctionDelegate<IPC_CheckConnectLost_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_CheckConnectLost");
            if (IPC_CheckConnectLost_fptr == null)
            {
                IPC_CheckConnectLost_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_CheckConnectLost is not supported on this platform.");
                };
            }
            return IPC_CheckConnectLost_fptr(@dwIp, @wPort);
        };
        public static int IPC_CheckConnectLost(uint @dwIp, ushort @wPort)
        {
            return IPC_CheckConnectLost_fptr(@dwIp, @wPort);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_ConfigDownload_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_ConfigDownload_delegate IPC_ConfigDownload_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_ConfigDownload_fptr = GetFunctionDelegate<IPC_ConfigDownload_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_ConfigDownload");
            if (IPC_ConfigDownload_fptr == null)
            {
                IPC_ConfigDownload_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_ConfigDownload is not supported on this platform.");
                };
            }
            return IPC_ConfigDownload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_ConfigDownload(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_ConfigDownload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_ConfigUpload_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_ConfigUpload_delegate IPC_ConfigUpload_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_ConfigUpload_fptr = GetFunctionDelegate<IPC_ConfigUpload_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_ConfigUpload");
            if (IPC_ConfigUpload_fptr == null)
            {
                IPC_ConfigUpload_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_ConfigUpload is not supported on this platform.");
                };
            }
            return IPC_ConfigUpload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_ConfigUpload(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_ConfigUpload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_CreateHandle_delegate(uint @dwIP, ushort @wPort, byte* @pName, byte* @pPassword);
        private static IPC_CreateHandle_delegate IPC_CreateHandle_fptr = (uint @dwIP, ushort @wPort, byte* @pName, byte* @pPassword) =>
        {
            IPC_CreateHandle_fptr = GetFunctionDelegate<IPC_CreateHandle_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_CreateHandle");
            if (IPC_CreateHandle_fptr == null)
            {
                IPC_CreateHandle_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_CreateHandle is not supported on this platform.");
                };
            }
            return IPC_CreateHandle_fptr(@dwIP, @wPort, @pName, @pPassword);
        };
        public static uint IPC_CreateHandle(uint @dwIP, ushort @wPort, byte* @pName, byte* @pPassword)
        {
            return IPC_CreateHandle_fptr(@dwIP, @wPort, @pName, @pPassword);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_DelConnectDetect_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_DelConnectDetect_delegate IPC_DelConnectDetect_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_DelConnectDetect_fptr = GetFunctionDelegate<IPC_DelConnectDetect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_DelConnectDetect");
            if (IPC_DelConnectDetect_fptr == null)
            {
                IPC_DelConnectDetect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_DelConnectDetect is not supported on this platform.");
                };
            }
            return IPC_DelConnectDetect_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_DelConnectDetect(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_DelConnectDetect_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_DelUser_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_DelUser_delegate IPC_DelUser_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_DelUser_fptr = GetFunctionDelegate<IPC_DelUser_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_DelUser");
            if (IPC_DelUser_fptr == null)
            {
                IPC_DelUser_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_DelUser is not supported on this platform.");
                };
            }
            return IPC_DelUser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_DelUser(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_DelUser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_DestroyHandle_delegate();
        private static IPC_DestroyHandle_delegate IPC_DestroyHandle_fptr = () =>
        {
            IPC_DestroyHandle_fptr = GetFunctionDelegate<IPC_DestroyHandle_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_DestroyHandle");
            if (IPC_DestroyHandle_fptr == null)
            {
                IPC_DestroyHandle_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_DestroyHandle is not supported on this platform.");
                };
            }
            return IPC_DestroyHandle_fptr();
        };
        public static int IPC_DestroyHandle()
        {
            return IPC_DestroyHandle_fptr();
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_DiskFomat_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_DiskFomat_delegate IPC_DiskFomat_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_DiskFomat_fptr = GetFunctionDelegate<IPC_DiskFomat_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_DiskFomat");
            if (IPC_DiskFomat_fptr == null)
            {
                IPC_DiskFomat_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_DiskFomat is not supported on this platform.");
                };
            }
            return IPC_DiskFomat_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_DiskFomat(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_DiskFomat_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Get2DDenoise_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_Get2DDenoise_delegate IPC_Get2DDenoise_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_Get2DDenoise_fptr = GetFunctionDelegate<IPC_Get2DDenoise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Get2DDenoise");
            if (IPC_Get2DDenoise_fptr == null)
            {
                IPC_Get2DDenoise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Get2DDenoise is not supported on this platform.");
                };
            }
            return IPC_Get2DDenoise_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_Get2DDenoise(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_Get2DDenoise_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Get3DDenoise_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_Get3DDenoise_delegate IPC_Get3DDenoise_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_Get3DDenoise_fptr = GetFunctionDelegate<IPC_Get3DDenoise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Get3DDenoise");
            if (IPC_Get3DDenoise_fptr == null)
            {
                IPC_Get3DDenoise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Get3DDenoise is not supported on this platform.");
                };
            }
            return IPC_Get3DDenoise_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_Get3DDenoise(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_Get3DDenoise_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Get8021x_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode);
        private static IPC_Get8021x_delegate IPC_Get8021x_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_Get8021x_fptr = GetFunctionDelegate<IPC_Get8021x_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Get8021x");
            if (IPC_Get8021x_fptr == null)
            {
                IPC_Get8021x_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Get8021x is not supported on this platform.");
                };
            }
            return IPC_Get8021x_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_Get8021x(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode)
        {
            return IPC_Get8021x_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAdvanced_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetAdvanced_delegate IPC_GetAdvanced_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetAdvanced_fptr = GetFunctionDelegate<IPC_GetAdvanced_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAdvanced");
            if (IPC_GetAdvanced_fptr == null)
            {
                IPC_GetAdvanced_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAdvanced is not supported on this platform.");
                };
            }
            return IPC_GetAdvanced_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetAdvanced(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetAdvanced_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAlarmIn_delegate(void* @pHandle, byte* @pAlmNum, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetAlarmIn_delegate IPC_GetAlarmIn_fptr = (void* @pHandle, byte* @pAlmNum, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetAlarmIn_fptr = GetFunctionDelegate<IPC_GetAlarmIn_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAlarmIn");
            if (IPC_GetAlarmIn_fptr == null)
            {
                IPC_GetAlarmIn_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAlarmIn is not supported on this platform.");
                };
            }
            return IPC_GetAlarmIn_fptr(@pHandle, @pAlmNum, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetAlarmIn(void* @pHandle, byte* @pAlmNum, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetAlarmIn_fptr(@pHandle, @pAlmNum, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAlarmOut_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAlarmOut_delegate IPC_GetAlarmOut_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAlarmOut_fptr = GetFunctionDelegate<IPC_GetAlarmOut_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAlarmOut");
            if (IPC_GetAlarmOut_fptr == null)
            {
                IPC_GetAlarmOut_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAlarmOut is not supported on this platform.");
                };
            }
            return IPC_GetAlarmOut_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAlarmOut(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAlarmOut_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAreaDetectEnter_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAreaDetectEnter_delegate IPC_GetAreaDetectEnter_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAreaDetectEnter_fptr = GetFunctionDelegate<IPC_GetAreaDetectEnter_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAreaDetectEnter");
            if (IPC_GetAreaDetectEnter_fptr == null)
            {
                IPC_GetAreaDetectEnter_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAreaDetectEnter is not supported on this platform.");
                };
            }
            return IPC_GetAreaDetectEnter_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAreaDetectEnter(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAreaDetectEnter_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAreaDetectEntry_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAreaDetectEntry_delegate IPC_GetAreaDetectEntry_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAreaDetectEntry_fptr = GetFunctionDelegate<IPC_GetAreaDetectEntry_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAreaDetectEntry");
            if (IPC_GetAreaDetectEntry_fptr == null)
            {
                IPC_GetAreaDetectEntry_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAreaDetectEntry is not supported on this platform.");
                };
            }
            return IPC_GetAreaDetectEntry_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAreaDetectEntry(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAreaDetectEntry_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAreaDetectExit_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAreaDetectExit_delegate IPC_GetAreaDetectExit_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAreaDetectExit_fptr = GetFunctionDelegate<IPC_GetAreaDetectExit_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAreaDetectExit");
            if (IPC_GetAreaDetectExit_fptr == null)
            {
                IPC_GetAreaDetectExit_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAreaDetectExit is not supported on this platform.");
                };
            }
            return IPC_GetAreaDetectExit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAreaDetectExit(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAreaDetectExit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAssMalfInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAssMalfInfo_delegate IPC_GetAssMalfInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAssMalfInfo_fptr = GetFunctionDelegate<IPC_GetAssMalfInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAssMalfInfo");
            if (IPC_GetAssMalfInfo_fptr == null)
            {
                IPC_GetAssMalfInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAssMalfInfo is not supported on this platform.");
                };
            }
            return IPC_GetAssMalfInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAssMalfInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAssMalfInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAssTeleZoomInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAssTeleZoomInfo_delegate IPC_GetAssTeleZoomInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAssTeleZoomInfo_fptr = GetFunctionDelegate<IPC_GetAssTeleZoomInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAssTeleZoomInfo");
            if (IPC_GetAssTeleZoomInfo_fptr == null)
            {
                IPC_GetAssTeleZoomInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAssTeleZoomInfo is not supported on this platform.");
                };
            }
            return IPC_GetAssTeleZoomInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAssTeleZoomInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAssTeleZoomInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAudioDec_delegate(void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetAudioDec_delegate IPC_GetAudioDec_fptr = (void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetAudioDec_fptr = GetFunctionDelegate<IPC_GetAudioDec_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAudioDec");
            if (IPC_GetAudioDec_fptr == null)
            {
                IPC_GetAudioDec_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAudioDec is not supported on this platform.");
                };
            }
            return IPC_GetAudioDec_fptr(@pHandle, @byVideoSource, @byStreamId, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetAudioDec(void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetAudioDec_fptr(@pHandle, @byVideoSource, @byStreamId, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAudioEnc_delegate(void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetAudioEnc_delegate IPC_GetAudioEnc_fptr = (void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetAudioEnc_fptr = GetFunctionDelegate<IPC_GetAudioEnc_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAudioEnc");
            if (IPC_GetAudioEnc_fptr == null)
            {
                IPC_GetAudioEnc_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAudioEnc is not supported on this platform.");
                };
            }
            return IPC_GetAudioEnc_fptr(@pHandle, @byVideoSource, @byStreamId, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetAudioEnc(void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetAudioEnc_fptr(@pHandle, @byVideoSource, @byStreamId, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAudioExcept_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAudioExcept_delegate IPC_GetAudioExcept_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAudioExcept_fptr = GetFunctionDelegate<IPC_GetAudioExcept_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAudioExcept");
            if (IPC_GetAudioExcept_fptr == null)
            {
                IPC_GetAudioExcept_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAudioExcept is not supported on this platform.");
                };
            }
            return IPC_GetAudioExcept_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAudioExcept(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAudioExcept_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetAuthMode_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetAuthMode_delegate IPC_GetAuthMode_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetAuthMode_fptr = GetFunctionDelegate<IPC_GetAuthMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetAuthMode");
            if (IPC_GetAuthMode_fptr == null)
            {
                IPC_GetAuthMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetAuthMode is not supported on this platform.");
                };
            }
            return IPC_GetAuthMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetAuthMode(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetAuthMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetBasicPos_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetBasicPos_delegate IPC_GetBasicPos_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetBasicPos_fptr = GetFunctionDelegate<IPC_GetBasicPos_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetBasicPos");
            if (IPC_GetBasicPos_fptr == null)
            {
                IPC_GetBasicPos_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetBasicPos is not supported on this platform.");
                };
            }
            return IPC_GetBasicPos_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetBasicPos(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetBasicPos_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetBatteryStatus_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetBatteryStatus_delegate IPC_GetBatteryStatus_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetBatteryStatus_fptr = GetFunctionDelegate<IPC_GetBatteryStatus_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetBatteryStatus");
            if (IPC_GetBatteryStatus_fptr == null)
            {
                IPC_GetBatteryStatus_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetBatteryStatus is not supported on this platform.");
                };
            }
            return IPC_GetBatteryStatus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetBatteryStatus(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetBatteryStatus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetBLC_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetBLC_delegate IPC_GetBLC_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetBLC_fptr = GetFunctionDelegate<IPC_GetBLC_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetBLC");
            if (IPC_GetBLC_fptr == null)
            {
                IPC_GetBLC_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetBLC is not supported on this platform.");
                };
            }
            return IPC_GetBLC_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetBLC(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetBLC_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetCap_delegate(void* @pHandle, ushort @nCap, byte*[] @apCapName, uint[] @anCapOut, uint* @pErrorCode);
        private static IPC_GetCap_delegate IPC_GetCap_fptr = (void* @pHandle, ushort @nCap, byte*[] @apCapName, uint[] @anCapOut, uint* @pErrorCode) =>
        {
            IPC_GetCap_fptr = GetFunctionDelegate<IPC_GetCap_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetCap");
            if (IPC_GetCap_fptr == null)
            {
                IPC_GetCap_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetCap is not supported on this platform.");
                };
            }
            return IPC_GetCap_fptr(@pHandle, @nCap, @apCapName, @anCapOut, @pErrorCode);
        };
        public static int IPC_GetCap(void* @pHandle, ushort @nCap, byte*[] @apCapName, uint[] @anCapOut, uint* @pErrorCode)
        {
            return IPC_GetCap_fptr(@pHandle, @nCap, @apCapName, @anCapOut, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetCheckPointOsd_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetCheckPointOsd_delegate IPC_GetCheckPointOsd_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetCheckPointOsd_fptr = GetFunctionDelegate<IPC_GetCheckPointOsd_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetCheckPointOsd");
            if (IPC_GetCheckPointOsd_fptr == null)
            {
                IPC_GetCheckPointOsd_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetCheckPointOsd is not supported on this platform.");
                };
            }
            return IPC_GetCheckPointOsd_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetCheckPointOsd(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetCheckPointOsd_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetColor_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetColor_delegate IPC_GetColor_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetColor_fptr = GetFunctionDelegate<IPC_GetColor_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetColor");
            if (IPC_GetColor_fptr == null)
            {
                IPC_GetColor_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetColor is not supported on this platform.");
                };
            }
            return IPC_GetColor_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetColor(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetColor_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetColorSize_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetColorSize_delegate IPC_GetColorSize_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetColorSize_fptr = GetFunctionDelegate<IPC_GetColorSize_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetColorSize");
            if (IPC_GetColorSize_fptr == null)
            {
                IPC_GetColorSize_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetColorSize is not supported on this platform.");
                };
            }
            return IPC_GetColorSize_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetColorSize(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetColorSize_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetCompileTime_delegate(byte* @szCompileTime, uint* @pErrorCode);
        private static IPC_GetCompileTime_delegate IPC_GetCompileTime_fptr = (byte* @szCompileTime, uint* @pErrorCode) =>
        {
            IPC_GetCompileTime_fptr = GetFunctionDelegate<IPC_GetCompileTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetCompileTime");
            if (IPC_GetCompileTime_fptr == null)
            {
                IPC_GetCompileTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetCompileTime is not supported on this platform.");
                };
            }
            return IPC_GetCompileTime_fptr(@szCompileTime, @pErrorCode);
        };
        public static int IPC_GetCompileTime(byte* @szCompileTime, uint* @pErrorCode)
        {
            return IPC_GetCompileTime_fptr(@szCompileTime, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetCorridorMode_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetCorridorMode_delegate IPC_GetCorridorMode_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetCorridorMode_fptr = GetFunctionDelegate<IPC_GetCorridorMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetCorridorMode");
            if (IPC_GetCorridorMode_fptr == null)
            {
                IPC_GetCorridorMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetCorridorMode is not supported on this platform.");
                };
            }
            return IPC_GetCorridorMode_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetCorridorMode(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetCorridorMode_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetDdns_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode);
        private static IPC_GetDdns_delegate IPC_GetDdns_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetDdns_fptr = GetFunctionDelegate<IPC_GetDdns_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetDdns");
            if (IPC_GetDdns_fptr == null)
            {
                IPC_GetDdns_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetDdns is not supported on this platform.");
                };
            }
            return IPC_GetDdns_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetDdns(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetDdns_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetDdnsState_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetDdnsState_delegate IPC_GetDdnsState_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetDdnsState_fptr = GetFunctionDelegate<IPC_GetDdnsState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetDdnsState");
            if (IPC_GetDdnsState_fptr == null)
            {
                IPC_GetDdnsState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetDdnsState is not supported on this platform.");
                };
            }
            return IPC_GetDdnsState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetDdnsState(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetDdnsState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetDetect_delegate(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetDetect_delegate IPC_GetDetect_fptr = (void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetDetect_fptr = GetFunctionDelegate<IPC_GetDetect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetDetect");
            if (IPC_GetDetect_fptr == null)
            {
                IPC_GetDetect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetDetect is not supported on this platform.");
                };
            }
            return IPC_GetDetect_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetDetect(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetDetect_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetDeviceInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetDeviceInfo_delegate IPC_GetDeviceInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetDeviceInfo_fptr = GetFunctionDelegate<IPC_GetDeviceInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetDeviceInfo");
            if (IPC_GetDeviceInfo_fptr == null)
            {
                IPC_GetDeviceInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetDeviceInfo is not supported on this platform.");
                };
            }
            return IPC_GetDeviceInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetDeviceInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetDeviceInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetDpss_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetDpss_delegate IPC_GetDpss_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetDpss_fptr = GetFunctionDelegate<IPC_GetDpss_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetDpss");
            if (IPC_GetDpss_fptr == null)
            {
                IPC_GetDpss_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetDpss is not supported on this platform.");
                };
            }
            return IPC_GetDpss_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetDpss(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetDpss_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetDST_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetDST_delegate IPC_GetDST_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetDST_fptr = GetFunctionDelegate<IPC_GetDST_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetDST");
            if (IPC_GetDST_fptr == null)
            {
                IPC_GetDST_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetDST is not supported on this platform.");
                };
            }
            return IPC_GetDST_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetDST(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetDST_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetEventManualSnap_delegate(void* @pHandle, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetEventManualSnap_delegate IPC_GetEventManualSnap_fptr = (void* @pHandle, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetEventManualSnap_fptr = GetFunctionDelegate<IPC_GetEventManualSnap_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetEventManualSnap");
            if (IPC_GetEventManualSnap_fptr == null)
            {
                IPC_GetEventManualSnap_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetEventManualSnap is not supported on this platform.");
                };
            }
            return IPC_GetEventManualSnap_fptr(@pHandle, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetEventManualSnap(void* @pHandle, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetEventManualSnap_fptr(@pHandle, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetEventTime_delegate(void* @pHandle, byte* @pEventType, byte* @pIndex, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetEventTime_delegate IPC_GetEventTime_fptr = (void* @pHandle, byte* @pEventType, byte* @pIndex, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetEventTime_fptr = GetFunctionDelegate<IPC_GetEventTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetEventTime");
            if (IPC_GetEventTime_fptr == null)
            {
                IPC_GetEventTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetEventTime is not supported on this platform.");
                };
            }
            return IPC_GetEventTime_fptr(@pHandle, @pEventType, @pIndex, @pTimeArr, @nLenTime, @nLenTimeStruct, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetEventTime(void* @pHandle, byte* @pEventType, byte* @pIndex, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetEventTime_fptr(@pHandle, @pEventType, @pIndex, @pTimeArr, @nLenTime, @nLenTimeStruct, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetExcept_delegate(void* @pHandle, byte* @pExceptType, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetExcept_delegate IPC_GetExcept_fptr = (void* @pHandle, byte* @pExceptType, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetExcept_fptr = GetFunctionDelegate<IPC_GetExcept_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetExcept");
            if (IPC_GetExcept_fptr == null)
            {
                IPC_GetExcept_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetExcept is not supported on this platform.");
                };
            }
            return IPC_GetExcept_fptr(@pHandle, @pExceptType, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetExcept(void* @pHandle, byte* @pExceptType, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetExcept_fptr(@pHandle, @pExceptType, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetExceptType_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetExceptType_delegate IPC_GetExceptType_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetExceptType_fptr = GetFunctionDelegate<IPC_GetExceptType_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetExceptType");
            if (IPC_GetExceptType_fptr == null)
            {
                IPC_GetExceptType_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetExceptType is not supported on this platform.");
                };
            }
            return IPC_GetExceptType_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetExceptType(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetExceptType_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetFaceDetect_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetFaceDetect_delegate IPC_GetFaceDetect_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetFaceDetect_fptr = GetFunctionDelegate<IPC_GetFaceDetect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetFaceDetect");
            if (IPC_GetFaceDetect_fptr == null)
            {
                IPC_GetFaceDetect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetFaceDetect is not supported on this platform.");
                };
            }
            return IPC_GetFaceDetect_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetFaceDetect(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetFaceDetect_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetFillLight_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetFillLight_delegate IPC_GetFillLight_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetFillLight_fptr = GetFunctionDelegate<IPC_GetFillLight_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetFillLight");
            if (IPC_GetFillLight_fptr == null)
            {
                IPC_GetFillLight_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetFillLight is not supported on this platform.");
                };
            }
            return IPC_GetFillLight_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetFillLight(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetFillLight_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetFocus_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetFocus_delegate IPC_GetFocus_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetFocus_fptr = GetFunctionDelegate<IPC_GetFocus_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetFocus");
            if (IPC_GetFocus_fptr == null)
            {
                IPC_GetFocus_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetFocus is not supported on this platform.");
                };
            }
            return IPC_GetFocus_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetFocus(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetFocus_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetFogThrough_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetFogThrough_delegate IPC_GetFogThrough_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetFogThrough_fptr = GetFunctionDelegate<IPC_GetFogThrough_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetFogThrough");
            if (IPC_GetFogThrough_fptr == null)
            {
                IPC_GetFogThrough_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetFogThrough is not supported on this platform.");
                };
            }
            return IPC_GetFogThrough_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetFogThrough(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetFogThrough_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetFomatProgress_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetFomatProgress_delegate IPC_GetFomatProgress_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetFomatProgress_fptr = GetFunctionDelegate<IPC_GetFomatProgress_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetFomatProgress");
            if (IPC_GetFomatProgress_fptr == null)
            {
                IPC_GetFomatProgress_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetFomatProgress is not supported on this platform.");
                };
            }
            return IPC_GetFomatProgress_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetFomatProgress(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetFomatProgress_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetGain_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetGain_delegate IPC_GetGain_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetGain_fptr = GetFunctionDelegate<IPC_GetGain_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetGain");
            if (IPC_GetGain_fptr == null)
            {
                IPC_GetGain_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetGain is not supported on this platform.");
                };
            }
            return IPC_GetGain_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetGain(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetGain_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetGamma_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetGamma_delegate IPC_GetGamma_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetGamma_fptr = GetFunctionDelegate<IPC_GetGamma_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetGamma");
            if (IPC_GetGamma_fptr == null)
            {
                IPC_GetGamma_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetGamma is not supported on this platform.");
                };
            }
            return IPC_GetGamma_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetGamma(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetGamma_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetGB28181_delegate(void* @pHandle, byte* @byPlateid, void* @pInfo, int @nLenInfo, void* @pEncChnArr, int* @nLenEncChnInfo, void* @pAlarmChnArr, int* @nLenAlarmChnInfo, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode);
        private static IPC_GetGB28181_delegate IPC_GetGB28181_fptr = (void* @pHandle, byte* @byPlateid, void* @pInfo, int @nLenInfo, void* @pEncChnArr, int* @nLenEncChnInfo, void* @pAlarmChnArr, int* @nLenAlarmChnInfo, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetGB28181_fptr = GetFunctionDelegate<IPC_GetGB28181_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetGB28181");
            if (IPC_GetGB28181_fptr == null)
            {
                IPC_GetGB28181_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetGB28181 is not supported on this platform.");
                };
            }
            return IPC_GetGB28181_fptr(@pHandle, @byPlateid, @pInfo, @nLenInfo, @pEncChnArr, @nLenEncChnInfo, @pAlarmChnArr, @nLenAlarmChnInfo, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetGB28181(void* @pHandle, byte* @byPlateid, void* @pInfo, int @nLenInfo, void* @pEncChnArr, int* @nLenEncChnInfo, void* @pAlarmChnArr, int* @nLenAlarmChnInfo, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetGB28181_fptr(@pHandle, @byPlateid, @pInfo, @nLenInfo, @pEncChnArr, @nLenEncChnInfo, @pAlarmChnArr, @nLenAlarmChnInfo, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetGpsInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetGpsInfo_delegate IPC_GetGpsInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetGpsInfo_fptr = GetFunctionDelegate<IPC_GetGpsInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetGpsInfo");
            if (IPC_GetGpsInfo_fptr == null)
            {
                IPC_GetGpsInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetGpsInfo is not supported on this platform.");
                };
            }
            return IPC_GetGpsInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetGpsInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetGpsInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetHLC_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetHLC_delegate IPC_GetHLC_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetHLC_fptr = GetFunctionDelegate<IPC_GetHLC_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetHLC");
            if (IPC_GetHLC_fptr == null)
            {
                IPC_GetHLC_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetHLC is not supported on this platform.");
                };
            }
            return IPC_GetHLC_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetHLC(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetHLC_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GethotPointState_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GethotPointState_delegate IPC_GethotPointState_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GethotPointState_fptr = GetFunctionDelegate<IPC_GethotPointState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GethotPointState");
            if (IPC_GethotPointState_fptr == null)
            {
                IPC_GethotPointState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GethotPointState is not supported on this platform.");
                };
            }
            return IPC_GethotPointState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GethotPointState(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GethotPointState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetImageMode_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetImageMode_delegate IPC_GetImageMode_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetImageMode_fptr = GetFunctionDelegate<IPC_GetImageMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetImageMode");
            if (IPC_GetImageMode_fptr == null)
            {
                IPC_GetImageMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetImageMode is not supported on this platform.");
                };
            }
            return IPC_GetImageMode_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetImageMode(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetImageMode_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetInfoFromHandle_delegate(uint @dwHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetInfoFromHandle_delegate IPC_GetInfoFromHandle_fptr = (uint @dwHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetInfoFromHandle_fptr = GetFunctionDelegate<IPC_GetInfoFromHandle_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetInfoFromHandle");
            if (IPC_GetInfoFromHandle_fptr == null)
            {
                IPC_GetInfoFromHandle_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetInfoFromHandle is not supported on this platform.");
                };
            }
            return IPC_GetInfoFromHandle_fptr(@dwHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetInfoFromHandle(uint @dwHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetInfoFromHandle_fptr(@dwHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetInfrared_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetInfrared_delegate IPC_GetInfrared_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetInfrared_fptr = GetFunctionDelegate<IPC_GetInfrared_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetInfrared");
            if (IPC_GetInfrared_fptr == null)
            {
                IPC_GetInfrared_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetInfrared is not supported on this platform.");
                };
            }
            return IPC_GetInfrared_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetInfrared(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetInfrared_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetIpInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetIpInfo_delegate IPC_GetIpInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetIpInfo_fptr = GetFunctionDelegate<IPC_GetIpInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetIpInfo");
            if (IPC_GetIpInfo_fptr == null)
            {
                IPC_GetIpInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetIpInfo is not supported on this platform.");
                };
            }
            return IPC_GetIpInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetIpInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetIpInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetIris_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetIris_delegate IPC_GetIris_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetIris_fptr = GetFunctionDelegate<IPC_GetIris_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetIris");
            if (IPC_GetIris_fptr == null)
            {
                IPC_GetIris_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetIris is not supported on this platform.");
                };
            }
            return IPC_GetIris_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetIris(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetIris_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetKSnmp_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetKSnmp_delegate IPC_GetKSnmp_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetKSnmp_fptr = GetFunctionDelegate<IPC_GetKSnmp_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetKSnmp");
            if (IPC_GetKSnmp_fptr == null)
            {
                IPC_GetKSnmp_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetKSnmp is not supported on this platform.");
                };
            }
            return IPC_GetKSnmp_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetKSnmp(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetKSnmp_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetLaser_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetLaser_delegate IPC_GetLaser_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetLaser_fptr = GetFunctionDelegate<IPC_GetLaser_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetLaser");
            if (IPC_GetLaser_fptr == null)
            {
                IPC_GetLaser_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetLaser is not supported on this platform.");
                };
            }
            return IPC_GetLaser_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetLaser(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetLaser_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetLocalEcho_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetLocalEcho_delegate IPC_GetLocalEcho_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetLocalEcho_fptr = GetFunctionDelegate<IPC_GetLocalEcho_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetLocalEcho");
            if (IPC_GetLocalEcho_fptr == null)
            {
                IPC_GetLocalEcho_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetLocalEcho is not supported on this platform.");
                };
            }
            return IPC_GetLocalEcho_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetLocalEcho(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetLocalEcho_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetMobilenetwork_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetMobilenetwork_delegate IPC_GetMobilenetwork_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetMobilenetwork_fptr = GetFunctionDelegate<IPC_GetMobilenetwork_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetMobilenetwork");
            if (IPC_GetMobilenetwork_fptr == null)
            {
                IPC_GetMobilenetwork_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetMobilenetwork is not supported on this platform.");
                };
            }
            return IPC_GetMobilenetwork_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetMobilenetwork(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetMobilenetwork_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetMTCF_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetMTCF_delegate IPC_GetMTCF_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetMTCF_fptr = GetFunctionDelegate<IPC_GetMTCF_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetMTCF");
            if (IPC_GetMTCF_fptr == null)
            {
                IPC_GetMTCF_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetMTCF is not supported on this platform.");
                };
            }
            return IPC_GetMTCF_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetMTCF(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetMTCF_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetMultiVideoMode_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetMultiVideoMode_delegate IPC_GetMultiVideoMode_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetMultiVideoMode_fptr = GetFunctionDelegate<IPC_GetMultiVideoMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetMultiVideoMode");
            if (IPC_GetMultiVideoMode_fptr == null)
            {
                IPC_GetMultiVideoMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetMultiVideoMode is not supported on this platform.");
                };
            }
            return IPC_GetMultiVideoMode_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetMultiVideoMode(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetMultiVideoMode_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetNetPort_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetNetPort_delegate IPC_GetNetPort_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetNetPort_fptr = GetFunctionDelegate<IPC_GetNetPort_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetNetPort");
            if (IPC_GetNetPort_fptr == null)
            {
                IPC_GetNetPort_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetNetPort is not supported on this platform.");
                };
            }
            return IPC_GetNetPort_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetNetPort(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetNetPort_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetObjectLeft_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetObjectLeft_delegate IPC_GetObjectLeft_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetObjectLeft_fptr = GetFunctionDelegate<IPC_GetObjectLeft_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetObjectLeft");
            if (IPC_GetObjectLeft_fptr == null)
            {
                IPC_GetObjectLeft_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetObjectLeft is not supported on this platform.");
                };
            }
            return IPC_GetObjectLeft_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetObjectLeft(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetObjectLeft_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetObjectRemoval_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetObjectRemoval_delegate IPC_GetObjectRemoval_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetObjectRemoval_fptr = GetFunctionDelegate<IPC_GetObjectRemoval_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetObjectRemoval");
            if (IPC_GetObjectRemoval_fptr == null)
            {
                IPC_GetObjectRemoval_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetObjectRemoval is not supported on this platform.");
                };
            }
            return IPC_GetObjectRemoval_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetObjectRemoval(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetObjectRemoval_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetOnvif_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetOnvif_delegate IPC_GetOnvif_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetOnvif_fptr = GetFunctionDelegate<IPC_GetOnvif_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetOnvif");
            if (IPC_GetOnvif_fptr == null)
            {
                IPC_GetOnvif_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetOnvif is not supported on this platform.");
                };
            }
            return IPC_GetOnvif_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetOnvif(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetOnvif_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetOsd_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetOsd_delegate IPC_GetOsd_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetOsd_fptr = GetFunctionDelegate<IPC_GetOsd_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetOsd");
            if (IPC_GetOsd_fptr == null)
            {
                IPC_GetOsd_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetOsd is not supported on this platform.");
                };
            }
            return IPC_GetOsd_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetOsd(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetOsd_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetOsdCap_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetOsdCap_delegate IPC_GetOsdCap_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetOsdCap_fptr = GetFunctionDelegate<IPC_GetOsdCap_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetOsdCap");
            if (IPC_GetOsdCap_fptr == null)
            {
                IPC_GetOsdCap_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetOsdCap is not supported on this platform.");
                };
            }
            return IPC_GetOsdCap_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetOsdCap(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetOsdCap_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetOsdList_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetOsdList_delegate IPC_GetOsdList_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetOsdList_fptr = GetFunctionDelegate<IPC_GetOsdList_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetOsdList");
            if (IPC_GetOsdList_fptr == null)
            {
                IPC_GetOsdList_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetOsdList is not supported on this platform.");
                };
            }
            return IPC_GetOsdList_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetOsdList(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetOsdList_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetOsdStateQuery_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetOsdStateQuery_delegate IPC_GetOsdStateQuery_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetOsdStateQuery_fptr = GetFunctionDelegate<IPC_GetOsdStateQuery_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetOsdStateQuery");
            if (IPC_GetOsdStateQuery_fptr == null)
            {
                IPC_GetOsdStateQuery_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetOsdStateQuery is not supported on this platform.");
                };
            }
            return IPC_GetOsdStateQuery_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetOsdStateQuery(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetOsdStateQuery_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPersonAggregate_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPersonAggregate_delegate IPC_GetPersonAggregate_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPersonAggregate_fptr = GetFunctionDelegate<IPC_GetPersonAggregate_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPersonAggregate");
            if (IPC_GetPersonAggregate_fptr == null)
            {
                IPC_GetPersonAggregate_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPersonAggregate is not supported on this platform.");
                };
            }
            return IPC_GetPersonAggregate_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPersonAggregate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPersonAggregate_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPowerInfo_delegate(void* @pHandle, void* @pParam, int @nLen, int* @nLenStruct, uint* @pErrorCode);
        private static IPC_GetPowerInfo_delegate IPC_GetPowerInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, int* @nLenStruct, uint* @pErrorCode) =>
        {
            IPC_GetPowerInfo_fptr = GetFunctionDelegate<IPC_GetPowerInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPowerInfo");
            if (IPC_GetPowerInfo_fptr == null)
            {
                IPC_GetPowerInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPowerInfo is not supported on this platform.");
                };
            }
            return IPC_GetPowerInfo_fptr(@pHandle, @pParam, @nLen, @nLenStruct, @pErrorCode);
        };
        public static int IPC_GetPowerInfo(void* @pHandle, void* @pParam, int @nLen, int* @nLenStruct, uint* @pErrorCode)
        {
            return IPC_GetPowerInfo_fptr(@pHandle, @pParam, @nLen, @nLenStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPowerLineFrequency_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetPowerLineFrequency_delegate IPC_GetPowerLineFrequency_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetPowerLineFrequency_fptr = GetFunctionDelegate<IPC_GetPowerLineFrequency_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPowerLineFrequency");
            if (IPC_GetPowerLineFrequency_fptr == null)
            {
                IPC_GetPowerLineFrequency_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPowerLineFrequency is not supported on this platform.");
                };
            }
            return IPC_GetPowerLineFrequency_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetPowerLineFrequency(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetPowerLineFrequency_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPPPoE_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPPPoE_delegate IPC_GetPPPoE_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPPPoE_fptr = GetFunctionDelegate<IPC_GetPPPoE_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPPPoE");
            if (IPC_GetPPPoE_fptr == null)
            {
                IPC_GetPPPoE_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPPPoE is not supported on this platform.");
                };
            }
            return IPC_GetPPPoE_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPPPoE(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPPPoE_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzBase_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzBase_delegate IPC_GetPtzBase_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzBase_fptr = GetFunctionDelegate<IPC_GetPtzBase_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzBase");
            if (IPC_GetPtzBase_fptr == null)
            {
                IPC_GetPtzBase_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzBase is not supported on this platform.");
                };
            }
            return IPC_GetPtzBase_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzBase(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzBase_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzCoorDinate_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetPtzCoorDinate_delegate IPC_GetPtzCoorDinate_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetPtzCoorDinate_fptr = GetFunctionDelegate<IPC_GetPtzCoorDinate_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzCoorDinate");
            if (IPC_GetPtzCoorDinate_fptr == null)
            {
                IPC_GetPtzCoorDinate_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzCoorDinate is not supported on this platform.");
                };
            }
            return IPC_GetPtzCoorDinate_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetPtzCoorDinate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetPtzCoorDinate_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzDevCheckRlt_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzDevCheckRlt_delegate IPC_GetPtzDevCheckRlt_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzDevCheckRlt_fptr = GetFunctionDelegate<IPC_GetPtzDevCheckRlt_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzDevCheckRlt");
            if (IPC_GetPtzDevCheckRlt_fptr == null)
            {
                IPC_GetPtzDevCheckRlt_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzDevCheckRlt is not supported on this platform.");
                };
            }
            return IPC_GetPtzDevCheckRlt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzDevCheckRlt(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzDevCheckRlt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzHVangle_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzHVangle_delegate IPC_GetPtzHVangle_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzHVangle_fptr = GetFunctionDelegate<IPC_GetPtzHVangle_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzHVangle");
            if (IPC_GetPtzHVangle_fptr == null)
            {
                IPC_GetPtzHVangle_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzHVangle is not supported on this platform.");
                };
            }
            return IPC_GetPtzHVangle_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzHVangle(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzHVangle_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzLimit_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzLimit_delegate IPC_GetPtzLimit_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzLimit_fptr = GetFunctionDelegate<IPC_GetPtzLimit_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzLimit");
            if (IPC_GetPtzLimit_fptr == null)
            {
                IPC_GetPtzLimit_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzLimit is not supported on this platform.");
                };
            }
            return IPC_GetPtzLimit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzLimit(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzLimit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzMainTain_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzMainTain_delegate IPC_GetPtzMainTain_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzMainTain_fptr = GetFunctionDelegate<IPC_GetPtzMainTain_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzMainTain");
            if (IPC_GetPtzMainTain_fptr == null)
            {
                IPC_GetPtzMainTain_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzMainTain is not supported on this platform.");
                };
            }
            return IPC_GetPtzMainTain_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzMainTain(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzMainTain_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzPathCruise_delegate(void* @pHandle, byte @bySn, void* @pParam, int* @nLen, uint* @pErrorCode);
        private static IPC_GetPtzPathCruise_delegate IPC_GetPtzPathCruise_fptr = (void* @pHandle, byte @bySn, void* @pParam, int* @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzPathCruise_fptr = GetFunctionDelegate<IPC_GetPtzPathCruise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzPathCruise");
            if (IPC_GetPtzPathCruise_fptr == null)
            {
                IPC_GetPtzPathCruise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzPathCruise is not supported on this platform.");
                };
            }
            return IPC_GetPtzPathCruise_fptr(@pHandle, @bySn, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzPathCruise(void* @pHandle, byte @bySn, void* @pParam, int* @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzPathCruise_fptr(@pHandle, @bySn, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzPatternsInfo_delegate(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode);
        private static IPC_GetPtzPatternsInfo_delegate IPC_GetPtzPatternsInfo_fptr = (void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzPatternsInfo_fptr = GetFunctionDelegate<IPC_GetPtzPatternsInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzPatternsInfo");
            if (IPC_GetPtzPatternsInfo_fptr == null)
            {
                IPC_GetPtzPatternsInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzPatternsInfo is not supported on this platform.");
                };
            }
            return IPC_GetPtzPatternsInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzPatternsInfo(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzPatternsInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzPreset_delegate(void* @pHandle, byte @bySn, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzPreset_delegate IPC_GetPtzPreset_fptr = (void* @pHandle, byte @bySn, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzPreset_fptr = GetFunctionDelegate<IPC_GetPtzPreset_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzPreset");
            if (IPC_GetPtzPreset_fptr == null)
            {
                IPC_GetPtzPreset_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzPreset is not supported on this platform.");
                };
            }
            return IPC_GetPtzPreset_fptr(@pHandle, @bySn, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzPreset(void* @pHandle, byte @bySn, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzPreset_fptr(@pHandle, @bySn, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzPresetAll_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzPresetAll_delegate IPC_GetPtzPresetAll_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzPresetAll_fptr = GetFunctionDelegate<IPC_GetPtzPresetAll_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzPresetAll");
            if (IPC_GetPtzPresetAll_fptr == null)
            {
                IPC_GetPtzPresetAll_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzPresetAll is not supported on this platform.");
                };
            }
            return IPC_GetPtzPresetAll_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzPresetAll(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzPresetAll_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzRatio_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPtzRatio_delegate IPC_GetPtzRatio_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPtzRatio_fptr = GetFunctionDelegate<IPC_GetPtzRatio_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzRatio");
            if (IPC_GetPtzRatio_fptr == null)
            {
                IPC_GetPtzRatio_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzRatio is not supported on this platform.");
                };
            }
            return IPC_GetPtzRatio_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPtzRatio(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPtzRatio_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPtzWatchOn_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetPtzWatchOn_delegate IPC_GetPtzWatchOn_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetPtzWatchOn_fptr = GetFunctionDelegate<IPC_GetPtzWatchOn_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPtzWatchOn");
            if (IPC_GetPtzWatchOn_fptr == null)
            {
                IPC_GetPtzWatchOn_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPtzWatchOn is not supported on this platform.");
                };
            }
            return IPC_GetPtzWatchOn_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetPtzWatchOn(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetPtzWatchOn_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPubsec_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetPubsec_delegate IPC_GetPubsec_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetPubsec_fptr = GetFunctionDelegate<IPC_GetPubsec_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPubsec");
            if (IPC_GetPubsec_fptr == null)
            {
                IPC_GetPubsec_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPubsec is not supported on this platform.");
                };
            }
            return IPC_GetPubsec_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetPubsec(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetPubsec_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetPuSnapShotUrl_delegate(void* @pHandle, byte @byStreamId, byte* @pImageUrl, uint* @pErrorCode);
        private static IPC_GetPuSnapShotUrl_delegate IPC_GetPuSnapShotUrl_fptr = (void* @pHandle, byte @byStreamId, byte* @pImageUrl, uint* @pErrorCode) =>
        {
            IPC_GetPuSnapShotUrl_fptr = GetFunctionDelegate<IPC_GetPuSnapShotUrl_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetPuSnapShotUrl");
            if (IPC_GetPuSnapShotUrl_fptr == null)
            {
                IPC_GetPuSnapShotUrl_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetPuSnapShotUrl is not supported on this platform.");
                };
            }
            return IPC_GetPuSnapShotUrl_fptr(@pHandle, @byStreamId, @pImageUrl, @pErrorCode);
        };
        public static int IPC_GetPuSnapShotUrl(void* @pHandle, byte @byStreamId, byte* @pImageUrl, uint* @pErrorCode)
        {
            return IPC_GetPuSnapShotUrl_fptr(@pHandle, @byStreamId, @pImageUrl, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetQos_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetQos_delegate IPC_GetQos_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetQos_fptr = GetFunctionDelegate<IPC_GetQos_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetQos");
            if (IPC_GetQos_fptr == null)
            {
                IPC_GetQos_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetQos is not supported on this platform.");
                };
            }
            return IPC_GetQos_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetQos(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetQos_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetRecMonthInfo_delegate(void* @pHandle, int @nYear, int @nMonth, void* @pDataOut, int* @nArrayLenOut, uint* @pErrorCode);
        private static IPC_GetRecMonthInfo_delegate IPC_GetRecMonthInfo_fptr = (void* @pHandle, int @nYear, int @nMonth, void* @pDataOut, int* @nArrayLenOut, uint* @pErrorCode) =>
        {
            IPC_GetRecMonthInfo_fptr = GetFunctionDelegate<IPC_GetRecMonthInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRecMonthInfo");
            if (IPC_GetRecMonthInfo_fptr == null)
            {
                IPC_GetRecMonthInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRecMonthInfo is not supported on this platform.");
                };
            }
            return IPC_GetRecMonthInfo_fptr(@pHandle, @nYear, @nMonth, @pDataOut, @nArrayLenOut, @pErrorCode);
        };
        public static int IPC_GetRecMonthInfo(void* @pHandle, int @nYear, int @nMonth, void* @pDataOut, int* @nArrayLenOut, uint* @pErrorCode)
        {
            return IPC_GetRecMonthInfo_fptr(@pHandle, @nYear, @nMonth, @pDataOut, @nArrayLenOut, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_GetRecordData_delegate(void* @pHandle, uint @dwRecId, void* @pParam, void* @pDataOut, int* @nArrLenOut, uint* @pErrorCode);
        private static IPC_GetRecordData_delegate IPC_GetRecordData_fptr = (void* @pHandle, uint @dwRecId, void* @pParam, void* @pDataOut, int* @nArrLenOut, uint* @pErrorCode) =>
        {
            IPC_GetRecordData_fptr = GetFunctionDelegate<IPC_GetRecordData_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRecordData");
            if (IPC_GetRecordData_fptr == null)
            {
                IPC_GetRecordData_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRecordData is not supported on this platform.");
                };
            }
            return IPC_GetRecordData_fptr(@pHandle, @dwRecId, @pParam, @pDataOut, @nArrLenOut, @pErrorCode);
        };
        public static uint IPC_GetRecordData(void* @pHandle, uint @dwRecId, void* @pParam, void* @pDataOut, int* @nArrLenOut, uint* @pErrorCode)
        {
            return IPC_GetRecordData_fptr(@pHandle, @dwRecId, @pParam, @pDataOut, @nArrLenOut, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_GetRecordNext_delegate(void* @pHandle, uint @dwTaskId, uint @dwFirstIndex, bool* @bFinished, void* @pDataOut, int @nArrLenOut, uint* @pErrorCode);
        private static IPC_GetRecordNext_delegate IPC_GetRecordNext_fptr = (void* @pHandle, uint @dwTaskId, uint @dwFirstIndex, bool* @bFinished, void* @pDataOut, int @nArrLenOut, uint* @pErrorCode) =>
        {
            IPC_GetRecordNext_fptr = GetFunctionDelegate<IPC_GetRecordNext_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRecordNext");
            if (IPC_GetRecordNext_fptr == null)
            {
                IPC_GetRecordNext_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRecordNext is not supported on this platform.");
                };
            }
            return IPC_GetRecordNext_fptr(@pHandle, @dwTaskId, @dwFirstIndex, @bFinished, @pDataOut, @nArrLenOut, @pErrorCode);
        };
        public static uint IPC_GetRecordNext(void* @pHandle, uint @dwTaskId, uint @dwFirstIndex, bool* @bFinished, void* @pDataOut, int @nArrLenOut, uint* @pErrorCode)
        {
            return IPC_GetRecordNext_fptr(@pHandle, @dwTaskId, @dwFirstIndex, @bFinished, @pDataOut, @nArrLenOut, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Getrecplaystate_delegate(void* @pHandle, uint @dwPlayID, void* @pDataOut, int* @nDataOut, uint* @pErrorCode);
        private static IPC_Getrecplaystate_delegate IPC_Getrecplaystate_fptr = (void* @pHandle, uint @dwPlayID, void* @pDataOut, int* @nDataOut, uint* @pErrorCode) =>
        {
            IPC_Getrecplaystate_fptr = GetFunctionDelegate<IPC_Getrecplaystate_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Getrecplaystate");
            if (IPC_Getrecplaystate_fptr == null)
            {
                IPC_Getrecplaystate_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Getrecplaystate is not supported on this platform.");
                };
            }
            return IPC_Getrecplaystate_fptr(@pHandle, @dwPlayID, @pDataOut, @nDataOut, @pErrorCode);
        };
        public static int IPC_Getrecplaystate(void* @pHandle, uint @dwPlayID, void* @pDataOut, int* @nDataOut, uint* @pErrorCode)
        {
            return IPC_Getrecplaystate_fptr(@pHandle, @dwPlayID, @pDataOut, @nDataOut, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetRecSchedule_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetRecSchedule_delegate IPC_GetRecSchedule_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetRecSchedule_fptr = GetFunctionDelegate<IPC_GetRecSchedule_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRecSchedule");
            if (IPC_GetRecSchedule_fptr == null)
            {
                IPC_GetRecSchedule_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRecSchedule is not supported on this platform.");
                };
            }
            return IPC_GetRecSchedule_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetRecSchedule(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetRecSchedule_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetRSInfo_delegate(void* @pHandle, void* @ptParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode);
        private static IPC_GetRSInfo_delegate IPC_GetRSInfo_fptr = (void* @pHandle, void* @ptParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetRSInfo_fptr = GetFunctionDelegate<IPC_GetRSInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRSInfo");
            if (IPC_GetRSInfo_fptr == null)
            {
                IPC_GetRSInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRSInfo is not supported on this platform.");
                };
            }
            return IPC_GetRSInfo_fptr(@pHandle, @ptParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetRSInfo(void* @pHandle, void* @ptParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetRSInfo_fptr(@pHandle, @ptParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetRtspUrl_delegate(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode, int @bNoStream);
        private static IPC_GetRtspUrl_delegate IPC_GetRtspUrl_fptr = (void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode, int @bNoStream) =>
        {
            IPC_GetRtspUrl_fptr = GetFunctionDelegate<IPC_GetRtspUrl_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRtspUrl");
            if (IPC_GetRtspUrl_fptr == null)
            {
                IPC_GetRtspUrl_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRtspUrl is not supported on this platform.");
                };
            }
            return IPC_GetRtspUrl_fptr(@pHandle, @eType, @pParam, @nParamLen, @pInfoOut, @nLenInfo, @pErrorCode, @bNoStream);
        };
        public static int IPC_GetRtspUrl(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode, int @bNoStream)
        {
            return IPC_GetRtspUrl_fptr(@pHandle, @eType, @pParam, @nParamLen, @pInfoOut, @nLenInfo, @pErrorCode, @bNoStream);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetRtspUrlRec_delegate(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetRtspUrlRec_delegate IPC_GetRtspUrlRec_fptr = (void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetRtspUrlRec_fptr = GetFunctionDelegate<IPC_GetRtspUrlRec_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetRtspUrlRec");
            if (IPC_GetRtspUrlRec_fptr == null)
            {
                IPC_GetRtspUrlRec_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetRtspUrlRec is not supported on this platform.");
                };
            }
            return IPC_GetRtspUrlRec_fptr(@pHandle, @eType, @pParam, @nParamLen, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetRtspUrlRec(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetRtspUrlRec_fptr(@pHandle, @eType, @pParam, @nParamLen, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetShieldAlarm_delegate(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetShieldAlarm_delegate IPC_GetShieldAlarm_fptr = (void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetShieldAlarm_fptr = GetFunctionDelegate<IPC_GetShieldAlarm_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetShieldAlarm");
            if (IPC_GetShieldAlarm_fptr == null)
            {
                IPC_GetShieldAlarm_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetShieldAlarm is not supported on this platform.");
                };
            }
            return IPC_GetShieldAlarm_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetShieldAlarm(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetShieldAlarm_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetShutter_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetShutter_delegate IPC_GetShutter_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetShutter_fptr = GetFunctionDelegate<IPC_GetShutter_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetShutter");
            if (IPC_GetShutter_fptr == null)
            {
                IPC_GetShutter_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetShutter is not supported on this platform.");
                };
            }
            return IPC_GetShutter_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetShutter(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetShutter_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSightChange_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetSightChange_delegate IPC_GetSightChange_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetSightChange_fptr = GetFunctionDelegate<IPC_GetSightChange_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSightChange");
            if (IPC_GetSightChange_fptr == null)
            {
                IPC_GetSightChange_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSightChange is not supported on this platform.");
                };
            }
            return IPC_GetSightChange_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetSightChange(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetSightChange_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSmartIR_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetSmartIR_delegate IPC_GetSmartIR_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetSmartIR_fptr = GetFunctionDelegate<IPC_GetSmartIR_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSmartIR");
            if (IPC_GetSmartIR_fptr == null)
            {
                IPC_GetSmartIR_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSmartIR is not supported on this platform.");
                };
            }
            return IPC_GetSmartIR_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetSmartIR(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetSmartIR_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSmartOsdInfo_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetSmartOsdInfo_delegate IPC_GetSmartOsdInfo_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetSmartOsdInfo_fptr = GetFunctionDelegate<IPC_GetSmartOsdInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSmartOsdInfo");
            if (IPC_GetSmartOsdInfo_fptr == null)
            {
                IPC_GetSmartOsdInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSmartOsdInfo is not supported on this platform.");
                };
            }
            return IPC_GetSmartOsdInfo_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetSmartOsdInfo(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetSmartOsdInfo_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSnapEvent_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetSnapEvent_delegate IPC_GetSnapEvent_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetSnapEvent_fptr = GetFunctionDelegate<IPC_GetSnapEvent_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSnapEvent");
            if (IPC_GetSnapEvent_fptr == null)
            {
                IPC_GetSnapEvent_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSnapEvent is not supported on this platform.");
                };
            }
            return IPC_GetSnapEvent_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetSnapEvent(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetSnapEvent_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSnapPicCfg_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetSnapPicCfg_delegate IPC_GetSnapPicCfg_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetSnapPicCfg_fptr = GetFunctionDelegate<IPC_GetSnapPicCfg_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSnapPicCfg");
            if (IPC_GetSnapPicCfg_fptr == null)
            {
                IPC_GetSnapPicCfg_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSnapPicCfg is not supported on this platform.");
                };
            }
            return IPC_GetSnapPicCfg_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetSnapPicCfg(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetSnapPicCfg_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSnapTime_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetSnapTime_delegate IPC_GetSnapTime_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetSnapTime_fptr = GetFunctionDelegate<IPC_GetSnapTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSnapTime");
            if (IPC_GetSnapTime_fptr == null)
            {
                IPC_GetSnapTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSnapTime is not supported on this platform.");
                };
            }
            return IPC_GetSnapTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetSnapTime(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetSnapTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetStorageMgr_delegate(void* @pHandle, void* @pInfo, int @nLenInfo, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetStorageMgr_delegate IPC_GetStorageMgr_fptr = (void* @pHandle, void* @pInfo, int @nLenInfo, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetStorageMgr_fptr = GetFunctionDelegate<IPC_GetStorageMgr_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetStorageMgr");
            if (IPC_GetStorageMgr_fptr == null)
            {
                IPC_GetStorageMgr_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetStorageMgr is not supported on this platform.");
                };
            }
            return IPC_GetStorageMgr_fptr(@pHandle, @pInfo, @nLenInfo, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetStorageMgr(void* @pHandle, void* @pInfo, int @nLenInfo, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetStorageMgr_fptr(@pHandle, @pInfo, @nLenInfo, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetStorageNum_delegate(void* @pHandle, int* @nLenDisks, uint* @pErrorCode);
        private static IPC_GetStorageNum_delegate IPC_GetStorageNum_fptr = (void* @pHandle, int* @nLenDisks, uint* @pErrorCode) =>
        {
            IPC_GetStorageNum_fptr = GetFunctionDelegate<IPC_GetStorageNum_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetStorageNum");
            if (IPC_GetStorageNum_fptr == null)
            {
                IPC_GetStorageNum_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetStorageNum is not supported on this platform.");
                };
            }
            return IPC_GetStorageNum_fptr(@pHandle, @nLenDisks, @pErrorCode);
        };
        public static int IPC_GetStorageNum(void* @pHandle, int* @nLenDisks, uint* @pErrorCode)
        {
            return IPC_GetStorageNum_fptr(@pHandle, @nLenDisks, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetStorageState_delegate(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetStorageState_delegate IPC_GetStorageState_fptr = (void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetStorageState_fptr = GetFunctionDelegate<IPC_GetStorageState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetStorageState");
            if (IPC_GetStorageState_fptr == null)
            {
                IPC_GetStorageState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetStorageState is not supported on this platform.");
                };
            }
            return IPC_GetStorageState_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetStorageState(void* @pHandle, void* @pParam, int @nLen, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetStorageState_fptr(@pHandle, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetSystemTime_delegate(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode);
        private static IPC_GetSystemTime_delegate IPC_GetSystemTime_fptr = (void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode) =>
        {
            IPC_GetSystemTime_fptr = GetFunctionDelegate<IPC_GetSystemTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetSystemTime");
            if (IPC_GetSystemTime_fptr == null)
            {
                IPC_GetSystemTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetSystemTime is not supported on this platform.");
                };
            }
            return IPC_GetSystemTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetSystemTime(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode)
        {
            return IPC_GetSystemTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetTimeAuto_delegate(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode);
        private static IPC_GetTimeAuto_delegate IPC_GetTimeAuto_fptr = (void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode) =>
        {
            IPC_GetTimeAuto_fptr = GetFunctionDelegate<IPC_GetTimeAuto_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetTimeAuto");
            if (IPC_GetTimeAuto_fptr == null)
            {
                IPC_GetTimeAuto_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetTimeAuto is not supported on this platform.");
                };
            }
            return IPC_GetTimeAuto_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetTimeAuto(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode)
        {
            return IPC_GetTimeAuto_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetTimeAutoEx_delegate(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode);
        private static IPC_GetTimeAutoEx_delegate IPC_GetTimeAutoEx_fptr = (void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode) =>
        {
            IPC_GetTimeAutoEx_fptr = GetFunctionDelegate<IPC_GetTimeAutoEx_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetTimeAutoEx");
            if (IPC_GetTimeAutoEx_fptr == null)
            {
                IPC_GetTimeAutoEx_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetTimeAutoEx is not supported on this platform.");
                };
            }
            return IPC_GetTimeAutoEx_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetTimeAutoEx(void* @pHandle, void* @pParam, int* @nLen, uint* @pErrorCode)
        {
            return IPC_GetTimeAutoEx_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetTimeTask_delegate(void* @pHandle, void* @pParam, int @nLen, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode);
        private static IPC_GetTimeTask_delegate IPC_GetTimeTask_fptr = (void* @pHandle, void* @pParam, int @nLen, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetTimeTask_fptr = GetFunctionDelegate<IPC_GetTimeTask_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetTimeTask");
            if (IPC_GetTimeTask_fptr == null)
            {
                IPC_GetTimeTask_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetTimeTask is not supported on this platform.");
                };
            }
            return IPC_GetTimeTask_fptr(@pHandle, @pParam, @nLen, @pTimeArr, @nLenTime, @nLenTimeStruct, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetTimeTask(void* @pHandle, void* @pParam, int @nLen, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, byte* @szParamAssist, int* @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetTimeTask_fptr(@pHandle, @pParam, @nLen, @pTimeArr, @nLenTime, @nLenTimeStruct, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetUavTrack_delegate(void* @pHandle, bool* @pParam, uint* @pErrorCode);
        private static IPC_GetUavTrack_delegate IPC_GetUavTrack_fptr = (void* @pHandle, bool* @pParam, uint* @pErrorCode) =>
        {
            IPC_GetUavTrack_fptr = GetFunctionDelegate<IPC_GetUavTrack_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetUavTrack");
            if (IPC_GetUavTrack_fptr == null)
            {
                IPC_GetUavTrack_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetUavTrack is not supported on this platform.");
                };
            }
            return IPC_GetUavTrack_fptr(@pHandle, @pParam, @pErrorCode);
        };
        public static int IPC_GetUavTrack(void* @pHandle, bool* @pParam, uint* @pErrorCode)
        {
            return IPC_GetUavTrack_fptr(@pHandle, @pParam, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetUPnP_delegate(void* @pHandle, void* @pInfo, int @nlenInfo, void* @pMap, int @nLenMap, int* @nLenMapStruct, uint* @pErrorCode);
        private static IPC_GetUPnP_delegate IPC_GetUPnP_fptr = (void* @pHandle, void* @pInfo, int @nlenInfo, void* @pMap, int @nLenMap, int* @nLenMapStruct, uint* @pErrorCode) =>
        {
            IPC_GetUPnP_fptr = GetFunctionDelegate<IPC_GetUPnP_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetUPnP");
            if (IPC_GetUPnP_fptr == null)
            {
                IPC_GetUPnP_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetUPnP is not supported on this platform.");
                };
            }
            return IPC_GetUPnP_fptr(@pHandle, @pInfo, @nlenInfo, @pMap, @nLenMap, @nLenMapStruct, @pErrorCode);
        };
        public static int IPC_GetUPnP(void* @pHandle, void* @pInfo, int @nlenInfo, void* @pMap, int @nLenMap, int* @nLenMapStruct, uint* @pErrorCode)
        {
            return IPC_GetUPnP_fptr(@pHandle, @pInfo, @nlenInfo, @pMap, @nLenMap, @nLenMapStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetUserInfo_delegate(void* @pHandle, void* @pParam, int* @nLen, int* @nLenStruct, uint* @pErrorCode);
        private static IPC_GetUserInfo_delegate IPC_GetUserInfo_fptr = (void* @pHandle, void* @pParam, int* @nLen, int* @nLenStruct, uint* @pErrorCode) =>
        {
            IPC_GetUserInfo_fptr = GetFunctionDelegate<IPC_GetUserInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetUserInfo");
            if (IPC_GetUserInfo_fptr == null)
            {
                IPC_GetUserInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetUserInfo is not supported on this platform.");
                };
            }
            return IPC_GetUserInfo_fptr(@pHandle, @pParam, @nLen, @nLenStruct, @pErrorCode);
        };
        public static int IPC_GetUserInfo(void* @pHandle, void* @pParam, int* @nLen, int* @nLenStruct, uint* @pErrorCode)
        {
            return IPC_GetUserInfo_fptr(@pHandle, @pParam, @nLen, @nLenStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVersion_delegate(byte* @pchVer, int @nMaxLen);
        private static IPC_GetVersion_delegate IPC_GetVersion_fptr = (byte* @pchVer, int @nMaxLen) =>
        {
            IPC_GetVersion_fptr = GetFunctionDelegate<IPC_GetVersion_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVersion");
            if (IPC_GetVersion_fptr == null)
            {
                IPC_GetVersion_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVersion is not supported on this platform.");
                };
            }
            return IPC_GetVersion_fptr(@pchVer, @nMaxLen);
        };
        public static int IPC_GetVersion(byte* @pchVer, int @nMaxLen)
        {
            return IPC_GetVersion_fptr(@pchVer, @nMaxLen);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVideoEnc_delegate(void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetVideoEnc_delegate IPC_GetVideoEnc_fptr = (void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetVideoEnc_fptr = GetFunctionDelegate<IPC_GetVideoEnc_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVideoEnc");
            if (IPC_GetVideoEnc_fptr == null)
            {
                IPC_GetVideoEnc_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVideoEnc is not supported on this platform.");
                };
            }
            return IPC_GetVideoEnc_fptr(@pHandle, @byVideoSource, @byStreamId, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetVideoEnc(void* @pHandle, byte @byVideoSource, byte @byStreamId, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetVideoEnc_fptr(@pHandle, @byVideoSource, @byStreamId, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVideoEncCut_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetVideoEncCut_delegate IPC_GetVideoEncCut_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetVideoEncCut_fptr = GetFunctionDelegate<IPC_GetVideoEncCut_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVideoEncCut");
            if (IPC_GetVideoEncCut_fptr == null)
            {
                IPC_GetVideoEncCut_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVideoEncCut is not supported on this platform.");
                };
            }
            return IPC_GetVideoEncCut_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetVideoEncCut(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetVideoEncCut_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVideoInfo_delegate(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetVideoInfo_delegate IPC_GetVideoInfo_fptr = (void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetVideoInfo_fptr = GetFunctionDelegate<IPC_GetVideoInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVideoInfo");
            if (IPC_GetVideoInfo_fptr == null)
            {
                IPC_GetVideoInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVideoInfo is not supported on this platform.");
                };
            }
            return IPC_GetVideoInfo_fptr(@pHandle, @eType, @pParam, @nParamLen, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetVideoInfo(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nParamLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetVideoInfo_fptr(@pHandle, @eType, @pParam, @nParamLen, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVideoRoi_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_GetVideoRoi_delegate IPC_GetVideoRoi_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetVideoRoi_fptr = GetFunctionDelegate<IPC_GetVideoRoi_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVideoRoi");
            if (IPC_GetVideoRoi_fptr == null)
            {
                IPC_GetVideoRoi_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVideoRoi is not supported on this platform.");
                };
            }
            return IPC_GetVideoRoi_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetVideoRoi(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetVideoRoi_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVideoShield_delegate(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode);
        private static IPC_GetVideoShield_delegate IPC_GetVideoShield_fptr = (void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode) =>
        {
            IPC_GetVideoShield_fptr = GetFunctionDelegate<IPC_GetVideoShield_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVideoShield");
            if (IPC_GetVideoShield_fptr == null)
            {
                IPC_GetVideoShield_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVideoShield is not supported on this platform.");
                };
            }
            return IPC_GetVideoShield_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        };
        public static int IPC_GetVideoShield(void* @pHandle, byte @byVideoSource, void* @pInfoOut, int* @nLenInfo, byte* @szAssistInfo, int* @nAssistLen, uint* @pErrorCode)
        {
            return IPC_GetVideoShield_fptr(@pHandle, @byVideoSource, @pInfoOut, @nLenInfo, @szAssistInfo, @nAssistLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVideoVolume_RTCP_delegate(void* @pHandle, void* @pInfoOut, int @nLenInfo, uint* @pErrorCode);
        private static IPC_GetVideoVolume_RTCP_delegate IPC_GetVideoVolume_RTCP_fptr = (void* @pHandle, void* @pInfoOut, int @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_GetVideoVolume_RTCP_fptr = GetFunctionDelegate<IPC_GetVideoVolume_RTCP_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVideoVolume_RTCP");
            if (IPC_GetVideoVolume_RTCP_fptr == null)
            {
                IPC_GetVideoVolume_RTCP_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVideoVolume_RTCP is not supported on this platform.");
                };
            }
            return IPC_GetVideoVolume_RTCP_fptr(@pHandle, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static int IPC_GetVideoVolume_RTCP(void* @pHandle, void* @pInfoOut, int @nLenInfo, uint* @pErrorCode)
        {
            return IPC_GetVideoVolume_RTCP_fptr(@pHandle, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVirtualFocus_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetVirtualFocus_delegate IPC_GetVirtualFocus_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetVirtualFocus_fptr = GetFunctionDelegate<IPC_GetVirtualFocus_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVirtualFocus");
            if (IPC_GetVirtualFocus_fptr == null)
            {
                IPC_GetVirtualFocus_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVirtualFocus is not supported on this platform.");
                };
            }
            return IPC_GetVirtualFocus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetVirtualFocus(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetVirtualFocus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetVsip_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetVsip_delegate IPC_GetVsip_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetVsip_fptr = GetFunctionDelegate<IPC_GetVsip_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetVsip");
            if (IPC_GetVsip_fptr == null)
            {
                IPC_GetVsip_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetVsip is not supported on this platform.");
                };
            }
            return IPC_GetVsip_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetVsip(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetVsip_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetWarningLine_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetWarningLine_delegate IPC_GetWarningLine_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetWarningLine_fptr = GetFunctionDelegate<IPC_GetWarningLine_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetWarningLine");
            if (IPC_GetWarningLine_fptr == null)
            {
                IPC_GetWarningLine_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetWarningLine is not supported on this platform.");
                };
            }
            return IPC_GetWarningLine_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetWarningLine(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetWarningLine_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetWDR_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetWDR_delegate IPC_GetWDR_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetWDR_fptr = GetFunctionDelegate<IPC_GetWDR_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetWDR");
            if (IPC_GetWDR_fptr == null)
            {
                IPC_GetWDR_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetWDR is not supported on this platform.");
                };
            }
            return IPC_GetWDR_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetWDR(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetWDR_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetWhiteBlance_delegate(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode);
        private static IPC_GetWhiteBlance_delegate IPC_GetWhiteBlance_fptr = (void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_GetWhiteBlance_fptr = GetFunctionDelegate<IPC_GetWhiteBlance_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetWhiteBlance");
            if (IPC_GetWhiteBlance_fptr == null)
            {
                IPC_GetWhiteBlance_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetWhiteBlance is not supported on this platform.");
                };
            }
            return IPC_GetWhiteBlance_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_GetWhiteBlance(void* @pHandle, byte @byVideoSource, void* @pParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode)
        {
            return IPC_GetWhiteBlance_fptr(@pHandle, @byVideoSource, @pParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetWifiProbe_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetWifiProbe_delegate IPC_GetWifiProbe_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetWifiProbe_fptr = GetFunctionDelegate<IPC_GetWifiProbe_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetWifiProbe");
            if (IPC_GetWifiProbe_fptr == null)
            {
                IPC_GetWifiProbe_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetWifiProbe is not supported on this platform.");
                };
            }
            return IPC_GetWifiProbe_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetWifiProbe(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetWifiProbe_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetWifiProbeList_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetWifiProbeList_delegate IPC_GetWifiProbeList_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetWifiProbeList_fptr = GetFunctionDelegate<IPC_GetWifiProbeList_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetWifiProbeList");
            if (IPC_GetWifiProbeList_fptr == null)
            {
                IPC_GetWifiProbeList_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetWifiProbeList is not supported on this platform.");
                };
            }
            return IPC_GetWifiProbeList_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetWifiProbeList(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetWifiProbeList_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_GetWlanInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_GetWlanInfo_delegate IPC_GetWlanInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_GetWlanInfo_fptr = GetFunctionDelegate<IPC_GetWlanInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_GetWlanInfo");
            if (IPC_GetWlanInfo_fptr == null)
            {
                IPC_GetWlanInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_GetWlanInfo is not supported on this platform.");
                };
            }
            return IPC_GetWlanInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_GetWlanInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_GetWlanInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Img_Def_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_Img_Def_delegate IPC_Img_Def_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_Img_Def_fptr = GetFunctionDelegate<IPC_Img_Def_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Img_Def");
            if (IPC_Img_Def_fptr == null)
            {
                IPC_Img_Def_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Img_Def is not supported on this platform.");
                };
            }
            return IPC_Img_Def_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_Img_Def(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_Img_Def_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_InitDll_delegate(byte* @pzDLLName, short @wTelnetPort, bool @bOpenTelnet, uint* @pErrorCode);
        private static IPC_InitDll_delegate IPC_InitDll_fptr = (byte* @pzDLLName, short @wTelnetPort, bool @bOpenTelnet, uint* @pErrorCode) =>
        {
            IPC_InitDll_fptr = GetFunctionDelegate<IPC_InitDll_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_InitDll");
            if (IPC_InitDll_fptr == null)
            {
                IPC_InitDll_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_InitDll is not supported on this platform.");
                };
            }
            return IPC_InitDll_fptr(@pzDLLName, @wTelnetPort, @bOpenTelnet, @pErrorCode);
        };
        public static int IPC_InitDll(byte* @pzDLLName, short @wTelnetPort, bool @bOpenTelnet, uint* @pErrorCode)
        {
            return IPC_InitDll_fptr(@pzDLLName, @wTelnetPort, @bOpenTelnet, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_IsConnect_delegate(uint @dwHandle, bool* @bIsConnect, uint* @pErrorCode);
        private static IPC_IsConnect_delegate IPC_IsConnect_fptr = (uint @dwHandle, bool* @bIsConnect, uint* @pErrorCode) =>
        {
            IPC_IsConnect_fptr = GetFunctionDelegate<IPC_IsConnect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_IsConnect");
            if (IPC_IsConnect_fptr == null)
            {
                IPC_IsConnect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_IsConnect is not supported on this platform.");
                };
            }
            return IPC_IsConnect_fptr(@dwHandle, @bIsConnect, @pErrorCode);
        };
        public static int IPC_IsConnect(uint @dwHandle, bool* @bIsConnect, uint* @pErrorCode)
        {
            return IPC_IsConnect_fptr(@dwHandle, @bIsConnect, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_LedFind_delegate(void* @pHandle, void* @ptParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode);
        private static IPC_LedFind_delegate IPC_LedFind_fptr = (void* @pHandle, void* @ptParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode) =>
        {
            IPC_LedFind_fptr = GetFunctionDelegate<IPC_LedFind_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_LedFind");
            if (IPC_LedFind_fptr == null)
            {
                IPC_LedFind_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_LedFind is not supported on this platform.");
                };
            }
            return IPC_LedFind_fptr(@pHandle, @ptParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        };
        public static int IPC_LedFind(void* @pHandle, void* @ptParam, int @nLen, byte* @szParamAssist, int @nLenAssist, uint* @pErrorCode)
        {
            return IPC_LedFind_fptr(@pHandle, @ptParam, @nLen, @szParamAssist, @nLenAssist, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Login_delegate(void* @pHandle, byte* @pName, byte* @pPassword, uint* @pErrorCode);
        private static IPC_Login_delegate IPC_Login_fptr = (void* @pHandle, byte* @pName, byte* @pPassword, uint* @pErrorCode) =>
        {
            IPC_Login_fptr = GetFunctionDelegate<IPC_Login_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Login");
            if (IPC_Login_fptr == null)
            {
                IPC_Login_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Login is not supported on this platform.");
                };
            }
            return IPC_Login_fptr(@pHandle, @pName, @pPassword, @pErrorCode);
        };
        public static int IPC_Login(void* @pHandle, byte* @pName, byte* @pPassword, uint* @pErrorCode)
        {
            return IPC_Login_fptr(@pHandle, @pName, @pPassword, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Login_New_delegate(void* @pLoginInfo, void* @fCheckCB, uint* @dwHandle, uint* @pErrorCode);
        private static IPC_Login_New_delegate IPC_Login_New_fptr = (void* @pLoginInfo, void* @fCheckCB, uint* @dwHandle, uint* @pErrorCode) =>
        {
            IPC_Login_New_fptr = GetFunctionDelegate<IPC_Login_New_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Login_New");
            if (IPC_Login_New_fptr == null)
            {
                IPC_Login_New_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Login_New is not supported on this platform.");
                };
            }
            return IPC_Login_New_fptr(@pLoginInfo, @fCheckCB, @dwHandle, @pErrorCode);
        };
        public static int IPC_Login_New(void* @pLoginInfo, void* @fCheckCB, uint* @dwHandle, uint* @pErrorCode)
        {
            return IPC_Login_New_fptr(@pLoginInfo, @fCheckCB, @dwHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Logout_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_Logout_delegate IPC_Logout_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_Logout_fptr = GetFunctionDelegate<IPC_Logout_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Logout");
            if (IPC_Logout_fptr == null)
            {
                IPC_Logout_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Logout is not supported on this platform.");
                };
            }
            return IPC_Logout_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_Logout(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_Logout_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_MoveRecordPlay_delegate(void* @pHandle, uint @dwPlayID, void* @pParam, int @nParamLen, uint* @pErrorCode);
        private static IPC_MoveRecordPlay_delegate IPC_MoveRecordPlay_fptr = (void* @pHandle, uint @dwPlayID, void* @pParam, int @nParamLen, uint* @pErrorCode) =>
        {
            IPC_MoveRecordPlay_fptr = GetFunctionDelegate<IPC_MoveRecordPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_MoveRecordPlay");
            if (IPC_MoveRecordPlay_fptr == null)
            {
                IPC_MoveRecordPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_MoveRecordPlay is not supported on this platform.");
                };
            }
            return IPC_MoveRecordPlay_fptr(@pHandle, @dwPlayID, @pParam, @nParamLen, @pErrorCode);
        };
        public static int IPC_MoveRecordPlay(void* @pHandle, uint @dwPlayID, void* @pParam, int @nParamLen, uint* @pErrorCode)
        {
            return IPC_MoveRecordPlay_fptr(@pHandle, @dwPlayID, @pParam, @nParamLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PauseRecordPlay_delegate(void* @pHandle, uint @dwPlayID, uint* @pErrorCode);
        private static IPC_PauseRecordPlay_delegate IPC_PauseRecordPlay_fptr = (void* @pHandle, uint @dwPlayID, uint* @pErrorCode) =>
        {
            IPC_PauseRecordPlay_fptr = GetFunctionDelegate<IPC_PauseRecordPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PauseRecordPlay");
            if (IPC_PauseRecordPlay_fptr == null)
            {
                IPC_PauseRecordPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PauseRecordPlay is not supported on this platform.");
                };
            }
            return IPC_PauseRecordPlay_fptr(@pHandle, @dwPlayID, @pErrorCode);
        };
        public static int IPC_PauseRecordPlay(void* @pHandle, uint @dwPlayID, uint* @pErrorCode)
        {
            return IPC_PauseRecordPlay_fptr(@pHandle, @dwPlayID, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_PreLoadRecordList_delegate(void* @pHandle, void* @pParam, int @nParamLen, uint* @pErrorCode);
        private static IPC_PreLoadRecordList_delegate IPC_PreLoadRecordList_fptr = (void* @pHandle, void* @pParam, int @nParamLen, uint* @pErrorCode) =>
        {
            IPC_PreLoadRecordList_fptr = GetFunctionDelegate<IPC_PreLoadRecordList_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PreLoadRecordList");
            if (IPC_PreLoadRecordList_fptr == null)
            {
                IPC_PreLoadRecordList_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PreLoadRecordList is not supported on this platform.");
                };
            }
            return IPC_PreLoadRecordList_fptr(@pHandle, @pParam, @nParamLen, @pErrorCode);
        };
        public static uint IPC_PreLoadRecordList(void* @pHandle, void* @pParam, int @nParamLen, uint* @pErrorCode)
        {
            return IPC_PreLoadRecordList_fptr(@pHandle, @pParam, @nParamLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PtzDeviationCheck_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_PtzDeviationCheck_delegate IPC_PtzDeviationCheck_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_PtzDeviationCheck_fptr = GetFunctionDelegate<IPC_PtzDeviationCheck_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PtzDeviationCheck");
            if (IPC_PtzDeviationCheck_fptr == null)
            {
                IPC_PtzDeviationCheck_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PtzDeviationCheck is not supported on this platform.");
                };
            }
            return IPC_PtzDeviationCheck_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_PtzDeviationCheck(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_PtzDeviationCheck_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PtzGotoPoint_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_PtzGotoPoint_delegate IPC_PtzGotoPoint_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_PtzGotoPoint_fptr = GetFunctionDelegate<IPC_PtzGotoPoint_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PtzGotoPoint");
            if (IPC_PtzGotoPoint_fptr == null)
            {
                IPC_PtzGotoPoint_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PtzGotoPoint is not supported on this platform.");
                };
            }
            return IPC_PtzGotoPoint_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_PtzGotoPoint(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_PtzGotoPoint_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PtzMove_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_PtzMove_delegate IPC_PtzMove_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_PtzMove_fptr = GetFunctionDelegate<IPC_PtzMove_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PtzMove");
            if (IPC_PtzMove_fptr == null)
            {
                IPC_PtzMove_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PtzMove is not supported on this platform.");
                };
            }
            return IPC_PtzMove_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_PtzMove(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_PtzMove_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PtzScan_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_PtzScan_delegate IPC_PtzScan_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_PtzScan_fptr = GetFunctionDelegate<IPC_PtzScan_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PtzScan");
            if (IPC_PtzScan_fptr == null)
            {
                IPC_PtzScan_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PtzScan is not supported on this platform.");
                };
            }
            return IPC_PtzScan_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_PtzScan(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_PtzScan_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PtzZoneZoom_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_PtzZoneZoom_delegate IPC_PtzZoneZoom_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_PtzZoneZoom_fptr = GetFunctionDelegate<IPC_PtzZoneZoom_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PtzZoneZoom");
            if (IPC_PtzZoneZoom_fptr == null)
            {
                IPC_PtzZoneZoom_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PtzZoneZoom is not supported on this platform.");
                };
            }
            return IPC_PtzZoneZoom_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_PtzZoneZoom(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_PtzZoneZoom_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_PuSnapShot_delegate(void* @pHandle, byte @byStreamId, 
    #if NET40
    #elif NET45 || NETSTANDARD2_0
    [MarshalAs((UnmanagedType)48)]
    #else
    [MarshalAs(UnmanagedType.LPUTF8Str)]
    #endif
    string @pchFileName, uint* @pErrorCode);
        private static IPC_PuSnapShot_delegate IPC_PuSnapShot_fptr = (void* @pHandle, byte @byStreamId, string @pchFileName, uint* @pErrorCode) =>
        {
            IPC_PuSnapShot_fptr = GetFunctionDelegate<IPC_PuSnapShot_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_PuSnapShot");
            if (IPC_PuSnapShot_fptr == null)
            {
                IPC_PuSnapShot_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_PuSnapShot is not supported on this platform.");
                };
            }
            return IPC_PuSnapShot_fptr(@pHandle, @byStreamId, @pchFileName, @pErrorCode);
        };
        public static int IPC_PuSnapShot(void* @pHandle, byte @byStreamId, 
    #if NET40
    #elif NET45 || NETSTANDARD2_0
    [MarshalAs((UnmanagedType)48)]
    #else
    [MarshalAs(UnmanagedType.LPUTF8Str)]
    #endif
    string @pchFileName, uint* @pErrorCode)
        {
            return IPC_PuSnapShot_fptr(@pHandle, @byStreamId, @pchFileName, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_RecoverFactory_delegate(void* @pHandle, byte* @szMode, uint* @pErrorCode);
        private static IPC_RecoverFactory_delegate IPC_RecoverFactory_fptr = (void* @pHandle, byte* @szMode, uint* @pErrorCode) =>
        {
            IPC_RecoverFactory_fptr = GetFunctionDelegate<IPC_RecoverFactory_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_RecoverFactory");
            if (IPC_RecoverFactory_fptr == null)
            {
                IPC_RecoverFactory_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_RecoverFactory is not supported on this platform.");
                };
            }
            return IPC_RecoverFactory_fptr(@pHandle, @szMode, @pErrorCode);
        };
        public static int IPC_RecoverFactory(void* @pHandle, byte* @szMode, uint* @pErrorCode)
        {
            return IPC_RecoverFactory_fptr(@pHandle, @szMode, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_ReleaseDll_delegate(uint* @pErrorCode);
        private static IPC_ReleaseDll_delegate IPC_ReleaseDll_fptr = (uint* @pErrorCode) =>
        {
            IPC_ReleaseDll_fptr = GetFunctionDelegate<IPC_ReleaseDll_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_ReleaseDll");
            if (IPC_ReleaseDll_fptr == null)
            {
                IPC_ReleaseDll_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_ReleaseDll is not supported on this platform.");
                };
            }
            return IPC_ReleaseDll_fptr(@pErrorCode);
        };
        public static int IPC_ReleaseDll(uint* @pErrorCode)
        {
            return IPC_ReleaseDll_fptr(@pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_RemoveRtspMetaPort_delegate(void* @pHandle, uint @dwPlayID, uint* @pErrorCode);
        private static IPC_RemoveRtspMetaPort_delegate IPC_RemoveRtspMetaPort_fptr = (void* @pHandle, uint @dwPlayID, uint* @pErrorCode) =>
        {
            IPC_RemoveRtspMetaPort_fptr = GetFunctionDelegate<IPC_RemoveRtspMetaPort_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_RemoveRtspMetaPort");
            if (IPC_RemoveRtspMetaPort_fptr == null)
            {
                IPC_RemoveRtspMetaPort_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_RemoveRtspMetaPort is not supported on this platform.");
                };
            }
            return IPC_RemoveRtspMetaPort_fptr(@pHandle, @dwPlayID, @pErrorCode);
        };
        public static uint IPC_RemoveRtspMetaPort(void* @pHandle, uint @dwPlayID, uint* @pErrorCode)
        {
            return IPC_RemoveRtspMetaPort_fptr(@pHandle, @dwPlayID, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_ResumeRecordPlay_delegate(void* @pHandle, uint @dwPlayID, uint* @pErrorCode);
        private static IPC_ResumeRecordPlay_delegate IPC_ResumeRecordPlay_fptr = (void* @pHandle, uint @dwPlayID, uint* @pErrorCode) =>
        {
            IPC_ResumeRecordPlay_fptr = GetFunctionDelegate<IPC_ResumeRecordPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_ResumeRecordPlay");
            if (IPC_ResumeRecordPlay_fptr == null)
            {
                IPC_ResumeRecordPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_ResumeRecordPlay is not supported on this platform.");
                };
            }
            return IPC_ResumeRecordPlay_fptr(@pHandle, @dwPlayID, @pErrorCode);
        };
        public static int IPC_ResumeRecordPlay(void* @pHandle, uint @dwPlayID, uint* @pErrorCode)
        {
            return IPC_ResumeRecordPlay_fptr(@pHandle, @dwPlayID, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SendKeyFrame_delegate(void* @pHandle, uint @dwPlayID, uint* @pErrorCode);
        private static IPC_SendKeyFrame_delegate IPC_SendKeyFrame_fptr = (void* @pHandle, uint @dwPlayID, uint* @pErrorCode) =>
        {
            IPC_SendKeyFrame_fptr = GetFunctionDelegate<IPC_SendKeyFrame_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SendKeyFrame");
            if (IPC_SendKeyFrame_fptr == null)
            {
                IPC_SendKeyFrame_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SendKeyFrame is not supported on this platform.");
                };
            }
            return IPC_SendKeyFrame_fptr(@pHandle, @dwPlayID, @pErrorCode);
        };
        public static int IPC_SendKeyFrame(void* @pHandle, uint @dwPlayID, uint* @pErrorCode)
        {
            return IPC_SendKeyFrame_fptr(@pHandle, @dwPlayID, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SendTransData_delegate(void* @pHandle, byte* @szEventType, byte* @szParamIn, int @nLenIn, byte* @szParamOut, int* @nLenOut, uint* @pErrorCode);
        private static IPC_SendTransData_delegate IPC_SendTransData_fptr = (void* @pHandle, byte* @szEventType, byte* @szParamIn, int @nLenIn, byte* @szParamOut, int* @nLenOut, uint* @pErrorCode) =>
        {
            IPC_SendTransData_fptr = GetFunctionDelegate<IPC_SendTransData_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SendTransData");
            if (IPC_SendTransData_fptr == null)
            {
                IPC_SendTransData_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SendTransData is not supported on this platform.");
                };
            }
            return IPC_SendTransData_fptr(@pHandle, @szEventType, @szParamIn, @nLenIn, @szParamOut, @nLenOut, @pErrorCode);
        };
        public static int IPC_SendTransData(void* @pHandle, byte* @szEventType, byte* @szParamIn, int @nLenIn, byte* @szParamOut, int* @nLenOut, uint* @pErrorCode)
        {
            return IPC_SendTransData_fptr(@pHandle, @szEventType, @szParamIn, @nLenIn, @szParamOut, @nLenOut, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Set2DDenoise_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_Set2DDenoise_delegate IPC_Set2DDenoise_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_Set2DDenoise_fptr = GetFunctionDelegate<IPC_Set2DDenoise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Set2DDenoise");
            if (IPC_Set2DDenoise_fptr == null)
            {
                IPC_Set2DDenoise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Set2DDenoise is not supported on this platform.");
                };
            }
            return IPC_Set2DDenoise_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_Set2DDenoise(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_Set2DDenoise_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Set3DDenoise_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_Set3DDenoise_delegate IPC_Set3DDenoise_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_Set3DDenoise_fptr = GetFunctionDelegate<IPC_Set3DDenoise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Set3DDenoise");
            if (IPC_Set3DDenoise_fptr == null)
            {
                IPC_Set3DDenoise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Set3DDenoise is not supported on this platform.");
                };
            }
            return IPC_Set3DDenoise_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_Set3DDenoise(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_Set3DDenoise_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Set8021x_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_Set8021x_delegate IPC_Set8021x_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_Set8021x_fptr = GetFunctionDelegate<IPC_Set8021x_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Set8021x");
            if (IPC_Set8021x_fptr == null)
            {
                IPC_Set8021x_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Set8021x is not supported on this platform.");
                };
            }
            return IPC_Set8021x_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_Set8021x(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_Set8021x_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAdvanced_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAdvanced_delegate IPC_SetAdvanced_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAdvanced_fptr = GetFunctionDelegate<IPC_SetAdvanced_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAdvanced");
            if (IPC_SetAdvanced_fptr == null)
            {
                IPC_SetAdvanced_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAdvanced is not supported on this platform.");
                };
            }
            return IPC_SetAdvanced_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAdvanced(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAdvanced_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAlarmIn_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAlarmIn_delegate IPC_SetAlarmIn_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAlarmIn_fptr = GetFunctionDelegate<IPC_SetAlarmIn_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAlarmIn");
            if (IPC_SetAlarmIn_fptr == null)
            {
                IPC_SetAlarmIn_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAlarmIn is not supported on this platform.");
                };
            }
            return IPC_SetAlarmIn_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAlarmIn(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAlarmIn_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAlarmOut_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAlarmOut_delegate IPC_SetAlarmOut_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAlarmOut_fptr = GetFunctionDelegate<IPC_SetAlarmOut_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAlarmOut");
            if (IPC_SetAlarmOut_fptr == null)
            {
                IPC_SetAlarmOut_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAlarmOut is not supported on this platform.");
                };
            }
            return IPC_SetAlarmOut_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAlarmOut(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAlarmOut_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAquillaPTMove_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAquillaPTMove_delegate IPC_SetAquillaPTMove_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAquillaPTMove_fptr = GetFunctionDelegate<IPC_SetAquillaPTMove_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAquillaPTMove");
            if (IPC_SetAquillaPTMove_fptr == null)
            {
                IPC_SetAquillaPTMove_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAquillaPTMove is not supported on this platform.");
                };
            }
            return IPC_SetAquillaPTMove_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAquillaPTMove(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAquillaPTMove_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAquillaPTZAngle_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAquillaPTZAngle_delegate IPC_SetAquillaPTZAngle_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAquillaPTZAngle_fptr = GetFunctionDelegate<IPC_SetAquillaPTZAngle_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAquillaPTZAngle");
            if (IPC_SetAquillaPTZAngle_fptr == null)
            {
                IPC_SetAquillaPTZAngle_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAquillaPTZAngle is not supported on this platform.");
                };
            }
            return IPC_SetAquillaPTZAngle_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAquillaPTZAngle(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAquillaPTZAngle_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAreaDetectEnter_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAreaDetectEnter_delegate IPC_SetAreaDetectEnter_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAreaDetectEnter_fptr = GetFunctionDelegate<IPC_SetAreaDetectEnter_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAreaDetectEnter");
            if (IPC_SetAreaDetectEnter_fptr == null)
            {
                IPC_SetAreaDetectEnter_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAreaDetectEnter is not supported on this platform.");
                };
            }
            return IPC_SetAreaDetectEnter_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAreaDetectEnter(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAreaDetectEnter_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAreaDetectEntry_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAreaDetectEntry_delegate IPC_SetAreaDetectEntry_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAreaDetectEntry_fptr = GetFunctionDelegate<IPC_SetAreaDetectEntry_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAreaDetectEntry");
            if (IPC_SetAreaDetectEntry_fptr == null)
            {
                IPC_SetAreaDetectEntry_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAreaDetectEntry is not supported on this platform.");
                };
            }
            return IPC_SetAreaDetectEntry_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAreaDetectEntry(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAreaDetectEntry_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAreaDetectExit_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAreaDetectExit_delegate IPC_SetAreaDetectExit_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAreaDetectExit_fptr = GetFunctionDelegate<IPC_SetAreaDetectExit_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAreaDetectExit");
            if (IPC_SetAreaDetectExit_fptr == null)
            {
                IPC_SetAreaDetectExit_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAreaDetectExit is not supported on this platform.");
                };
            }
            return IPC_SetAreaDetectExit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAreaDetectExit(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAreaDetectExit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAudioDec_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAudioDec_delegate IPC_SetAudioDec_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAudioDec_fptr = GetFunctionDelegate<IPC_SetAudioDec_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAudioDec");
            if (IPC_SetAudioDec_fptr == null)
            {
                IPC_SetAudioDec_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAudioDec is not supported on this platform.");
                };
            }
            return IPC_SetAudioDec_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAudioDec(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAudioDec_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAudioEnc_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAudioEnc_delegate IPC_SetAudioEnc_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAudioEnc_fptr = GetFunctionDelegate<IPC_SetAudioEnc_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAudioEnc");
            if (IPC_SetAudioEnc_fptr == null)
            {
                IPC_SetAudioEnc_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAudioEnc is not supported on this platform.");
                };
            }
            return IPC_SetAudioEnc_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAudioEnc(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAudioEnc_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAudioEncExt_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAudioEncExt_delegate IPC_SetAudioEncExt_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAudioEncExt_fptr = GetFunctionDelegate<IPC_SetAudioEncExt_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAudioEncExt");
            if (IPC_SetAudioEncExt_fptr == null)
            {
                IPC_SetAudioEncExt_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAudioEncExt is not supported on this platform.");
                };
            }
            return IPC_SetAudioEncExt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAudioEncExt(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAudioEncExt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAudioExcept_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAudioExcept_delegate IPC_SetAudioExcept_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAudioExcept_fptr = GetFunctionDelegate<IPC_SetAudioExcept_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAudioExcept");
            if (IPC_SetAudioExcept_fptr == null)
            {
                IPC_SetAudioExcept_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAudioExcept is not supported on this platform.");
                };
            }
            return IPC_SetAudioExcept_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAudioExcept(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAudioExcept_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAuthMode_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetAuthMode_delegate IPC_SetAuthMode_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetAuthMode_fptr = GetFunctionDelegate<IPC_SetAuthMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAuthMode");
            if (IPC_SetAuthMode_fptr == null)
            {
                IPC_SetAuthMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAuthMode is not supported on this platform.");
                };
            }
            return IPC_SetAuthMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetAuthMode(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetAuthMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetAzimuth_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_SetAzimuth_delegate IPC_SetAzimuth_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_SetAzimuth_fptr = GetFunctionDelegate<IPC_SetAzimuth_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetAzimuth");
            if (IPC_SetAzimuth_fptr == null)
            {
                IPC_SetAzimuth_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetAzimuth is not supported on this platform.");
                };
            }
            return IPC_SetAzimuth_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_SetAzimuth(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_SetAzimuth_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetBLC_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetBLC_delegate IPC_SetBLC_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetBLC_fptr = GetFunctionDelegate<IPC_SetBLC_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetBLC");
            if (IPC_SetBLC_fptr == null)
            {
                IPC_SetBLC_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetBLC is not supported on this platform.");
                };
            }
            return IPC_SetBLC_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetBLC(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetBLC_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetCheckPointOsd_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetCheckPointOsd_delegate IPC_SetCheckPointOsd_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetCheckPointOsd_fptr = GetFunctionDelegate<IPC_SetCheckPointOsd_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetCheckPointOsd");
            if (IPC_SetCheckPointOsd_fptr == null)
            {
                IPC_SetCheckPointOsd_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetCheckPointOsd is not supported on this platform.");
                };
            }
            return IPC_SetCheckPointOsd_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetCheckPointOsd(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetCheckPointOsd_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetColor_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetColor_delegate IPC_SetColor_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetColor_fptr = GetFunctionDelegate<IPC_SetColor_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetColor");
            if (IPC_SetColor_fptr == null)
            {
                IPC_SetColor_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetColor is not supported on this platform.");
                };
            }
            return IPC_SetColor_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetColor(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetColor_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetColorSize_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetColorSize_delegate IPC_SetColorSize_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetColorSize_fptr = GetFunctionDelegate<IPC_SetColorSize_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetColorSize");
            if (IPC_SetColorSize_fptr == null)
            {
                IPC_SetColorSize_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetColorSize is not supported on this platform.");
                };
            }
            return IPC_SetColorSize_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetColorSize(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetColorSize_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetCorridorMode_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetCorridorMode_delegate IPC_SetCorridorMode_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetCorridorMode_fptr = GetFunctionDelegate<IPC_SetCorridorMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetCorridorMode");
            if (IPC_SetCorridorMode_fptr == null)
            {
                IPC_SetCorridorMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetCorridorMode is not supported on this platform.");
                };
            }
            return IPC_SetCorridorMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetCorridorMode(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetCorridorMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDdns_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDdns_delegate IPC_SetDdns_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDdns_fptr = GetFunctionDelegate<IPC_SetDdns_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDdns");
            if (IPC_SetDdns_fptr == null)
            {
                IPC_SetDdns_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDdns is not supported on this platform.");
                };
            }
            return IPC_SetDdns_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDdns(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDdns_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDeployPicStart_delegate(void* @pHandle, int @nParam, uint* @pErrorCode);
        private static IPC_SetDeployPicStart_delegate IPC_SetDeployPicStart_fptr = (void* @pHandle, int @nParam, uint* @pErrorCode) =>
        {
            IPC_SetDeployPicStart_fptr = GetFunctionDelegate<IPC_SetDeployPicStart_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDeployPicStart");
            if (IPC_SetDeployPicStart_fptr == null)
            {
                IPC_SetDeployPicStart_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDeployPicStart is not supported on this platform.");
                };
            }
            return IPC_SetDeployPicStart_fptr(@pHandle, @nParam, @pErrorCode);
        };
        public static int IPC_SetDeployPicStart(void* @pHandle, int @nParam, uint* @pErrorCode)
        {
            return IPC_SetDeployPicStart_fptr(@pHandle, @nParam, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDeployPicStop_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_SetDeployPicStop_delegate IPC_SetDeployPicStop_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_SetDeployPicStop_fptr = GetFunctionDelegate<IPC_SetDeployPicStop_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDeployPicStop");
            if (IPC_SetDeployPicStop_fptr == null)
            {
                IPC_SetDeployPicStop_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDeployPicStop is not supported on this platform.");
                };
            }
            return IPC_SetDeployPicStop_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_SetDeployPicStop(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_SetDeployPicStop_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDeployPicUpload_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDeployPicUpload_delegate IPC_SetDeployPicUpload_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDeployPicUpload_fptr = GetFunctionDelegate<IPC_SetDeployPicUpload_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDeployPicUpload");
            if (IPC_SetDeployPicUpload_fptr == null)
            {
                IPC_SetDeployPicUpload_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDeployPicUpload is not supported on this platform.");
                };
            }
            return IPC_SetDeployPicUpload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDeployPicUpload(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDeployPicUpload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDetect_delegate(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, uint* @pErrorCode);
        private static IPC_SetDetect_delegate IPC_SetDetect_fptr = (void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, uint* @pErrorCode) =>
        {
            IPC_SetDetect_fptr = GetFunctionDelegate<IPC_SetDetect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDetect");
            if (IPC_SetDetect_fptr == null)
            {
                IPC_SetDetect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDetect is not supported on this platform.");
                };
            }
            return IPC_SetDetect_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @pErrorCode);
        };
        public static int IPC_SetDetect(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, uint* @pErrorCode)
        {
            return IPC_SetDetect_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDeviceInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDeviceInfo_delegate IPC_SetDeviceInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDeviceInfo_fptr = GetFunctionDelegate<IPC_SetDeviceInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDeviceInfo");
            if (IPC_SetDeviceInfo_fptr == null)
            {
                IPC_SetDeviceInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDeviceInfo is not supported on this platform.");
                };
            }
            return IPC_SetDeviceInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDeviceInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDeviceInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDevSeqInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDevSeqInfo_delegate IPC_SetDevSeqInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDevSeqInfo_fptr = GetFunctionDelegate<IPC_SetDevSeqInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDevSeqInfo");
            if (IPC_SetDevSeqInfo_fptr == null)
            {
                IPC_SetDevSeqInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDevSeqInfo is not supported on this platform.");
                };
            }
            return IPC_SetDevSeqInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDevSeqInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDevSeqInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDpss_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDpss_delegate IPC_SetDpss_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDpss_fptr = GetFunctionDelegate<IPC_SetDpss_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDpss");
            if (IPC_SetDpss_fptr == null)
            {
                IPC_SetDpss_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDpss is not supported on this platform.");
                };
            }
            return IPC_SetDpss_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDpss(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDpss_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDST_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDST_delegate IPC_SetDST_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDST_fptr = GetFunctionDelegate<IPC_SetDST_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDST");
            if (IPC_SetDST_fptr == null)
            {
                IPC_SetDST_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDST is not supported on this platform.");
                };
            }
            return IPC_SetDST_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDST(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDST_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetDynPluginState_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetDynPluginState_delegate IPC_SetDynPluginState_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetDynPluginState_fptr = GetFunctionDelegate<IPC_SetDynPluginState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetDynPluginState");
            if (IPC_SetDynPluginState_fptr == null)
            {
                IPC_SetDynPluginState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetDynPluginState is not supported on this platform.");
                };
            }
            return IPC_SetDynPluginState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetDynPluginState(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetDynPluginState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetEepromInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetEepromInfo_delegate IPC_SetEepromInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetEepromInfo_fptr = GetFunctionDelegate<IPC_SetEepromInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetEepromInfo");
            if (IPC_SetEepromInfo_fptr == null)
            {
                IPC_SetEepromInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetEepromInfo is not supported on this platform.");
                };
            }
            return IPC_SetEepromInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetEepromInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetEepromInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetEventManualSnap_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetEventManualSnap_delegate IPC_SetEventManualSnap_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetEventManualSnap_fptr = GetFunctionDelegate<IPC_SetEventManualSnap_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetEventManualSnap");
            if (IPC_SetEventManualSnap_fptr == null)
            {
                IPC_SetEventManualSnap_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetEventManualSnap is not supported on this platform.");
                };
            }
            return IPC_SetEventManualSnap_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetEventManualSnap(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetEventManualSnap_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetEventTime_delegate(void* @pHandle, byte* @pEventType, byte* @pIndex, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, uint* @pErrorCode);
        private static IPC_SetEventTime_delegate IPC_SetEventTime_fptr = (void* @pHandle, byte* @pEventType, byte* @pIndex, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, uint* @pErrorCode) =>
        {
            IPC_SetEventTime_fptr = GetFunctionDelegate<IPC_SetEventTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetEventTime");
            if (IPC_SetEventTime_fptr == null)
            {
                IPC_SetEventTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetEventTime is not supported on this platform.");
                };
            }
            return IPC_SetEventTime_fptr(@pHandle, @pEventType, @pIndex, @pTimeArr, @nLenTime, @nLenTimeStruct, @pErrorCode);
        };
        public static int IPC_SetEventTime(void* @pHandle, byte* @pEventType, byte* @pIndex, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, uint* @pErrorCode)
        {
            return IPC_SetEventTime_fptr(@pHandle, @pEventType, @pIndex, @pTimeArr, @nLenTime, @nLenTimeStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetExcept_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetExcept_delegate IPC_SetExcept_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetExcept_fptr = GetFunctionDelegate<IPC_SetExcept_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetExcept");
            if (IPC_SetExcept_fptr == null)
            {
                IPC_SetExcept_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetExcept is not supported on this platform.");
                };
            }
            return IPC_SetExcept_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetExcept(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetExcept_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetFaceDetect_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetFaceDetect_delegate IPC_SetFaceDetect_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetFaceDetect_fptr = GetFunctionDelegate<IPC_SetFaceDetect_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetFaceDetect");
            if (IPC_SetFaceDetect_fptr == null)
            {
                IPC_SetFaceDetect_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetFaceDetect is not supported on this platform.");
                };
            }
            return IPC_SetFaceDetect_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetFaceDetect(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetFaceDetect_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetFillLight_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetFillLight_delegate IPC_SetFillLight_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetFillLight_fptr = GetFunctionDelegate<IPC_SetFillLight_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetFillLight");
            if (IPC_SetFillLight_fptr == null)
            {
                IPC_SetFillLight_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetFillLight is not supported on this platform.");
                };
            }
            return IPC_SetFillLight_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetFillLight(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetFillLight_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetFocus_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetFocus_delegate IPC_SetFocus_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetFocus_fptr = GetFunctionDelegate<IPC_SetFocus_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetFocus");
            if (IPC_SetFocus_fptr == null)
            {
                IPC_SetFocus_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetFocus is not supported on this platform.");
                };
            }
            return IPC_SetFocus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetFocus(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetFocus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetFogThrough_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetFogThrough_delegate IPC_SetFogThrough_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetFogThrough_fptr = GetFunctionDelegate<IPC_SetFogThrough_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetFogThrough");
            if (IPC_SetFogThrough_fptr == null)
            {
                IPC_SetFogThrough_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetFogThrough is not supported on this platform.");
                };
            }
            return IPC_SetFogThrough_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetFogThrough(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetFogThrough_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetGain_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetGain_delegate IPC_SetGain_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetGain_fptr = GetFunctionDelegate<IPC_SetGain_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetGain");
            if (IPC_SetGain_fptr == null)
            {
                IPC_SetGain_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetGain is not supported on this platform.");
                };
            }
            return IPC_SetGain_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetGain(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetGain_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetGamma_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetGamma_delegate IPC_SetGamma_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetGamma_fptr = GetFunctionDelegate<IPC_SetGamma_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetGamma");
            if (IPC_SetGamma_fptr == null)
            {
                IPC_SetGamma_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetGamma is not supported on this platform.");
                };
            }
            return IPC_SetGamma_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetGamma(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetGamma_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetGB28181_delegate(void* @pHandle, byte* @byPlateid, void* @pInfo, int @nLenInfo, void* @pEncChnArr, int @nLenEncChnInfo, void* @pAlarmChnArr, int @nLenAlarmChnInfo, uint* @pErrorCode);
        private static IPC_SetGB28181_delegate IPC_SetGB28181_fptr = (void* @pHandle, byte* @byPlateid, void* @pInfo, int @nLenInfo, void* @pEncChnArr, int @nLenEncChnInfo, void* @pAlarmChnArr, int @nLenAlarmChnInfo, uint* @pErrorCode) =>
        {
            IPC_SetGB28181_fptr = GetFunctionDelegate<IPC_SetGB28181_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetGB28181");
            if (IPC_SetGB28181_fptr == null)
            {
                IPC_SetGB28181_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetGB28181 is not supported on this platform.");
                };
            }
            return IPC_SetGB28181_fptr(@pHandle, @byPlateid, @pInfo, @nLenInfo, @pEncChnArr, @nLenEncChnInfo, @pAlarmChnArr, @nLenAlarmChnInfo, @pErrorCode);
        };
        public static int IPC_SetGB28181(void* @pHandle, byte* @byPlateid, void* @pInfo, int @nLenInfo, void* @pEncChnArr, int @nLenEncChnInfo, void* @pAlarmChnArr, int @nLenAlarmChnInfo, uint* @pErrorCode)
        {
            return IPC_SetGB28181_fptr(@pHandle, @byPlateid, @pInfo, @nLenInfo, @pEncChnArr, @nLenEncChnInfo, @pAlarmChnArr, @nLenAlarmChnInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetHLC_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetHLC_delegate IPC_SetHLC_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetHLC_fptr = GetFunctionDelegate<IPC_SetHLC_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetHLC");
            if (IPC_SetHLC_fptr == null)
            {
                IPC_SetHLC_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetHLC is not supported on this platform.");
                };
            }
            return IPC_SetHLC_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetHLC(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetHLC_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SethotPointState_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SethotPointState_delegate IPC_SethotPointState_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SethotPointState_fptr = GetFunctionDelegate<IPC_SethotPointState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SethotPointState");
            if (IPC_SethotPointState_fptr == null)
            {
                IPC_SethotPointState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SethotPointState is not supported on this platform.");
                };
            }
            return IPC_SethotPointState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SethotPointState(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SethotPointState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetImageMode_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetImageMode_delegate IPC_SetImageMode_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetImageMode_fptr = GetFunctionDelegate<IPC_SetImageMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetImageMode");
            if (IPC_SetImageMode_fptr == null)
            {
                IPC_SetImageMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetImageMode is not supported on this platform.");
                };
            }
            return IPC_SetImageMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetImageMode(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetImageMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetInfrared_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetInfrared_delegate IPC_SetInfrared_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetInfrared_fptr = GetFunctionDelegate<IPC_SetInfrared_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetInfrared");
            if (IPC_SetInfrared_fptr == null)
            {
                IPC_SetInfrared_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetInfrared is not supported on this platform.");
                };
            }
            return IPC_SetInfrared_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetInfrared(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetInfrared_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetIpInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetIpInfo_delegate IPC_SetIpInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetIpInfo_fptr = GetFunctionDelegate<IPC_SetIpInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetIpInfo");
            if (IPC_SetIpInfo_fptr == null)
            {
                IPC_SetIpInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetIpInfo is not supported on this platform.");
                };
            }
            return IPC_SetIpInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetIpInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetIpInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetIris_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetIris_delegate IPC_SetIris_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetIris_fptr = GetFunctionDelegate<IPC_SetIris_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetIris");
            if (IPC_SetIris_fptr == null)
            {
                IPC_SetIris_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetIris is not supported on this platform.");
                };
            }
            return IPC_SetIris_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetIris(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetIris_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetKSnmp_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetKSnmp_delegate IPC_SetKSnmp_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetKSnmp_fptr = GetFunctionDelegate<IPC_SetKSnmp_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetKSnmp");
            if (IPC_SetKSnmp_fptr == null)
            {
                IPC_SetKSnmp_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetKSnmp is not supported on this platform.");
                };
            }
            return IPC_SetKSnmp_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetKSnmp(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetKSnmp_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetLaser_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetLaser_delegate IPC_SetLaser_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetLaser_fptr = GetFunctionDelegate<IPC_SetLaser_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetLaser");
            if (IPC_SetLaser_fptr == null)
            {
                IPC_SetLaser_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetLaser is not supported on this platform.");
                };
            }
            return IPC_SetLaser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetLaser(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetLaser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetLocalEcho_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetLocalEcho_delegate IPC_SetLocalEcho_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetLocalEcho_fptr = GetFunctionDelegate<IPC_SetLocalEcho_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetLocalEcho");
            if (IPC_SetLocalEcho_fptr == null)
            {
                IPC_SetLocalEcho_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetLocalEcho is not supported on this platform.");
                };
            }
            return IPC_SetLocalEcho_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetLocalEcho(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetLocalEcho_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetMobilenetwork_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetMobilenetwork_delegate IPC_SetMobilenetwork_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetMobilenetwork_fptr = GetFunctionDelegate<IPC_SetMobilenetwork_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetMobilenetwork");
            if (IPC_SetMobilenetwork_fptr == null)
            {
                IPC_SetMobilenetwork_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetMobilenetwork is not supported on this platform.");
                };
            }
            return IPC_SetMobilenetwork_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetMobilenetwork(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetMobilenetwork_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetMTCF_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetMTCF_delegate IPC_SetMTCF_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetMTCF_fptr = GetFunctionDelegate<IPC_SetMTCF_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetMTCF");
            if (IPC_SetMTCF_fptr == null)
            {
                IPC_SetMTCF_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetMTCF is not supported on this platform.");
                };
            }
            return IPC_SetMTCF_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetMTCF(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetMTCF_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetMultiVideoMode_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetMultiVideoMode_delegate IPC_SetMultiVideoMode_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetMultiVideoMode_fptr = GetFunctionDelegate<IPC_SetMultiVideoMode_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetMultiVideoMode");
            if (IPC_SetMultiVideoMode_fptr == null)
            {
                IPC_SetMultiVideoMode_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetMultiVideoMode is not supported on this platform.");
                };
            }
            return IPC_SetMultiVideoMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetMultiVideoMode(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetMultiVideoMode_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetNetPort_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetNetPort_delegate IPC_SetNetPort_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetNetPort_fptr = GetFunctionDelegate<IPC_SetNetPort_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetNetPort");
            if (IPC_SetNetPort_fptr == null)
            {
                IPC_SetNetPort_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetNetPort is not supported on this platform.");
                };
            }
            return IPC_SetNetPort_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetNetPort(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetNetPort_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetObjectLeft_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetObjectLeft_delegate IPC_SetObjectLeft_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetObjectLeft_fptr = GetFunctionDelegate<IPC_SetObjectLeft_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetObjectLeft");
            if (IPC_SetObjectLeft_fptr == null)
            {
                IPC_SetObjectLeft_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetObjectLeft is not supported on this platform.");
                };
            }
            return IPC_SetObjectLeft_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetObjectLeft(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetObjectLeft_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetObjectRemoval_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetObjectRemoval_delegate IPC_SetObjectRemoval_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetObjectRemoval_fptr = GetFunctionDelegate<IPC_SetObjectRemoval_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetObjectRemoval");
            if (IPC_SetObjectRemoval_fptr == null)
            {
                IPC_SetObjectRemoval_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetObjectRemoval is not supported on this platform.");
                };
            }
            return IPC_SetObjectRemoval_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetObjectRemoval(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetObjectRemoval_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetOnvif_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetOnvif_delegate IPC_SetOnvif_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetOnvif_fptr = GetFunctionDelegate<IPC_SetOnvif_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetOnvif");
            if (IPC_SetOnvif_fptr == null)
            {
                IPC_SetOnvif_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetOnvif is not supported on this platform.");
                };
            }
            return IPC_SetOnvif_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetOnvif(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetOnvif_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetOsd_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetOsd_delegate IPC_SetOsd_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetOsd_fptr = GetFunctionDelegate<IPC_SetOsd_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetOsd");
            if (IPC_SetOsd_fptr == null)
            {
                IPC_SetOsd_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetOsd is not supported on this platform.");
                };
            }
            return IPC_SetOsd_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetOsd(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetOsd_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetOsdList_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetOsdList_delegate IPC_SetOsdList_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetOsdList_fptr = GetFunctionDelegate<IPC_SetOsdList_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetOsdList");
            if (IPC_SetOsdList_fptr == null)
            {
                IPC_SetOsdList_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetOsdList is not supported on this platform.");
                };
            }
            return IPC_SetOsdList_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetOsdList(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetOsdList_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetOsdPrepare_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetOsdPrepare_delegate IPC_SetOsdPrepare_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetOsdPrepare_fptr = GetFunctionDelegate<IPC_SetOsdPrepare_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetOsdPrepare");
            if (IPC_SetOsdPrepare_fptr == null)
            {
                IPC_SetOsdPrepare_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetOsdPrepare is not supported on this platform.");
                };
            }
            return IPC_SetOsdPrepare_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetOsdPrepare(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetOsdPrepare_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetOsdUploadFile_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetOsdUploadFile_delegate IPC_SetOsdUploadFile_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetOsdUploadFile_fptr = GetFunctionDelegate<IPC_SetOsdUploadFile_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetOsdUploadFile");
            if (IPC_SetOsdUploadFile_fptr == null)
            {
                IPC_SetOsdUploadFile_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetOsdUploadFile is not supported on this platform.");
                };
            }
            return IPC_SetOsdUploadFile_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetOsdUploadFile(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetOsdUploadFile_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPersonAggregate_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPersonAggregate_delegate IPC_SetPersonAggregate_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPersonAggregate_fptr = GetFunctionDelegate<IPC_SetPersonAggregate_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPersonAggregate");
            if (IPC_SetPersonAggregate_fptr == null)
            {
                IPC_SetPersonAggregate_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPersonAggregate is not supported on this platform.");
                };
            }
            return IPC_SetPersonAggregate_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPersonAggregate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPersonAggregate_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPowerInfo_delegate(void* @pHandle, void* @pParam, int @nLen, int @nLenStruct, uint* @pErrorCode);
        private static IPC_SetPowerInfo_delegate IPC_SetPowerInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, int @nLenStruct, uint* @pErrorCode) =>
        {
            IPC_SetPowerInfo_fptr = GetFunctionDelegate<IPC_SetPowerInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPowerInfo");
            if (IPC_SetPowerInfo_fptr == null)
            {
                IPC_SetPowerInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPowerInfo is not supported on this platform.");
                };
            }
            return IPC_SetPowerInfo_fptr(@pHandle, @pParam, @nLen, @nLenStruct, @pErrorCode);
        };
        public static int IPC_SetPowerInfo(void* @pHandle, void* @pParam, int @nLen, int @nLenStruct, uint* @pErrorCode)
        {
            return IPC_SetPowerInfo_fptr(@pHandle, @pParam, @nLen, @nLenStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPowerLineFrequency_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPowerLineFrequency_delegate IPC_SetPowerLineFrequency_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPowerLineFrequency_fptr = GetFunctionDelegate<IPC_SetPowerLineFrequency_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPowerLineFrequency");
            if (IPC_SetPowerLineFrequency_fptr == null)
            {
                IPC_SetPowerLineFrequency_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPowerLineFrequency is not supported on this platform.");
                };
            }
            return IPC_SetPowerLineFrequency_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPowerLineFrequency(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPowerLineFrequency_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPPPoE_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPPPoE_delegate IPC_SetPPPoE_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPPPoE_fptr = GetFunctionDelegate<IPC_SetPPPoE_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPPPoE");
            if (IPC_SetPPPoE_fptr == null)
            {
                IPC_SetPPPoE_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPPPoE is not supported on this platform.");
                };
            }
            return IPC_SetPPPoE_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPPPoE(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPPPoE_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzBase_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzBase_delegate IPC_SetPtzBase_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzBase_fptr = GetFunctionDelegate<IPC_SetPtzBase_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzBase");
            if (IPC_SetPtzBase_fptr == null)
            {
                IPC_SetPtzBase_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzBase is not supported on this platform.");
                };
            }
            return IPC_SetPtzBase_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzBase(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzBase_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzCoorDinateEvt_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzCoorDinateEvt_delegate IPC_SetPtzCoorDinateEvt_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzCoorDinateEvt_fptr = GetFunctionDelegate<IPC_SetPtzCoorDinateEvt_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzCoorDinateEvt");
            if (IPC_SetPtzCoorDinateEvt_fptr == null)
            {
                IPC_SetPtzCoorDinateEvt_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzCoorDinateEvt is not supported on this platform.");
                };
            }
            return IPC_SetPtzCoorDinateEvt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzCoorDinateEvt(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzCoorDinateEvt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzCoorDinateEX_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzCoorDinateEX_delegate IPC_SetPtzCoorDinateEX_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzCoorDinateEX_fptr = GetFunctionDelegate<IPC_SetPtzCoorDinateEX_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzCoorDinateEX");
            if (IPC_SetPtzCoorDinateEX_fptr == null)
            {
                IPC_SetPtzCoorDinateEX_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzCoorDinateEX is not supported on this platform.");
                };
            }
            return IPC_SetPtzCoorDinateEX_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzCoorDinateEX(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzCoorDinateEX_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzLimit_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzLimit_delegate IPC_SetPtzLimit_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzLimit_fptr = GetFunctionDelegate<IPC_SetPtzLimit_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzLimit");
            if (IPC_SetPtzLimit_fptr == null)
            {
                IPC_SetPtzLimit_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzLimit is not supported on this platform.");
                };
            }
            return IPC_SetPtzLimit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzLimit(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzLimit_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzMainTain_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzMainTain_delegate IPC_SetPtzMainTain_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzMainTain_fptr = GetFunctionDelegate<IPC_SetPtzMainTain_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzMainTain");
            if (IPC_SetPtzMainTain_fptr == null)
            {
                IPC_SetPtzMainTain_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzMainTain is not supported on this platform.");
                };
            }
            return IPC_SetPtzMainTain_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzMainTain(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzMainTain_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzPathCruise_delegate(void* @pHandle, byte @bySn, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzPathCruise_delegate IPC_SetPtzPathCruise_fptr = (void* @pHandle, byte @bySn, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzPathCruise_fptr = GetFunctionDelegate<IPC_SetPtzPathCruise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzPathCruise");
            if (IPC_SetPtzPathCruise_fptr == null)
            {
                IPC_SetPtzPathCruise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzPathCruise is not supported on this platform.");
                };
            }
            return IPC_SetPtzPathCruise_fptr(@pHandle, @bySn, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzPathCruise(void* @pHandle, byte @bySn, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzPathCruise_fptr(@pHandle, @bySn, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzPathCruiseEvent_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzPathCruiseEvent_delegate IPC_SetPtzPathCruiseEvent_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzPathCruiseEvent_fptr = GetFunctionDelegate<IPC_SetPtzPathCruiseEvent_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzPathCruiseEvent");
            if (IPC_SetPtzPathCruiseEvent_fptr == null)
            {
                IPC_SetPtzPathCruiseEvent_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzPathCruiseEvent is not supported on this platform.");
                };
            }
            return IPC_SetPtzPathCruiseEvent_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzPathCruiseEvent(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzPathCruiseEvent_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzPatternEvt_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzPatternEvt_delegate IPC_SetPtzPatternEvt_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzPatternEvt_fptr = GetFunctionDelegate<IPC_SetPtzPatternEvt_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzPatternEvt");
            if (IPC_SetPtzPatternEvt_fptr == null)
            {
                IPC_SetPtzPatternEvt_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzPatternEvt is not supported on this platform.");
                };
            }
            return IPC_SetPtzPatternEvt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzPatternEvt(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzPatternEvt_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzPreset_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzPreset_delegate IPC_SetPtzPreset_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzPreset_fptr = GetFunctionDelegate<IPC_SetPtzPreset_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzPreset");
            if (IPC_SetPtzPreset_fptr == null)
            {
                IPC_SetPtzPreset_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzPreset is not supported on this platform.");
                };
            }
            return IPC_SetPtzPreset_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzPreset(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzPreset_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzRatio_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzRatio_delegate IPC_SetPtzRatio_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzRatio_fptr = GetFunctionDelegate<IPC_SetPtzRatio_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzRatio");
            if (IPC_SetPtzRatio_fptr == null)
            {
                IPC_SetPtzRatio_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzRatio is not supported on this platform.");
                };
            }
            return IPC_SetPtzRatio_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzRatio(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzRatio_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzRefactory_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzRefactory_delegate IPC_SetPtzRefactory_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzRefactory_fptr = GetFunctionDelegate<IPC_SetPtzRefactory_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzRefactory");
            if (IPC_SetPtzRefactory_fptr == null)
            {
                IPC_SetPtzRefactory_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzRefactory is not supported on this platform.");
                };
            }
            return IPC_SetPtzRefactory_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzRefactory(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzRefactory_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzWatchOn_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzWatchOn_delegate IPC_SetPtzWatchOn_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzWatchOn_fptr = GetFunctionDelegate<IPC_SetPtzWatchOn_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzWatchOn");
            if (IPC_SetPtzWatchOn_fptr == null)
            {
                IPC_SetPtzWatchOn_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzWatchOn is not supported on this platform.");
                };
            }
            return IPC_SetPtzWatchOn_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzWatchOn(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzWatchOn_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzWiper_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzWiper_delegate IPC_SetPtzWiper_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzWiper_fptr = GetFunctionDelegate<IPC_SetPtzWiper_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzWiper");
            if (IPC_SetPtzWiper_fptr == null)
            {
                IPC_SetPtzWiper_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzWiper is not supported on this platform.");
                };
            }
            return IPC_SetPtzWiper_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzWiper(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzWiper_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPtzWSInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPtzWSInfo_delegate IPC_SetPtzWSInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPtzWSInfo_fptr = GetFunctionDelegate<IPC_SetPtzWSInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPtzWSInfo");
            if (IPC_SetPtzWSInfo_fptr == null)
            {
                IPC_SetPtzWSInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPtzWSInfo is not supported on this platform.");
                };
            }
            return IPC_SetPtzWSInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPtzWSInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPtzWSInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetPubsec_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetPubsec_delegate IPC_SetPubsec_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetPubsec_fptr = GetFunctionDelegate<IPC_SetPubsec_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetPubsec");
            if (IPC_SetPubsec_fptr == null)
            {
                IPC_SetPubsec_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetPubsec is not supported on this platform.");
                };
            }
            return IPC_SetPubsec_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetPubsec(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetPubsec_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetQos_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetQos_delegate IPC_SetQos_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetQos_fptr = GetFunctionDelegate<IPC_SetQos_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetQos");
            if (IPC_SetQos_fptr == null)
            {
                IPC_SetQos_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetQos is not supported on this platform.");
                };
            }
            return IPC_SetQos_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetQos(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetQos_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_Setrecdownloadspeed_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_Setrecdownloadspeed_delegate IPC_Setrecdownloadspeed_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_Setrecdownloadspeed_fptr = GetFunctionDelegate<IPC_Setrecdownloadspeed_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_Setrecdownloadspeed");
            if (IPC_Setrecdownloadspeed_fptr == null)
            {
                IPC_Setrecdownloadspeed_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_Setrecdownloadspeed is not supported on this platform.");
                };
            }
            return IPC_Setrecdownloadspeed_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_Setrecdownloadspeed(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_Setrecdownloadspeed_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetRecordPlayRate_delegate(void* @pHandle, uint @dwPlayID, uint @dwPlayRate, uint* @pErrorCode);
        private static IPC_SetRecordPlayRate_delegate IPC_SetRecordPlayRate_fptr = (void* @pHandle, uint @dwPlayID, uint @dwPlayRate, uint* @pErrorCode) =>
        {
            IPC_SetRecordPlayRate_fptr = GetFunctionDelegate<IPC_SetRecordPlayRate_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetRecordPlayRate");
            if (IPC_SetRecordPlayRate_fptr == null)
            {
                IPC_SetRecordPlayRate_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetRecordPlayRate is not supported on this platform.");
                };
            }
            return IPC_SetRecordPlayRate_fptr(@pHandle, @dwPlayID, @dwPlayRate, @pErrorCode);
        };
        public static int IPC_SetRecordPlayRate(void* @pHandle, uint @dwPlayID, uint @dwPlayRate, uint* @pErrorCode)
        {
            return IPC_SetRecordPlayRate_fptr(@pHandle, @dwPlayID, @dwPlayRate, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetRecSchedule_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetRecSchedule_delegate IPC_SetRecSchedule_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetRecSchedule_fptr = GetFunctionDelegate<IPC_SetRecSchedule_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetRecSchedule");
            if (IPC_SetRecSchedule_fptr == null)
            {
                IPC_SetRecSchedule_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetRecSchedule is not supported on this platform.");
                };
            }
            return IPC_SetRecSchedule_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetRecSchedule(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetRecSchedule_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetRSInfo_delegate(void* @pHandle, void* @ptParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetRSInfo_delegate IPC_SetRSInfo_fptr = (void* @pHandle, void* @ptParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetRSInfo_fptr = GetFunctionDelegate<IPC_SetRSInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetRSInfo");
            if (IPC_SetRSInfo_fptr == null)
            {
                IPC_SetRSInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetRSInfo is not supported on this platform.");
                };
            }
            return IPC_SetRSInfo_fptr(@pHandle, @ptParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetRSInfo(void* @pHandle, void* @ptParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetRSInfo_fptr(@pHandle, @ptParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_SetRtspMetaPort_delegate(void* @pHandle, emPlayVideoType @eType, bool @bVideo, void* @pParam, int @nLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_SetRtspMetaPort_delegate IPC_SetRtspMetaPort_fptr = (void* @pHandle, emPlayVideoType @eType, bool @bVideo, void* @pParam, int @nLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_SetRtspMetaPort_fptr = GetFunctionDelegate<IPC_SetRtspMetaPort_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetRtspMetaPort");
            if (IPC_SetRtspMetaPort_fptr == null)
            {
                IPC_SetRtspMetaPort_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetRtspMetaPort is not supported on this platform.");
                };
            }
            return IPC_SetRtspMetaPort_fptr(@pHandle, @eType, @bVideo, @pParam, @nLen, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static uint IPC_SetRtspMetaPort(void* @pHandle, emPlayVideoType @eType, bool @bVideo, void* @pParam, int @nLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_SetRtspMetaPort_fptr(@pHandle, @eType, @bVideo, @pParam, @nLen, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetShieldAlarm_delegate(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, uint* @pErrorCode);
        private static IPC_SetShieldAlarm_delegate IPC_SetShieldAlarm_fptr = (void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, uint* @pErrorCode) =>
        {
            IPC_SetShieldAlarm_fptr = GetFunctionDelegate<IPC_SetShieldAlarm_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetShieldAlarm");
            if (IPC_SetShieldAlarm_fptr == null)
            {
                IPC_SetShieldAlarm_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetShieldAlarm is not supported on this platform.");
                };
            }
            return IPC_SetShieldAlarm_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @pErrorCode);
        };
        public static int IPC_SetShieldAlarm(void* @pHandle, void* @pParam, int @nLen, void* @pAreaArr, int @nLenArea, uint* @pErrorCode)
        {
            return IPC_SetShieldAlarm_fptr(@pHandle, @pParam, @nLen, @pAreaArr, @nLenArea, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetShutter_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetShutter_delegate IPC_SetShutter_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetShutter_fptr = GetFunctionDelegate<IPC_SetShutter_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetShutter");
            if (IPC_SetShutter_fptr == null)
            {
                IPC_SetShutter_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetShutter is not supported on this platform.");
                };
            }
            return IPC_SetShutter_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetShutter(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetShutter_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSightChange_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSightChange_delegate IPC_SetSightChange_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSightChange_fptr = GetFunctionDelegate<IPC_SetSightChange_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSightChange");
            if (IPC_SetSightChange_fptr == null)
            {
                IPC_SetSightChange_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSightChange is not supported on this platform.");
                };
            }
            return IPC_SetSightChange_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSightChange(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSightChange_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSmartIR_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSmartIR_delegate IPC_SetSmartIR_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSmartIR_fptr = GetFunctionDelegate<IPC_SetSmartIR_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSmartIR");
            if (IPC_SetSmartIR_fptr == null)
            {
                IPC_SetSmartIR_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSmartIR is not supported on this platform.");
                };
            }
            return IPC_SetSmartIR_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSmartIR(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSmartIR_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSmartOsdInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSmartOsdInfo_delegate IPC_SetSmartOsdInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSmartOsdInfo_fptr = GetFunctionDelegate<IPC_SetSmartOsdInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSmartOsdInfo");
            if (IPC_SetSmartOsdInfo_fptr == null)
            {
                IPC_SetSmartOsdInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSmartOsdInfo is not supported on this platform.");
                };
            }
            return IPC_SetSmartOsdInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSmartOsdInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSmartOsdInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSnapEvent_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSnapEvent_delegate IPC_SetSnapEvent_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSnapEvent_fptr = GetFunctionDelegate<IPC_SetSnapEvent_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSnapEvent");
            if (IPC_SetSnapEvent_fptr == null)
            {
                IPC_SetSnapEvent_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSnapEvent is not supported on this platform.");
                };
            }
            return IPC_SetSnapEvent_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSnapEvent(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSnapEvent_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSnapPicCfg_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSnapPicCfg_delegate IPC_SetSnapPicCfg_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSnapPicCfg_fptr = GetFunctionDelegate<IPC_SetSnapPicCfg_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSnapPicCfg");
            if (IPC_SetSnapPicCfg_fptr == null)
            {
                IPC_SetSnapPicCfg_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSnapPicCfg is not supported on this platform.");
                };
            }
            return IPC_SetSnapPicCfg_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSnapPicCfg(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSnapPicCfg_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSnapTime_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSnapTime_delegate IPC_SetSnapTime_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSnapTime_fptr = GetFunctionDelegate<IPC_SetSnapTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSnapTime");
            if (IPC_SetSnapTime_fptr == null)
            {
                IPC_SetSnapTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSnapTime is not supported on this platform.");
                };
            }
            return IPC_SetSnapTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSnapTime(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSnapTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSSH_delegate(void* @pHandle, bool @bOpen, uint* @pErrorCode);
        private static IPC_SetSSH_delegate IPC_SetSSH_fptr = (void* @pHandle, bool @bOpen, uint* @pErrorCode) =>
        {
            IPC_SetSSH_fptr = GetFunctionDelegate<IPC_SetSSH_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSSH");
            if (IPC_SetSSH_fptr == null)
            {
                IPC_SetSSH_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSSH is not supported on this platform.");
                };
            }
            return IPC_SetSSH_fptr(@pHandle, @bOpen, @pErrorCode);
        };
        public static int IPC_SetSSH(void* @pHandle, bool @bOpen, uint* @pErrorCode)
        {
            return IPC_SetSSH_fptr(@pHandle, @bOpen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetStorageMgr_delegate(void* @pHandle, void* @pInfo, int @nLenInfo, uint* @pErrorCode);
        private static IPC_SetStorageMgr_delegate IPC_SetStorageMgr_fptr = (void* @pHandle, void* @pInfo, int @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_SetStorageMgr_fptr = GetFunctionDelegate<IPC_SetStorageMgr_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetStorageMgr");
            if (IPC_SetStorageMgr_fptr == null)
            {
                IPC_SetStorageMgr_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetStorageMgr is not supported on this platform.");
                };
            }
            return IPC_SetStorageMgr_fptr(@pHandle, @pInfo, @nLenInfo, @pErrorCode);
        };
        public static int IPC_SetStorageMgr(void* @pHandle, void* @pInfo, int @nLenInfo, uint* @pErrorCode)
        {
            return IPC_SetStorageMgr_fptr(@pHandle, @pInfo, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSystemTime_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSystemTime_delegate IPC_SetSystemTime_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSystemTime_fptr = GetFunctionDelegate<IPC_SetSystemTime_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSystemTime");
            if (IPC_SetSystemTime_fptr == null)
            {
                IPC_SetSystemTime_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSystemTime is not supported on this platform.");
                };
            }
            return IPC_SetSystemTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSystemTime(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSystemTime_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetSysTimeSynChronise_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetSysTimeSynChronise_delegate IPC_SetSysTimeSynChronise_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetSysTimeSynChronise_fptr = GetFunctionDelegate<IPC_SetSysTimeSynChronise_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetSysTimeSynChronise");
            if (IPC_SetSysTimeSynChronise_fptr == null)
            {
                IPC_SetSysTimeSynChronise_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetSysTimeSynChronise is not supported on this platform.");
                };
            }
            return IPC_SetSysTimeSynChronise_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetSysTimeSynChronise(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetSysTimeSynChronise_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetTestToolInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetTestToolInfo_delegate IPC_SetTestToolInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetTestToolInfo_fptr = GetFunctionDelegate<IPC_SetTestToolInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetTestToolInfo");
            if (IPC_SetTestToolInfo_fptr == null)
            {
                IPC_SetTestToolInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetTestToolInfo is not supported on this platform.");
                };
            }
            return IPC_SetTestToolInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetTestToolInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetTestToolInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetTimeAuto_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetTimeAuto_delegate IPC_SetTimeAuto_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetTimeAuto_fptr = GetFunctionDelegate<IPC_SetTimeAuto_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetTimeAuto");
            if (IPC_SetTimeAuto_fptr == null)
            {
                IPC_SetTimeAuto_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetTimeAuto is not supported on this platform.");
                };
            }
            return IPC_SetTimeAuto_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetTimeAuto(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetTimeAuto_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetTimeAutoEx_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetTimeAutoEx_delegate IPC_SetTimeAutoEx_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetTimeAutoEx_fptr = GetFunctionDelegate<IPC_SetTimeAutoEx_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetTimeAutoEx");
            if (IPC_SetTimeAutoEx_fptr == null)
            {
                IPC_SetTimeAutoEx_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetTimeAutoEx is not supported on this platform.");
                };
            }
            return IPC_SetTimeAutoEx_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetTimeAutoEx(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetTimeAutoEx_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetTimeTask_delegate(void* @pHandle, void* @pParam, int @nLen, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, uint* @pErrorCode);
        private static IPC_SetTimeTask_delegate IPC_SetTimeTask_fptr = (void* @pHandle, void* @pParam, int @nLen, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, uint* @pErrorCode) =>
        {
            IPC_SetTimeTask_fptr = GetFunctionDelegate<IPC_SetTimeTask_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetTimeTask");
            if (IPC_SetTimeTask_fptr == null)
            {
                IPC_SetTimeTask_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetTimeTask is not supported on this platform.");
                };
            }
            return IPC_SetTimeTask_fptr(@pHandle, @pParam, @nLen, @pTimeArr, @nLenTime, @nLenTimeStruct, @pErrorCode);
        };
        public static int IPC_SetTimeTask(void* @pHandle, void* @pParam, int @nLen, void* @pTimeArr, int @nLenTime, int @nLenTimeStruct, uint* @pErrorCode)
        {
            return IPC_SetTimeTask_fptr(@pHandle, @pParam, @nLen, @pTimeArr, @nLenTime, @nLenTimeStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetUavTrack_delegate(void* @pHandle, bool @pParam, uint* @pErrorCode);
        private static IPC_SetUavTrack_delegate IPC_SetUavTrack_fptr = (void* @pHandle, bool @pParam, uint* @pErrorCode) =>
        {
            IPC_SetUavTrack_fptr = GetFunctionDelegate<IPC_SetUavTrack_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetUavTrack");
            if (IPC_SetUavTrack_fptr == null)
            {
                IPC_SetUavTrack_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetUavTrack is not supported on this platform.");
                };
            }
            return IPC_SetUavTrack_fptr(@pHandle, @pParam, @pErrorCode);
        };
        public static int IPC_SetUavTrack(void* @pHandle, bool @pParam, uint* @pErrorCode)
        {
            return IPC_SetUavTrack_fptr(@pHandle, @pParam, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetUPnP_delegate(void* @pHandle, void* @pInfo, int @nlenInfo, void* @pMap, int @nLenMap, int* @nLenMapStruct, uint* @pErrorCode);
        private static IPC_SetUPnP_delegate IPC_SetUPnP_fptr = (void* @pHandle, void* @pInfo, int @nlenInfo, void* @pMap, int @nLenMap, int* @nLenMapStruct, uint* @pErrorCode) =>
        {
            IPC_SetUPnP_fptr = GetFunctionDelegate<IPC_SetUPnP_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetUPnP");
            if (IPC_SetUPnP_fptr == null)
            {
                IPC_SetUPnP_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetUPnP is not supported on this platform.");
                };
            }
            return IPC_SetUPnP_fptr(@pHandle, @pInfo, @nlenInfo, @pMap, @nLenMap, @nLenMapStruct, @pErrorCode);
        };
        public static int IPC_SetUPnP(void* @pHandle, void* @pInfo, int @nlenInfo, void* @pMap, int @nLenMap, int* @nLenMapStruct, uint* @pErrorCode)
        {
            return IPC_SetUPnP_fptr(@pHandle, @pInfo, @nlenInfo, @pMap, @nLenMap, @nLenMapStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetUserInfo_delegate(void* @pHandle, void* @pParam, int @nLenStruct, uint* @pErrorCode);
        private static IPC_SetUserInfo_delegate IPC_SetUserInfo_fptr = (void* @pHandle, void* @pParam, int @nLenStruct, uint* @pErrorCode) =>
        {
            IPC_SetUserInfo_fptr = GetFunctionDelegate<IPC_SetUserInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetUserInfo");
            if (IPC_SetUserInfo_fptr == null)
            {
                IPC_SetUserInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetUserInfo is not supported on this platform.");
                };
            }
            return IPC_SetUserInfo_fptr(@pHandle, @pParam, @nLenStruct, @pErrorCode);
        };
        public static int IPC_SetUserInfo(void* @pHandle, void* @pParam, int @nLenStruct, uint* @pErrorCode)
        {
            return IPC_SetUserInfo_fptr(@pHandle, @pParam, @nLenStruct, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVideoEnc_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVideoEnc_delegate IPC_SetVideoEnc_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVideoEnc_fptr = GetFunctionDelegate<IPC_SetVideoEnc_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVideoEnc");
            if (IPC_SetVideoEnc_fptr == null)
            {
                IPC_SetVideoEnc_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVideoEnc is not supported on this platform.");
                };
            }
            return IPC_SetVideoEnc_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVideoEnc(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVideoEnc_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVideoEncCut_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVideoEncCut_delegate IPC_SetVideoEncCut_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVideoEncCut_fptr = GetFunctionDelegate<IPC_SetVideoEncCut_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVideoEncCut");
            if (IPC_SetVideoEncCut_fptr == null)
            {
                IPC_SetVideoEncCut_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVideoEncCut is not supported on this platform.");
                };
            }
            return IPC_SetVideoEncCut_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVideoEncCut(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVideoEncCut_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVideoRoi_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVideoRoi_delegate IPC_SetVideoRoi_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVideoRoi_fptr = GetFunctionDelegate<IPC_SetVideoRoi_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVideoRoi");
            if (IPC_SetVideoRoi_fptr == null)
            {
                IPC_SetVideoRoi_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVideoRoi is not supported on this platform.");
                };
            }
            return IPC_SetVideoRoi_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVideoRoi(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVideoRoi_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVideoShield_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVideoShield_delegate IPC_SetVideoShield_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVideoShield_fptr = GetFunctionDelegate<IPC_SetVideoShield_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVideoShield");
            if (IPC_SetVideoShield_fptr == null)
            {
                IPC_SetVideoShield_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVideoShield is not supported on this platform.");
                };
            }
            return IPC_SetVideoShield_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVideoShield(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVideoShield_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVideoVolume_RTCP_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVideoVolume_RTCP_delegate IPC_SetVideoVolume_RTCP_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVideoVolume_RTCP_fptr = GetFunctionDelegate<IPC_SetVideoVolume_RTCP_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVideoVolume_RTCP");
            if (IPC_SetVideoVolume_RTCP_fptr == null)
            {
                IPC_SetVideoVolume_RTCP_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVideoVolume_RTCP is not supported on this platform.");
                };
            }
            return IPC_SetVideoVolume_RTCP_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVideoVolume_RTCP(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVideoVolume_RTCP_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVirtualFocus_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVirtualFocus_delegate IPC_SetVirtualFocus_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVirtualFocus_fptr = GetFunctionDelegate<IPC_SetVirtualFocus_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVirtualFocus");
            if (IPC_SetVirtualFocus_fptr == null)
            {
                IPC_SetVirtualFocus_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVirtualFocus is not supported on this platform.");
                };
            }
            return IPC_SetVirtualFocus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVirtualFocus(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVirtualFocus_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetVsip_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetVsip_delegate IPC_SetVsip_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetVsip_fptr = GetFunctionDelegate<IPC_SetVsip_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetVsip");
            if (IPC_SetVsip_fptr == null)
            {
                IPC_SetVsip_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetVsip is not supported on this platform.");
                };
            }
            return IPC_SetVsip_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetVsip(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetVsip_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetWarningLine_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetWarningLine_delegate IPC_SetWarningLine_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetWarningLine_fptr = GetFunctionDelegate<IPC_SetWarningLine_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetWarningLine");
            if (IPC_SetWarningLine_fptr == null)
            {
                IPC_SetWarningLine_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetWarningLine is not supported on this platform.");
                };
            }
            return IPC_SetWarningLine_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetWarningLine(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetWarningLine_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetWDR_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetWDR_delegate IPC_SetWDR_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetWDR_fptr = GetFunctionDelegate<IPC_SetWDR_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetWDR");
            if (IPC_SetWDR_fptr == null)
            {
                IPC_SetWDR_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetWDR is not supported on this platform.");
                };
            }
            return IPC_SetWDR_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetWDR(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetWDR_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetWhiteBlance_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetWhiteBlance_delegate IPC_SetWhiteBlance_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetWhiteBlance_fptr = GetFunctionDelegate<IPC_SetWhiteBlance_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetWhiteBlance");
            if (IPC_SetWhiteBlance_fptr == null)
            {
                IPC_SetWhiteBlance_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetWhiteBlance is not supported on this platform.");
                };
            }
            return IPC_SetWhiteBlance_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetWhiteBlance(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetWhiteBlance_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetWifiProbe_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetWifiProbe_delegate IPC_SetWifiProbe_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetWifiProbe_fptr = GetFunctionDelegate<IPC_SetWifiProbe_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetWifiProbe");
            if (IPC_SetWifiProbe_fptr == null)
            {
                IPC_SetWifiProbe_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetWifiProbe is not supported on this platform.");
                };
            }
            return IPC_SetWifiProbe_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetWifiProbe(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetWifiProbe_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SetWlanInfo_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SetWlanInfo_delegate IPC_SetWlanInfo_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SetWlanInfo_fptr = GetFunctionDelegate<IPC_SetWlanInfo_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SetWlanInfo");
            if (IPC_SetWlanInfo_fptr == null)
            {
                IPC_SetWlanInfo_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SetWlanInfo is not supported on this platform.");
                };
            }
            return IPC_SetWlanInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SetWlanInfo(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SetWlanInfo_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_StartRealPlay_delegate(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_StartRealPlay_delegate IPC_StartRealPlay_fptr = (void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_StartRealPlay_fptr = GetFunctionDelegate<IPC_StartRealPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_StartRealPlay");
            if (IPC_StartRealPlay_fptr == null)
            {
                IPC_StartRealPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_StartRealPlay is not supported on this platform.");
                };
            }
            return IPC_StartRealPlay_fptr(@pHandle, @eType, @pParam, @nLen, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static uint IPC_StartRealPlay(void* @pHandle, emPlayVideoType @eType, void* @pParam, int @nLen, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_StartRealPlay_fptr(@pHandle, @eType, @pParam, @nLen, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_StartRecordPlay_delegate(void* @pHandle, void* @pParam, int @nParamLen, void* @pDataOut, int @nDataLen, bool @bDec, bool @bNoStream, uint* @pErrorCode);
        private static IPC_StartRecordPlay_delegate IPC_StartRecordPlay_fptr = (void* @pHandle, void* @pParam, int @nParamLen, void* @pDataOut, int @nDataLen, bool @bDec, bool @bNoStream, uint* @pErrorCode) =>
        {
            IPC_StartRecordPlay_fptr = GetFunctionDelegate<IPC_StartRecordPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_StartRecordPlay");
            if (IPC_StartRecordPlay_fptr == null)
            {
                IPC_StartRecordPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_StartRecordPlay is not supported on this platform.");
                };
            }
            return IPC_StartRecordPlay_fptr(@pHandle, @pParam, @nParamLen, @pDataOut, @nDataLen, @bDec, @bNoStream, @pErrorCode);
        };
        public static uint IPC_StartRecordPlay(void* @pHandle, void* @pParam, int @nParamLen, void* @pDataOut, int @nDataLen, bool @bDec, bool @bNoStream, uint* @pErrorCode)
        {
            return IPC_StartRecordPlay_fptr(@pHandle, @pParam, @nParamLen, @pDataOut, @nDataLen, @bDec, @bNoStream, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate uint IPC_StartVoiceCall_delegate(void* @pHandle, emTransType @eTranstype, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode);
        private static IPC_StartVoiceCall_delegate IPC_StartVoiceCall_fptr = (void* @pHandle, emTransType @eTranstype, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode) =>
        {
            IPC_StartVoiceCall_fptr = GetFunctionDelegate<IPC_StartVoiceCall_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_StartVoiceCall");
            if (IPC_StartVoiceCall_fptr == null)
            {
                IPC_StartVoiceCall_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_StartVoiceCall is not supported on this platform.");
                };
            }
            return IPC_StartVoiceCall_fptr(@pHandle, @eTranstype, @pInfoOut, @nLenInfo, @pErrorCode);
        };
        public static uint IPC_StartVoiceCall(void* @pHandle, emTransType @eTranstype, void* @pInfoOut, int* @nLenInfo, uint* @pErrorCode)
        {
            return IPC_StartVoiceCall_fptr(@pHandle, @eTranstype, @pInfoOut, @nLenInfo, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_StopRealPlay_delegate(void* @pHandle, emPlayVideoType @eType, uint @dwPlayID, uint* @pErrorCode);
        private static IPC_StopRealPlay_delegate IPC_StopRealPlay_fptr = (void* @pHandle, emPlayVideoType @eType, uint @dwPlayID, uint* @pErrorCode) =>
        {
            IPC_StopRealPlay_fptr = GetFunctionDelegate<IPC_StopRealPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_StopRealPlay");
            if (IPC_StopRealPlay_fptr == null)
            {
                IPC_StopRealPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_StopRealPlay is not supported on this platform.");
                };
            }
            return IPC_StopRealPlay_fptr(@pHandle, @eType, @dwPlayID, @pErrorCode);
        };
        public static int IPC_StopRealPlay(void* @pHandle, emPlayVideoType @eType, uint @dwPlayID, uint* @pErrorCode)
        {
            return IPC_StopRealPlay_fptr(@pHandle, @eType, @dwPlayID, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_StopRecordPlay_delegate(void* @pHandle, uint @dwPlayID, uint* @pErrorCode);
        private static IPC_StopRecordPlay_delegate IPC_StopRecordPlay_fptr = (void* @pHandle, uint @dwPlayID, uint* @pErrorCode) =>
        {
            IPC_StopRecordPlay_fptr = GetFunctionDelegate<IPC_StopRecordPlay_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_StopRecordPlay");
            if (IPC_StopRecordPlay_fptr == null)
            {
                IPC_StopRecordPlay_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_StopRecordPlay is not supported on this platform.");
                };
            }
            return IPC_StopRecordPlay_fptr(@pHandle, @dwPlayID, @pErrorCode);
        };
        public static int IPC_StopRecordPlay(void* @pHandle, uint @dwPlayID, uint* @pErrorCode)
        {
            return IPC_StopRecordPlay_fptr(@pHandle, @dwPlayID, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_StopVoiceCall_delegate(void* @pHandle, uint @dwVoiceCallId, uint* @pErrorCode);
        private static IPC_StopVoiceCall_delegate IPC_StopVoiceCall_fptr = (void* @pHandle, uint @dwVoiceCallId, uint* @pErrorCode) =>
        {
            IPC_StopVoiceCall_fptr = GetFunctionDelegate<IPC_StopVoiceCall_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_StopVoiceCall");
            if (IPC_StopVoiceCall_fptr == null)
            {
                IPC_StopVoiceCall_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_StopVoiceCall is not supported on this platform.");
                };
            }
            return IPC_StopVoiceCall_fptr(@pHandle, @dwVoiceCallId, @pErrorCode);
        };
        public static int IPC_StopVoiceCall(void* @pHandle, uint @dwVoiceCallId, uint* @pErrorCode)
        {
            return IPC_StopVoiceCall_fptr(@pHandle, @dwVoiceCallId, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SystemReboot_delegate(void* @pHandle, uint* @pErrorCode);
        private static IPC_SystemReboot_delegate IPC_SystemReboot_fptr = (void* @pHandle, uint* @pErrorCode) =>
        {
            IPC_SystemReboot_fptr = GetFunctionDelegate<IPC_SystemReboot_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SystemReboot");
            if (IPC_SystemReboot_fptr == null)
            {
                IPC_SystemReboot_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SystemReboot is not supported on this platform.");
                };
            }
            return IPC_SystemReboot_fptr(@pHandle, @pErrorCode);
        };
        public static int IPC_SystemReboot(void* @pHandle, uint* @pErrorCode)
        {
            return IPC_SystemReboot_fptr(@pHandle, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SysUpload_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SysUpload_delegate IPC_SysUpload_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SysUpload_fptr = GetFunctionDelegate<IPC_SysUpload_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SysUpload");
            if (IPC_SysUpload_fptr == null)
            {
                IPC_SysUpload_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SysUpload is not supported on this platform.");
                };
            }
            return IPC_SysUpload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SysUpload(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SysUpload_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_SysUploadState_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_SysUploadState_delegate IPC_SysUploadState_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_SysUploadState_fptr = GetFunctionDelegate<IPC_SysUploadState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_SysUploadState");
            if (IPC_SysUploadState_fptr == null)
            {
                IPC_SysUploadState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_SysUploadState is not supported on this platform.");
                };
            }
            return IPC_SysUploadState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_SysUploadState(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_SysUploadState_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_UpdateUser_delegate(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode);
        private static IPC_UpdateUser_delegate IPC_UpdateUser_fptr = (void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode) =>
        {
            IPC_UpdateUser_fptr = GetFunctionDelegate<IPC_UpdateUser_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_UpdateUser");
            if (IPC_UpdateUser_fptr == null)
            {
                IPC_UpdateUser_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_UpdateUser is not supported on this platform.");
                };
            }
            return IPC_UpdateUser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        };
        public static int IPC_UpdateUser(void* @pHandle, void* @pParam, int @nLen, uint* @pErrorCode)
        {
            return IPC_UpdateUser_fptr(@pHandle, @pParam, @nLen, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_UserActive_delegate(uint @dwIP, ushort @wPort, void* @pParam, uint* @pErrorCode);
        private static IPC_UserActive_delegate IPC_UserActive_fptr = (uint @dwIP, ushort @wPort, void* @pParam, uint* @pErrorCode) =>
        {
            IPC_UserActive_fptr = GetFunctionDelegate<IPC_UserActive_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_UserActive");
            if (IPC_UserActive_fptr == null)
            {
                IPC_UserActive_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_UserActive is not supported on this platform.");
                };
            }
            return IPC_UserActive_fptr(@dwIP, @wPort, @pParam, @pErrorCode);
        };
        public static int IPC_UserActive(uint @dwIP, ushort @wPort, void* @pParam, uint* @pErrorCode)
        {
            return IPC_UserActive_fptr(@dwIP, @wPort, @pParam, @pErrorCode);
        }
        
        
        [UnmanagedFunctionPointer(CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
        private delegate int IPC_VoiceCallState_delegate(void* @pHandle, void* @pInfoOut, int @nOutInfo, uint* @pErrorCode);
        private static IPC_VoiceCallState_delegate IPC_VoiceCallState_fptr = (void* @pHandle, void* @pInfoOut, int @nOutInfo, uint* @pErrorCode) =>
        {
            IPC_VoiceCallState_fptr = GetFunctionDelegate<IPC_VoiceCallState_delegate>(GetOrLoadLibrary("ipcsdk"), "IPC_VoiceCallState");
            if (IPC_VoiceCallState_fptr == null)
            {
                IPC_VoiceCallState_fptr = delegate 
                {
                    throw new PlatformNotSupportedException("IPC_VoiceCallState is not supported on this platform.");
                };
            }
            return IPC_VoiceCallState_fptr(@pHandle, @pInfoOut, @nOutInfo, @pErrorCode);
        };
        public static int IPC_VoiceCallState(void* @pHandle, void* @pInfoOut, int @nOutInfo, uint* @pErrorCode)
        {
            return IPC_VoiceCallState_fptr(@pHandle, @pInfoOut, @nOutInfo, @pErrorCode);
        }
        
        
    }
}

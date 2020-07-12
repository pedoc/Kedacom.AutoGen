#include "stdafx.h"
#include "rpctrldll_c.h"
#include <windows.h>

#define MEDIARCV_NOFUN						 (2)    // 没有找到SDKDLL对应接口


HINSTANCE g_hRpctrlDllInst = NULL;
#define PARAM 
#define PARAM1(p1)  p1
#define PARAM2(p1, p2) p1, p2
#define PARAM3(p1, p2, p3)  p1, p2, p3

#define LOADDLLFUN(fun, funname, prm)  						       \
{										 							\
	fun _pFun = NULL;					 							\
	if (g_hRpctrlDllInst != NULL)				 							\
{																\
	_pFun = (fun)::GetProcAddress(g_hRpctrlDllInst, funname);			\
}																\
	if (_pFun == NULL)												\
{																\
	return FALSE;												\
}																\
	\
	return _pFun(prm);												\
}


u16 IPC_RpInit(TRPInitParam *ptRPInitParam, TSysGlobalParam *ptRPSysParam)
{
	char szFilePath[MAX_PATH];
	GetModuleFileNameA(NULL, szFilePath, MAX_PATH);
	char* lpszEnd = strrchr(szFilePath, '\\');
	*(lpszEnd+1) = 0;
	strcat(szFilePath, "ipcrpctrl.dll");

	g_hRpctrlDllInst= ::LoadLibraryA(szFilePath);
	if (NULL == g_hRpctrlDllInst)
	{
		return MEDIARCV_NOFUN;
	}

	LOADDLLFUN(IPCRpInit, "IPC_RpInit", PARAM2(ptRPInitParam, ptRPSysParam));
}

u16 IPC_RpFtpRcvCreate(TNetAddr &tLocalAddr, u32 *pdwSsid)
{
	LOADDLLFUN(IPCRpFtpRcvCreate, "IPC_RpFtpRcvCreate", PARAM2(tLocalAddr, pdwSsid));
}

u16 IPC_RpFtpStartRcv(TFtpUdpRcvParam &tFtpRcvParam, u32 dwSsid, u32 dwNatIntvl)
{
	LOADDLLFUN(IPCRpFtpStartRcv, "IPC_RpFtpStartRcv", PARAM3(tFtpRcvParam, dwSsid,dwNatIntvl));
}

u16 IPC_RpFtpStopRcv(u32 dwSsid)
{
	LOADDLLFUN(IPCRpFtpStopRcv, "IPC_RpFtpStopRcv", PARAM1(dwSsid));
}

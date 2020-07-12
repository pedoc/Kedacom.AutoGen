#include "stdafx.h"
#include "mediaportmgr_c.h"

// 库句柄
HINSTANCE m_hPortDll = NULL;

// 载入dll函数接口的宏，无参
#define LOADDLLFUN(btrue, fun, funname);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun();\
	else\
	pFun();\
}\
}

// 载入dll函数接口的宏，参1
#define LOADDLLFUN1(btrue, fun, funname, p1);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1);\
	else\
	pFun(p1);\
}\
}

// 载入dll函数接口的宏，参2
#define LOADDLLFUN2(btrue, fun, funname, p1, p2);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2);\
	else\
	pFun(p1, p2);\
}\
}


// 载入dll函数接口的宏，参3
#define LOADDLLFUN3(btrue, fun, funname, p1, p2, p3);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3);\
	else\
	pFun(p1, p2, p3);\
}\
}

// 载入dll函数接口的宏，参4
#define LOADDLLFUN4(btrue, fun, funname, p1, p2, p3,p4);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4);\
	else\
	pFun(p1, p2, p3,p4);\
}\
}

// 载入dll函数接口的宏，参5
#define LOADDLLFUN5(btrue, fun, funname, p1, p2, p3,p4,p5);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5);\
	else\
	pFun(p1, p2, p3,p4,p5);\
}\
}

// 载入dll函数接口的宏，参6
#define LOADDLLFUN6(btrue, fun, funname, p1, p2, p3, p4, p5, p6);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6);\
	else\
	pFun(p1, p2, p3,p4,p5, p6);\
}\
}

// 载入dll函数接口的宏，参7
#define LOADDLLFUN7(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6, p7);\
	else\
	pFun(p1, p2, p3,p4,p5, p6, p7);\
}\
}

// 载入dll函数接口的宏，参8
#define LOADDLLFUN8(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7,p8);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6, p7,p8);\
	else\
	pFun(p1, p2, p3,p4,p5, p6, p7,p8);\
}\
}

// 载入dll函数接口的宏，参9
#define LOADDLLFUN9(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7, p8, p9);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9);\
	else\
	pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9);\
}\
}

// 载入dll函数接口的宏，参11
#define LOADDLLFUN11(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9,p10, p11);\
	else\
	pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9,p10, p11);\
}\
}

// 载入dll函数接口的宏，参12
#define LOADDLLFUN12(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);\
{\
	fun pFun = NULL;\
	if (m_hPortDll != NULL ) \
{\
	pFun = (fun)::GetProcAddress(m_hPortDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return ERR_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9,p10, p11, p12);\
	else\
	pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9,p10, p11, p12);\
}\
}

MEDIAPORT_API s32 CDECL PMGR_InitPortMgr()
{
	char szFilePath[MAX_PATH];
	GetModuleFileNameA(NULL, szFilePath, MAX_PATH);
	char* lpszEnd = strrchr(szFilePath, '\\');
	*(lpszEnd+1) = 0;
	strcat(szFilePath, "mediaportmgr.dll");

	m_hPortDll= ::LoadLibraryA(szFilePath);
	if (NULL == m_hPortDll)
	{
		return MEDIARCV_NOFUN;
	}

	typedef  s32  (__cdecl* _PMGR_InitPortMgr)();
	LOADDLLFUN(true, _PMGR_InitPortMgr, "PMGR_InitPortMgr");

	return MEDIARCV_NOFUN;
}

MEDIAPORT_API s32 CDECL PMGR_UnInitPortMgr()
{
	if (m_hPortDll != NULL)
	{
		typedef  s32  (__cdecl* _PMGR_UnInitPortMgr)();
		LOADDLLFUN(true, _PMGR_UnInitPortMgr, "PMGR_UnInitPortMgr");
	}
}


MEDIAPORT_API s32 CDECL PMGR_GetLocalIp(unsigned long &dwLocalIp, unsigned long dwRemoteIp, unsigned short wRemotePort)
{
	if (m_hPortDll != NULL)
	{
		typedef  s32  (__cdecl* _PMGR_GetLocalIp)(unsigned long &, unsigned long , unsigned short);
		LOADDLLFUN3(true, _PMGR_GetLocalIp, "PMGR_GetLocalIp", dwLocalIp, dwRemoteIp, wRemotePort);
	}
}


MEDIAPORT_API s32 PMGR_GetMediaPort(unsigned short& wVideoPort,unsigned short& wAudioPort,unsigned char videoChan, unsigned long dwStartPort)
{
	if (m_hPortDll != NULL)
	{
		typedef  s32  (__cdecl* _PMGR_GetMediaPort)(unsigned short &, unsigned short &, unsigned char, unsigned long);
		LOADDLLFUN4(true, _PMGR_GetMediaPort, "PMGR_GetMediaPort", wVideoPort, wAudioPort, videoChan, dwStartPort);
	}
}


#include "mediarevsdk_c.h"

#ifdef WIN32
#include "stdafx.h"
#endif

#ifndef WIN32
	#include <dlfcn.h>
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <unistd.h>
#endif

#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

// 库句柄
#ifdef WIN32
HINSTANCE m_hMediaDll = NULL;
#define  PROCADDR GetProcAddress
#else
void* m_hMediaDll = NULL;
#define PROCADDR dlsym
#endif


// 载入dll函数接口的宏，无参
#define LOADDLLFUN(btrue, fun, funname);\
{\
	fun pFun = NULL;\
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
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
	if (m_hMediaDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hMediaDll, funname);\
}\
	if (pFun == NULL)\
{\
	if(btrue)\
	return MEDIARCV_NOFUN;\
}\
	if (pFun != NULL)\
{\
	if(btrue)\
	return pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9,p10, p11, p12);\
	else\
	pFun(p1, p2, p3,p4,p5, p6, p7,p8, p9,p10, p11, p12);\
}\
}

MEDIA_API int CDECL MEDIA_Init(unsigned short wTelnetPort /*= 3500*/, int bOpenTelnet /*= 0*/)
{
#ifdef WIN32
	char szFilePath[MAX_PATH];
	GetModuleFileNameA(NULL, szFilePath, MAX_PATH);
	char* lpszEnd = strrchr(szFilePath, '\\');
	*(lpszEnd+1) = 0;
	strcat(szFilePath, "mediarevsdk.dll");

	m_hMediaDll= ::LoadLibraryA(szFilePath);
	if (NULL == m_hMediaDll)
	{
		return MEDIARCV_NOFUN;
	}
#else
	char buffer[260];  
	getcwd(buffer,260);  
	char* lpszEnd = strrchr(buffer, '\\');
	*(lpszEnd+1) = 0;
	strcat(buffer, "mediarevsdk.so");
	
	m_hMediaDll = dlopen(buffer, RTLD_LAZY|RTLD_GLOBAL);
	if(m_hMediaDll == NULL)
	{
		char* error;
		error = dlerror();
		printf("dlopen is %s\n" , error);
		dlclose(m_hMediaDll);
		return MEDIARCV_NOFUN;		
	}
#endif
	typedef  int  (CDECL* _MEDIA_Init)(unsigned short, int);
	LOADDLLFUN2(true, _MEDIA_Init, "MEDIA_Init", wTelnetPort, bOpenTelnet);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_Release()
{
	if (m_hMediaDll != NULL)
	{
		typedef  int  (CDECL* _IPC_ReleaseDll)();
		LOADDLLFUN(true, _IPC_ReleaseDll, "MEDIA_Release");
#ifdef WIN32		
		if (m_hMediaDll != NULL)
		{
			if(::FreeLibrary(m_hMediaDll) != 0)
			{	
				m_hMediaDll = NULL;
			}
		}	
#else
		if (m_hMediaDll != NULL)
		{
			if(dlclose(m_hMediaDll) == 0)
			{	
				m_hMediaDll = NULL;
			}
		}	
#endif
	}
	return MEDIARCV_NOFUN;
}

MEDIA_API bool CDECL MEDIA_IsInit()
{
	typedef  bool  (CDECL* _MEDIA_IsInit)();
	LOADDLLFUN(true, _MEDIA_IsInit, "MEDIA_IsInit");

	return false;
}

MEDIA_API int CDECL MEDIA_GetMediaId(unsigned long *pdwMediaId)
{
	typedef  int  (CDECL* _MEDIA_GetMediaId)(unsigned long*);
	LOADDLLFUN1(true, _MEDIA_GetMediaId, "MEDIA_GetMediaId", pdwMediaId);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetSwitch(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TSwitchParam tSwitchParam)
{
	typedef  int  (CDECL* _MEDIA_SetSwitch)(unsigned long, unsigned long, unsigned long, TSwitchParam);
	LOADDLLFUN4(true, _MEDIA_SetSwitch, "MEDIA_SetSwitch", dwMediaId, dwPuIp, dwLocalIp, tSwitchParam);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_StopSwitch(unsigned long dwMediaId)
{
	typedef  int  (CDECL* _MEDIA_StopSwitch)(unsigned long);
	LOADDLLFUN1(true, _MEDIA_StopSwitch, "MEDIA_StopSwitch", dwMediaId);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetCallSwitch(unsigned long dwMediaId, unsigned long dwIp, unsigned short wDesPort,  unsigned long dwLocalIp, unsigned short wPort)
{
	typedef  int  (CDECL* _MEDIA_SetCallSwitch)(unsigned long , unsigned short,   unsigned short, unsigned long, unsigned short);
	LOADDLLFUN5(true, _MEDIA_SetCallSwitch, "MEDIA_SetCallSwitch", dwMediaId, dwIp, wDesPort, dwLocalIp, wPort);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_StopCallSwitch(unsigned long dwMediaId)
{
	typedef  int  (CDECL* _MEDIA_StopCallSwitch)(unsigned long);
	LOADDLLFUN1(true, _MEDIA_StopCallSwitch, "MEDIA_StopCallSwitch", dwMediaId);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetRtspSwitch(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TRtspSwitchParam tRtspSwitchParam)
{
	typedef  int  (CDECL* _MEDIA_SetRtspSwitch)(unsigned long,unsigned long,unsigned long,TRtspSwitchParam);
	LOADDLLFUN4(true, _MEDIA_SetRtspSwitch, "MEDIA_SetRtspSwitch", dwMediaId, dwPuIp, dwLocalIp, tRtspSwitchParam);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_StopRtspSwitch(unsigned long dwMediaId)
{
	typedef  int  (CDECL* _MEDIA_StopRtspSwitch)(unsigned long);
	LOADDLLFUN1(true, _MEDIA_StopRtspSwitch, "MEDIA_StopRtspSwitch", dwMediaId);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetDataSend(unsigned long dwMediaId, unsigned long dwDestIp, unsigned long dwPuIp, unsigned long dwLocalIp, TSwitchParam tSwitchParam, TSwitchSendParam tSwitchSendParam)
{
	typedef  int  (CDECL* _MEDIA_SetDataSend)(unsigned long,unsigned long,unsigned long,unsigned long,TSwitchParam, TSwitchSendParam);
	LOADDLLFUN6(true, _MEDIA_SetDataSend, "MEDIA_SetDataSend", dwMediaId, dwDestIp, dwPuIp, dwLocalIp, tSwitchParam, tSwitchSendParam);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_StopDataSend(unsigned long dwMediaId)
{
	typedef  int  (CDECL* _MEDIA_StopDataSend)(unsigned long);
	LOADDLLFUN1(true, _MEDIA_StopDataSend, "MEDIA_StopDataSend", dwMediaId);

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetFrameCallBack(unsigned long dwMediaId, MEDIA_FRAMECBFUN pFun, void *pParam)
{
	typedef  int  (CDECL* _MEDIA_SetFrameCallBack)(unsigned long, MEDIA_FRAMECBFUN, void*);
	_MEDIA_SetFrameCallBack fun = (_MEDIA_SetFrameCallBack)PROCADDR(m_hMediaDll, "MEDIA_SetFrameCallBack");
	{
		fun(dwMediaId, pFun, pParam);
		return MEDIARCV_SUCCESS;
	}

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetAlarmCallBack(unsigned long dwMediaId, MEDIA_ALARM_CB pFun, void *pParam)
{
	typedef  int  (CDECL* _MEDIA_SetAlarmCallBack)(unsigned long, MEDIA_ALARM_CB, void*);
	_MEDIA_SetAlarmCallBack fun = (_MEDIA_SetAlarmCallBack)PROCADDR(m_hMediaDll, "MEDIA_SetAlarmCallBack");
	{
		fun(dwMediaId, pFun, pParam);
		return MEDIARCV_SUCCESS;
	}

	return MEDIARCV_NOFUN;
}

MEDIA_API int CDECL MEDIA_SetRtpToFrame(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TRtspSwitchParam tRtspSwitchParam)
{
	typedef  int  (CDECL* _MEDIA_SetRtpToFrame)(unsigned long, unsigned long, unsigned long, TRtspSwitchParam);
	_MEDIA_SetRtpToFrame fun = (_MEDIA_SetRtpToFrame)PROCADDR(m_hMediaDll, "MEDIA_SetRtpToFrame");
	{
		fun(dwMediaId, dwPuIp, dwLocalIp, tRtspSwitchParam);
		return MEDIARCV_SUCCESS;
	}

	return MEDIARCV_NOFUN;
}


MEDIA_API int CDECL MEDIA_SetRtpData(unsigned long dwMediaId,int nType, void *pBuf, unsigned long dwDatalen)
{
	typedef  int  (CDECL* _MEDIA_SetRtpData)(unsigned long, int, void*, unsigned long);
	_MEDIA_SetRtpData fun = (_MEDIA_SetRtpData)PROCADDR(m_hMediaDll, "MEDIA_SetRtpData");
	{
		fun(dwMediaId,nType, pBuf, dwDatalen);
		return MEDIARCV_SUCCESS;
	}

	return MEDIARCV_NOFUN;
}
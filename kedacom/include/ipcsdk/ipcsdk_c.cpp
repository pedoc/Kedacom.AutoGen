/*****************************************************************************
ģ����  : ipcsdk�������ӿ�ģ��
�ļ���  : ipcsdk.cpp
����ļ�: 
ʵ�ֹ���: ��̬����dll�ӿ�
����    : ���ǿ�
�汾    : KDM-V5.0-R1.0 Copyright (C) 2008 - All Rights Reserved
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��            �汾      �޸���        �߶���      �޸�����
20141117          v1.0      ���ǿ�                    ����
******************************************************************************/
#if defined(WIN32) || defined(_WIN64)
#include <Windows.h>
#else
	#include <dlfcn.h>
	#include <stdio.h>
	#include <stdlib.h>
#endif
#include "ipcsdk_c.h"

#include <map>
#include <string.h>
#include <iterator>

// ����
#if defined(WIN32) || defined(_WIN64)
HINSTANCE m_hSDKDll = NULL;
#define  PROCADDR GetProcAddress
#else
void* m_hSDKDll = NULL;
#define PROCADDR dlsym
#endif


// ����dll�����ӿڵĺ꣬�޲�
#define LOADDLLFUN(btrue, fun, funname);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��1
#define LOADDLLFUN1(btrue, fun, funname, p1);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��2
#define LOADDLLFUN2(btrue, fun, funname, p1, p2);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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


// ����dll�����ӿڵĺ꣬��3
#define LOADDLLFUN3(btrue, fun, funname, p1, p2, p3);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��4
#define LOADDLLFUN4(btrue, fun, funname, p1, p2, p3,p4);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��5
#define LOADDLLFUN5(btrue, fun, funname, p1, p2, p3,p4,p5);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��6
#define LOADDLLFUN6(btrue, fun, funname, p1, p2, p3, p4, p5, p6);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��7
#define LOADDLLFUN7(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��8
#define LOADDLLFUN8(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7,p8);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��9
#define LOADDLLFUN9(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7, p8, p9);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��11
#define LOADDLLFUN11(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

// ����dll�����ӿڵĺ꣬��12
#define LOADDLLFUN12(btrue, fun, funname, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12);\
{\
	fun pFun = NULL;\
	if (m_hSDKDll != NULL ) \
{\
	pFun = (fun)PROCADDR(m_hSDKDll, funname);\
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

/*=================================================================
��������: IPC_InitDll
��    ��: ��ʼ��SDK����Դ
          ȫ�ֵ���һ�μ��ɣ���Ӧ�ó���ʼ������
		  (MFC������winapp�е��ã���̬�⹤���ڿ���ش�����)
����˵��:
			pzDLLName  ��ʼ���Ķ�̬������(��ipcsdk.dll,ipcmedia.dll)
			wTelnetPort      Telnet�˿�(Ĭ��3000)
			bOpenTelnet     �Ƿ���Telnet(Ĭ�ϴ�)
			pErrorCode   	������
����ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_InitDll (char* pzDLLName, short wTelnetPort, bool bOpenTelnet,u32* pErrorCode)
{
#if defined(WIN32) || defined(_WIN64)
	char szFilePath[MAX_PATH];
	GetModuleFileNameA(NULL, szFilePath, MAX_PATH);
	char* lpszEnd = strrchr(szFilePath, '\\');
	*(lpszEnd+1) = 0;
	strcat(szFilePath, pzDLLName);

	if (strcmp(pzDLLName,"ipcsdk.dll") == 0)
	{		
		m_hSDKDll = ::LoadLibraryA(szFilePath);
		if (NULL == m_hSDKDll)
		{
			*pErrorCode = ERR_NODLL;
			return false;
		}
	}

#else	
	if(m_hSDKDll == NULL)
	{
		printf("linux start dlopen \n");
		m_hSDKDll = dlopen(pzDLLName, RTLD_LAZY|RTLD_GLOBAL);
		printf("linux start dlopen m_hSDKDll = %d\n", m_hSDKDll);
		if(m_hSDKDll == NULL)
		{
			char* error;
			error = dlerror();
			printf("dlopen is %s\n" , error);
			return ERR_NODLL;		
		}
	}
#endif
	
	typedef  bool  (* _IPC_InitDll)(short, int, u32*);
	LOADDLLFUN3(false, _IPC_InitDll, "IPC_InitDll",wTelnetPort,bOpenTelnet, pErrorCode);
	return true;
}

/*=================================================================
��������: IPC_ReleaseDll
��    ��: �ͷ�SDK�������Դ
          ��Ӧ�ó����˳�ʱ����
����˵��:pErrorCode   	������
����ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_ReleaseDll(u32* pErrorCode)
{
	if (m_hSDKDll != NULL)
	{
		typedef  bool  (CDECL* _IPC_ReleaseDll)(u32*);
		LOADDLLFUN1(false, _IPC_ReleaseDll, "IPC_ReleaseDll",pErrorCode);
#if defined(WIN32) || defined(_WIN64)		
		if (m_hSDKDll != NULL)
		{
			if(::FreeLibrary(m_hSDKDll) != 0)
			{	
				m_hSDKDll = NULL;
			}
		}
#else
		if (m_hSDKDll != NULL)
		{
			if(dlclose(m_hSDKDll) == 0)
			{	
				m_hSDKDll = NULL;
			}
		}	
#endif		
	}

	return true;
}

/*=================================================================
��������: IPC_Logout
��    ��: �û�ע��ע��
          
����˵��:
		  pHandle       ǰ�˾��
		  pErrorCode   	������
����ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_Logout(void *pHandle, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Logout)(void *, u32*);
	LOADDLLFUN2(TRUE, _IPC_Logout, "IPC_Logout", pHandle,pErrorCode);
	*pErrorCode = ERR_NOFUN;
	return false;
}

IPC_API BOOL32 CDECL IPC_Login(void *pHandle, char* pName, char* pPassword, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Login)(void *, char*, char*, u32* );
	LOADDLLFUN4(TRUE, _IPC_Login, "IPC_Login", pHandle, pName, pPassword,pErrorCode);
	*pErrorCode = ERR_NOFUN;
	return false;
}

IPC_API BOOL32  CDECL IPC_Login_New(void* pLoginInfo, IPC_CHECKLINK_CB fCheckCB,u32* dwHandle, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Login_New)(void*, IPC_CHECKLINK_CB,u32*,u32* );
	LOADDLLFUN4(TRUE, _IPC_Login_New, "IPC_Login_New", pLoginInfo,fCheckCB,dwHandle,pErrorCode);
	*pErrorCode = ERR_NOFUN;
	return false;
}

IPC_API BOOL32 CDECL IPC_CheckConnectLost(u32 dwIp, unsigned short wPort)
{
	typedef  bool  (* _IPC_CheckConnectLost)(u32, unsigned short);
	LOADDLLFUN2(TRUE, _IPC_CheckConnectLost, "IPC_CheckConnectLost", dwIp, wPort);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_CreateHandle
��    ��: �������
          
����˵��:
		 dwIp      ע��IP
		 wPort     ע��˿�
		 pName	   �û���
		 pPassword �û�����

�� �� ֵ: �ɹ������豸���, ʧ�ܷ��ش�����
=================================================================*/
IPC_API u32 CDECL IPC_CreateHandle(u32 dwIP, u16 wPort, char* pName, char* pPassword)
{
	typedef  bool  (CDECL* _IPC_CreateHandle)(u32,  u16, char* , char*);
	LOADDLLFUN4(TRUE, _IPC_CreateHandle, "IPC_CreateHandle", dwIP, wPort, pName, pPassword);
	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetInfoFromHandle
��    ��: ���ݾ����ȡ�豸��Ϣ
          
����˵��:
		 dwHandle      �豸���
		 pParam		   ��������ָ��
		 nLen		   ���ݳ���
		 pErrorCode    ������ָ��

�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetInfoFromHandle(u32 dwHandle, void* pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetInfoFromHandle)(void *, void*, int,u32* );
	LOADDLLFUN4(TRUE, _IPC_GetInfoFromHandle, "IPC_GetInfoFromHandle", &dwHandle, pParam, nLen,pErrorCode);
	*pErrorCode = ERR_NOFUN;
	return false;
}

/*=================================================================
��������: IPC_DestroyHandle()
��    ��: ���پ��
          
����˵��:
		 

�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_DestroyHandle()
{
	typedef  bool  (CDECL* _IPC_DestroyHandle)();
	LOADDLLFUN(TRUE, _IPC_DestroyHandle, "IPC_DestroyHandle");
	return ERR_NOFUN;
}

IPC_API int CDECL IPC_GetVersion(char *pchVer,int nMaxLen)
{
	typedef  bool  (CDECL* _IPC_GetVersion)(char *, int);
	LOADDLLFUN2(TRUE, _IPC_GetVersion, "IPC_GetVersion", pchVer, nMaxLen);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetRecSchedule
		  ��    ��: ��ȡ����ʱ�����
����˵��: pParam, ��������detect, shieldalarm, alarmin, alarmout, exception, recchedule, warningline
	      pTimeArr, TEVENTTIME [],����ʱ������ָ��.
	      nlenTime, ����ʱ�����ݸ���.
	      nLenTimeStruct, ����sizeof(TEVENTTIME)�����ں�������.
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�<eventtype opt=�� detect, shieldalarm, alarmin, alarmout, exception, recchedule, sightchange, warningline��/>
	      <recordtype opt=�� alarm,manual,time,trigger��/>
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetEventTime (void *pHandle, char *pEventType, char *pIndex,void * pTimeArr, int nLenTime ,int nLenTimeStruct , char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetEventTime)(void *, char*, char*,void *, int, int, char*, int&,u32*);
	LOADDLLFUN9(TRUE, _IPC_GetEventTime, "IPC_GetEventTime", pHandle, pEventType,pIndex, pTimeArr, nLenTime, nLenTimeStruct, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetRecSchedule
		  ��    ��: ��ȡ����ʱ�����
����˵��: pParam, ��������detect, shieldalarm, alarmin, alarmout, exception, recchedule, warningline
	      pTimeArr, TEVENTTIME [],����ʱ������ָ��.
	      nlenTime, ����ʱ�����ݸ���.
	      nLenTimeStruct, ����sizeof(TEVENTTIME)�����ں�������.
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetEventTime (void *pHandle, char *pEventType,  char *pIndex,void * pTimeArr, int nLenTime ,int nLenTimeStruct,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetEventTime)(void *, char*,char*, void *, int, int,u32 *);
	LOADDLLFUN7(TRUE, _IPC_SetEventTime, "IPC_SetEventTime", pHandle, pEventType, pIndex, pTimeArr, nLenTime, nLenTimeStruct, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetTrancparent
		  ��    ��: ʹ��͸����ʽͨ�ţ����ݺͻش��Ĳ���Ϊxml�Ľṹ����
����˵��: pHandle		ǰ�˾��
		  szEventType	�¼�����
	      szParamIn		����Ĳ���
	      nLenIn		����Ĳ�������
	      szParamOut	����Ĳ���
	      nLenOut		����Ĳ�������
	      pErrorCode   	������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SendTransData(void *pHandle, char* szEventType, char* szParamIn, int nLenIn, char* szParamOut, int& nLenOut,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SendTransData)(void *, char* , char* , int , char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_SendTransData, "IPC_SendTransData", pHandle, szEventType,szParamIn, nLenIn, szParamOut, nLenOut,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoInfo
��    ��: ��ȡrtp����
����˵��: pParam [in]       ����ṹ�����
		  nLen [in]		    ����ṹ�峤��
		  pInfoOut [out]	����ṹ�����
		  nLenInfo [out]	����ṹ�峤��
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetVideoInfo(void *pHandle, emPlayVideoType eType,void *pParam, int nParamLen, void*pInfoOut,int& nLenInfo, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVideoInfo)(void *, emPlayVideoType,void*, int, void*, int&,u32*);
	LOADDLLFUN7(TRUE, _IPC_GetVideoInfo, "IPC_GetVideoInfo", pHandle,eType,pParam, nParamLen, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}


/*=================================================================
��������: IPC_GetRtspURL
��    ��: ��ȡrtp���������澯Ԫ����
����˵��: pParam [in]       ����ṹ�����
		  nLen [in]		    ����ṹ�峤��
		  pInfoOut [out]	����ṹ�����
		  nLenInfo [out]	����ṹ�峤��
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetRtspUrl(void *pHandle, emPlayVideoType eType,void *pParam, int nParamLen, void*pInfoOut,int& nLenInfo, u32* pErrorCode, int bNoStream)
{
	typedef  bool  (CDECL* _IPC_GetRtspUrl)(void *, emPlayVideoType,void*, int, void*, int&,u32*,int);
	LOADDLLFUN8(TRUE, _IPC_GetRtspUrl, "IPC_GetRtspUrl", pHandle,eType,pParam, nParamLen, pInfoOut, nLenInfo, pErrorCode,bNoStream);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetRtspURLRec
��    ��: ��ȡrtp���������澯Ԫ����
����˵��: pParam [in]       ����ṹ�����
		  nLen [in]		    ����ṹ�峤��
		  pInfoOut [out]	����ṹ�����
		  nLenInfo [out]	����ṹ�峤��
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetRtspUrlRec(void *pHandle, emPlayVideoType eType,void *pParam, int nParamLen, void*pInfoOut,int& nLenInfo, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetRtspUrlRec)(void *, emPlayVideoType,void*, int, void*, int&,u32*);
	LOADDLLFUN7(TRUE, _IPC_GetRtspUrlRec, "IPC_GetRtspUrlRec", pHandle,eType,pParam, nParamLen, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}




/*=================================================================
��������: IPC_SendKeyFrame
��    ��: ����ؼ�֡
����˵��: dwPlayID[in]--TRTCPVIDEOINFO��dwPlayID ���������
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SendKeyFrame(void *pHandle, u32 dwPlayID, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SendKeyFrame)(void *, u32, u32*);
	LOADDLLFUN3(TRUE, _IPC_SendKeyFrame, "IPC_SendKeyFrame", pHandle,dwPlayID,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoVolume_RTCP
��    ��: ��ȡ��Ƶ��Ƶ
����˵��: pInfoOut[out]--TRTCPVIDEOVOLUMEINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetVideoVolume_RTCP(void *pHandle, void *pInfoOut, int nLenInfo, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVideoVolume_RTCP)(void *, void* , int , u32* );
	LOADDLLFUN4(TRUE, _IPC_GetVideoVolume_RTCP, "IPC_GetVideoVolume_RTCP", pHandle, pInfoOut, nLenInfo,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetVideoVolume_RTCP
��    ��: ������Ƶ��Ƶ
����˵��: pInfoOut[out]--TRTCPVIDEOVOLUMEINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetVideoVolume_RTCP(void *pHandle, void* pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVideoVolume_RTCP)(void *, void* , int , u32* );
	LOADDLLFUN4(TRUE, _IPC_SetVideoVolume_RTCP, "IPC_SetVideoVolume_RTCP", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_VoiceCallState
��    ��: �Ƿ�������
����˵��: pInfoOut [out] TRTCPCALLSTATEINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_VoiceCallState (void *pHandle, void* pInfoOut, int nOutInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_CallState_RTCP)(void *,void*, int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_CallState_RTCP, "IPC_CallState_RTCP",pHandle,pInfoOut, nOutInfo,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_StartVoiceCall
��    ��: ��ʼ����
����˵��: pHandle		ǰ�˾��
		  emTransType   ���봫���ʽ
		  pInfoOut[out] TRTCPPREPARECALLINFO
		  pErrorCode   	������
�� �� ֵ: �ɹ����غ���ID, ʧ�ܷ���0��ԭ�����pErrorCode
=================================================================*/
IPC_API u32 CDECL IPC_StartVoiceCall(void *pHandle,emTransType eTranstype, void*pInfoOut,int& nLenInfo,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_StartVoiceCall)(void *, emTransType, void *,int&,u32*);
	LOADDLLFUN5(TRUE, _IPC_StartVoiceCall, "IPC_StartVoiceCall", pHandle, eTranstype,pInfoOut,nLenInfo,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_StopVoiceCall
��    ��: ֹͣ����
����˵��: dwID[in]--TRTCPPREPARECALLINFO��dwID
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_StopVoiceCall(void *pHandle, u32 dwVoiceCallId, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_StopVoiceCall)(void *, u32, u32*);
	LOADDLLFUN3(TRUE, _IPC_StopVoiceCall, "IPC_StopVoiceCall", pHandle, dwVoiceCallId,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_PuSnapShot
��    ��: ǰ���ֶ�ץ��
����˵��: 
		  byStreamId[in]--������(1),������(2),������(3),������(4)
		  pchFileName     �����ͼƬ�ļ�ȫ·��(�ļ�·��),��׺Ϊjpeg
		  pErrorCode      ������
�� �� ֵ: �� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_PuSnapShot(void *pHandle, u8 byStreamId, const char *pchFileName, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PuSnapShot)(void *, u8,const char * ,u32*);
	LOADDLLFUN4(TRUE, _IPC_PuSnapShot, "IPC_PuSnapShot", pHandle, byStreamId,pchFileName,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetPuSnapShotUrl
��    ��: ǰ���ֶ�ץ��
����˵��: 
		  byStreamId[in]--������(1),������(2),������(3),������(4)
		  pImageUrl     ͼƬurl ��СΪ260�ַ�
		  pErrorCode      ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetPuSnapShotUrl(void *pHandle, u8 byStreamId, char *pImageUrl, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPuSnapShotUrl)(void *, u8,char * ,u32*);
	LOADDLLFUN4(TRUE, _IPC_GetPuSnapShotUrl, "IPC_GetPuSnapShotUrl", pHandle, byStreamId,pImageUrl,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetRecMonthInfo
��    ��:	��ȡ����ͼ
����˵��:	pHandle		ǰ�˾��
		    pErrorCode   	������
			nYear       ��
		    nMonth		�·� 
		    pDataOut, 		Array of TRECMONTHINFO;
	        nArrayLenOut, 	���鳤��;
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false, ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetRecMonthInfo(void *pHandle, int nYear,int nMonth, void *pDataOut, int& nArrayLenOut ,u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetRecMonthInfo)(void *, int, int, void*, int&, u32*);
	LOADDLLFUN6(TRUE, _IPC_GetRecMonthInfo, "IPC_GetRecMonthInfo", pHandle, nYear,nMonth,pDataOut,nArrayLenOut,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetRecordData
��    ��:	��ȡ¼������(ͬ��)
����˵��:	pHandle		ǰ�˾��
			pErrorCode   	������
			u32 dwRecId		¼��id��id == 0 ��ʾͬ����id  != 0 ��Ҫ��׼����ȡ�Ľӿ��ﴴ��ID��
			pParam 		    PTRECPARAM;
			pDataOut		Array of PTRECDATA;
			nArrLenOut		¼���������鳤��,�����ʱ���������ĳ���
�� �� ֵ: �ɹ����ػ�ȡ��¼�����ݸ���, ʧ�ܷ���0, ԭ�����pErrorCode;
=================================================================*/
IPC_API u32 CDECL IPC_GetRecordData(void *pHandle, u32 dwRecId, void *pParam, void *pDataOut,int& nArrLenOut,u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetRecordData)(void *, u32, void*, void*, int&,u32*);
	LOADDLLFUN6(TRUE, _IPC_GetRecordData, "IPC_GetRecordData", pHandle, dwRecId,pParam,pDataOut,nArrLenOut,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetRecordNext
��    ��:	��ȡ¼������(�첽)
����˵��:	pHandle		ǰ�˾��
		    pErrorCode   	������
		    u32 dwTaskId		¼��id��id  != 0 ��Ҫ��׼����ȡ�Ľӿ��ﴴ��ID��
		    dwFirstIndex	��ʼ��ȡ����ʼ����λ��
		    pDataOut		Array of PTRECDATA;
	        nArrLenOut		¼���������鳤��
�� �� ֵ: �ɹ����ػ�ȡ��¼�����ݸ���, ʧ�ܷ���0, ԭ�����pErrorCode;
=================================================================*/
IPC_API u32 CDECL IPC_GetRecordNext (void *pHandle, u32 dwTaskId, u32 dwFirstIndex,bool &bFinished,void *pDataOut,int nArrLenOut,u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetRecordNext)(void *, u32, u32,bool&,void*,int,u32*);
	LOADDLLFUN7(TRUE, _IPC_GetRecordNext, "IPC_GetRecordNext", pHandle, dwTaskId,dwFirstIndex,bFinished,pDataOut,nArrLenOut,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_PreLoadRecordList
��    ��:	׼��¼������
����˵��:	pHandle		ǰ�˾��
			pErrorCode   	������
			pParam 		TRECPARAM
			nParamLen		�ṹ��ĳ���
�� �� ֵ: �ɹ����ز�ѯID, ʧ�ܷ���0, ԭ�����pErrorCode;
=================================================================*/
IPC_API u32 CDECL IPC_PreLoadRecordList(void *pHandle, void *pParam, int nParamLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PreLoadRecordList)(void *,void*, int,u32*);
	LOADDLLFUN4(TRUE, _IPC_PreLoadRecordList, "IPC_PreLoadRecordList", pHandle, pParam,nParamLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_StartRecordPlay
��    ��:		��ʼ����
����˵��:		pHandle		ǰ�˾��
				pErrorCode   	������
				pParam		PTRECSTARTPLAYPARAM
				nParamLen	��������ĳ���
				pDataOut		PTRECSTARTPLAYINFO
				nDataLen		����ش����ݳ���
				bDec			�Ƿ����
				bNoStream		�Ƿ�����������Ĭ����������
�� �� ֵ: 	�ɹ����ز���id, ʧ�ܷ���0;
=================================================================*/
IPC_API u32 CDECL IPC_StartRecordPlay(void *pHandle, void *pParam, int nParamLen,void *pDataOut, int nDataLen,bool bDec,bool bNoStream, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_StartRecordPlay)(void *,void*, int,void*,int,bool,bool,u32*);
	LOADDLLFUN8(TRUE, _IPC_StartRecordPlay, "IPC_StartRecordPlay", pHandle, pParam,nParamLen,pDataOut,nDataLen,bDec,bNoStream,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_StopRecordPlay
��    ��:	ֹͣ����
����˵��:	pHandle		ǰ�˾��
			pErrorCode   	������
			dwPlayID		����ID
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_StopRecordPlay(void *pHandle, u32 dwPlayID, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_StopRecordPlay)(void *,u32,u32*);
	LOADDLLFUN3(TRUE, _IPC_StopRecordPlay, "IPC_StopRecordPlay", pHandle, dwPlayID,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_PauseRecordPlay
��    ��:	��ͣ����
����˵��:	pHandle		ǰ�˾��
			pErrorCode  ������
			dwPlayID	����ID
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_PauseRecordPlay(void *pHandle, u32 dwPlayID, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PauseRecordPlay)(void *,u32,u32*);
	LOADDLLFUN3(TRUE, _IPC_PauseRecordPlay, "IPC_PauseRecordPlay", pHandle, dwPlayID,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_ResumeRecordPlay
��    ��:	�ָ�����
����˵��:	pHandle		ǰ�˾��
			pErrorCode  ������
			dwPlayID	����ID
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_ResumeRecordPlay(void *pHandle, u32 dwPlayID, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_ResumeRecordPlay)(void *,u32,u32*);
	LOADDLLFUN3(TRUE, _IPC_ResumeRecordPlay, "IPC_ResumeRecordPlay", pHandle,dwPlayID,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_MoveRecordPlay
��    ��:	����λ���ƶ�
����˵��:	pHandle		ǰ�˾��
			pErrorCode   	������
			dwPlayID		����ID
			pParam		PTTIMEEX
			nParamLen		��������
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_MoveRecordPlay(void *pHandle, u32 dwPlayID, void *pParam, int nParamLen,u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_MoveRecordPlay)(void *,u32, void*,int,u32*);
	LOADDLLFUN5(TRUE, _IPC_MoveRecordPlay, "IPC_MoveRecordPlay", pHandle, dwPlayID,pParam,nParamLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_SetRecordPlayRate
��    ��:	�����ٶȿ���
����˵��:	pHandle			ǰ�˾��
			pErrorCode   	������
			dwPlayID		����ID
			dwPlayRate		emRecPlayRate
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetRecordPlayRate(void *pHandle, u32 dwPlayID,u32 dwPlayRate, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetRecordPlayRate)(void *,u32, u32,u32*);
	LOADDLLFUN4(TRUE, _IPC_SetRecordPlayRate, "IPC_SetRecordPlayRate", pHandle, dwPlayID,dwPlayRate,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: 	IPC_ Getrecplaystate
��    ��:	��ȡ�������
����˵��:	pHandle		ǰ�˾��
			pErrorCode   	������
			dwPlayID		����ID
			pDataOut		PTRECPLAYSTATEINFO
			nDataOut          TRECPLAYSTATEINFO��С
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_Getrecplaystate (void *pHandle, u32 dwPlayID,void* pDataOut, int &nDataOut,u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Getrecplaystate)(void *,u32, void*,int&,u32*);
	LOADDLLFUN5(TRUE, _IPC_Getrecplaystate, "IPC_Getrecplaystate", pHandle, dwPlayID,pDataOut,nDataOut,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: 	IPC_Setrecdownloadspeed
��    ��:	����¼�������ٶ�
����˵��:	pHandle		ǰ�˾��
			pErrorCode   	������
�� �� ֵ: 	�ɹ�����true, ʧ�ܷ���false,������pErrorCode;
=================================================================*/
IPC_API BOOL32 CDECL IPC_Setrecdownloadspeed (void *pHandle,u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Setrecdownloadspeed)(void *,u32*);
	LOADDLLFUN2(TRUE, _IPC_Setrecdownloadspeed, "IPC_Setrecdownloadspeed", pHandle, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetMultiVideoMode
��    ��: ��ȡ������ģʽ����
����˵��: pInfoOut[in]--TMULTIVIDEOMODEINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetMultiVideoMode(void *pHandle, u8 byVideoSource, void *pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetMultiVideoMode)(void *, u8, void*, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetMultiVideoMode, "IPC_GetMultiVideoMode", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetMultiVideoMode
��    ��: ���ö�����ģʽ����
����˵��: pParam[in]--TMULTIVIDEOMODEPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetMultiVideoMode(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetMultiVideoMode)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetMultiVideoMode, "IPC_SetMultiVideoMode", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoEnc
��    ��: ��ȡ��Ƶ�������
����˵��: pInfoOut[in]--TVIDEOENCINFO
		  byVideoSource[in]--��ƵԴID
		  byStreamId[in]--������(1),������(2),������(3),������(4)
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetVideoEnc(void *pHandle, u8 byVideoSource, u8 byStreamId, void *pInfoOut, int &nLenInfo, char* szAssistInfo, int &nAssistLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVideoEnc)(void *,u8, u8, void*, int&, char*, int&, u32 *);
	LOADDLLFUN8(TRUE, _IPC_GetVideoEnc, "IPC_GetVideoEnc", pHandle,byVideoSource, byStreamId, pInfoOut, nLenInfo, szAssistInfo, nAssistLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetVideoEnc
��    ��: ������Ƶ�������
����˵��: pParam[in]--TVIDEOENCPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetVideoEnc(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVideoEnc)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetVideoEnc, "IPC_SetVideoEnc", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}


/*=================================================================
��������: IPC_GetAudioEnc
��    ��: ��ȡ��Ƶ�������
����˵��: pInfoOut[in]--TAUDIOENCINFO
		  byVideoSource[in]--��ƵԴID
		  byStreamId[in]--������(1),������(2),������(3),������(4)
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetAudioEnc(void *pHandle, u8 byVideoSource, u8 byStreamId, void *pInfoOut, int &nLenInfo, char* szAssistInfo, int &nAssistLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAudioEnc)(void *,u8, u8, void*, int&, char*, int&, u32 *);
	LOADDLLFUN8(TRUE, _IPC_GetAudioEnc, "IPC_GetAudioEnc", pHandle,byVideoSource, byStreamId, pInfoOut, nLenInfo, szAssistInfo, nAssistLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetAudioEnc
��    ��: ������Ƶ�������
����˵��: pParam[in]--TAUDIOENCPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetAudioEnc(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAudioEnc)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAudioEnc, "IPC_SetAudioEnc", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API int CDECL IPC_SetAudioEncExt(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAudioEncExt)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAudioEncExt, "IPC_SetAudioEncExt", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetAudioDec
��    ��: ��ȡ��Ƶ�������
����˵��: pInfoOut[in]--TAUDIODECINFO
		  byVideoSource[in]--��ƵԴID
		  byStreamId[in]--������(1),������(2),������(3),������(4)
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetAudioDec(void *pHandle, u8 byVideoSource, u8 byStreamId, void *pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAudioDec)(void *,u8, u8, void*, int&, u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetAudioDec, "IPC_GetAudioDec", pHandle,byVideoSource, byStreamId, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetAudioDec
��    ��: ������Ƶ�������
����˵��: pParam[in]--TAUDIODECPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetAudioDec(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAudioDec)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAudioDec, "IPC_SetAudioDec", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoShield
��    ��: ��ȡͼ���ڱ�
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TVIDEOSHIELDINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetVideoShield(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo,  char* szAssistInfo, int &nAssistLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVideoShield)(void *, u8, void *, int&, char*, int&, u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetVideoShield, "IPC_GetVideoShield", pHandle,byVideoSource, pInfoOut, nLenInfo, szAssistInfo, nAssistLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetVideoShield
��    ��: ����ͼ���ڱ�
����˵��: pParam[in] --TVIDEOSHIELDPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetVideoShield(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVideoShield)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetVideoShield, "IPC_SetVideoShield", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoRoi
��    ��: ��ȡ�����������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TVIDEOROIINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetVideoRoi(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVideoRoi)(void *, u8, void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetVideoRoi, "IPC_GetVideoRoi", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetVideoRoi
��    ��: ���������������
����˵��: pParam[in] --TVIDEOROIPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetVideoRoi(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVideoRoi)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetVideoRoi, "IPC_SetVideoRoi", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoEncCut
��    ��: ��ȡ����ü�
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TVIDEOENCCUTINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetVideoEncCut(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVideoEncCut)(void *, u8, void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetVideoEncCut, "IPC_GetVideoEncCut", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetCheckPointOsd
��    ��: ��ȡosd��Ϣ
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TCHECKPOINTINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetCheckPointOsd(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetCheckPointOsd)(void *, u8, void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetCheckPointOsd, "IPC_GetCheckPointOsd", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetCheckPointOsd
��    ��: ��ȡosd��Ϣ
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TCHECKPOINTPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetCheckPointOsd(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetCheckPointOsd)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetCheckPointOsd, "IPC_SetCheckPointOsd", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetUavTrack
��    ��: �������ܸ��ٿ���
����˵��: pParam[in] --enable
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetUavTrack(void *pHandle, bool pParam,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetUavTrack)(void *, bool, u32 *);
	LOADDLLFUN3(TRUE, _IPC_SetUavTrack, "IPC_SetUavTrack", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetUavTrack
��    ��: ��ȡ���ܸ��ٿ���
����˵��: pParam[in] --enable
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetUavTrack(void *pHandle, bool& pParam, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetUavTrack)(void *, bool&, u32 *);
	LOADDLLFUN3(TRUE, _IPC_GetUavTrack, "IPC_GetUavTrack", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetEventManualSnap
��    ��: ��ȡ�¼�ץ����Ϣ
����˵��:
		  pInfoOut[out] --TMANUALSNAPINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetEventManualSnap(void *pHandle,void* pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetEventManualSnap)(void *, void *, int &, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetEventManualSnap, "IPC_GetEventManualSnap", pHandle, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetEventManualSnap
��    ��: �����¼�ץ����Ϣ
����˵��: pParam[in] --TMANUALSNAPINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetEventManualSnap(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetEventManualSnap)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetEventManualSnap, "IPC_SetEventManualSnap", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetVideoEncCut
��    ��: ���ñ���ü�
����˵��: pParam[in] --TVIDEOENCCUTPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetVideoEncCut(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVideoEncCut)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetVideoEncCut, "IPC_SetVideoEncCut", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetOsdCap
��    ��: ��ȡOSD��������֧��
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TOSDCAPINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetOsdCap(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetOsdCap)(void *, u8, void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetOsdCap, "IPC_GetOsdCap", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetOsd
��    ��: ��ȡOSD����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TOSDINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetOsd(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo, char* szAssistInfo, int &nAssistLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetOsd)(void *, u8, void *, int&, char*, int&, u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetOsd, "IPC_GetOsd", pHandle,byVideoSource, pInfoOut, nLenInfo, szAssistInfo, nAssistLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetOsd
��    ��: ����OSD����
����˵��: pParam[in] --TOSDPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetOsd(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetOsd)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetOsd, "IPC_SetOsd", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetOsdList
��    ��: ���õ���OSD���Բ���
����˵��:  pParam[in] --TOSDLISTPARAM
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetOsdList(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetOsdList)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetOsdList, "IPC_SetOsdList", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetSmartOsdInfo
��    ��: �����̻𱨾���Ϣ
����˵��:  pParam[in] --TOSDSMARTPARAM
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetSmartOsdInfo(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSmartOsdInfo)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSmartOsdInfo, "IPC_SetSmartOsdInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetOsdList
��    ��: ��ȡ����OSD���Բ���
����˵��:byVideoSource[in] --��ƵԴID
		 pInfoOut[out] --TOSDLISTINFO
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetOsdList(void *pHandle, u8 byVideoSource,void *pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetOsdList)(void *, u8, void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetOsdList, "IPC_GetOsdList", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetSmartOsdInfo
��    ��: ��ȡ�̻𱨾���Ϣ
����˵��:byVideoSource[in] --��ƵԴID
		 pInfoOut[out] --TOSDSMARTINFO
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetSmartOsdInfo(void *pHandle, u8 byVideoSource,void *pInfoOut, int &nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSmartOsdInfo)(void *, u8, void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetSmartOsdInfo, "IPC_GetSmartOsdInfo", pHandle,byVideoSource, pInfoOut, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetOsdStateQuery
��    ��: OsdͼƬ�ϴ�״̬��ѯ
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TOSDSTATEINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetOsdStateQuery(void *pHandle, u8 byVideoSource, void* pInfoOut, int &nLenInfo, char* szAssistInfo, int &nAssistLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetOsdStateQuery)(void *, u8, void *, int&, char*, int&, u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetOsdStateQuery, "IPC_GetOsdStateQuery", pHandle,byVideoSource, pInfoOut, nLenInfo, szAssistInfo, nAssistLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetOsdPrepare
��    ��: OsdͼƬ׼���ϴ�
����˵��: pParam[in] --TOSDPREPAREPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetOsdPrepare(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetOsdPrepare)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetOsdPrepare, "IPC_SetOsdPrepare", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetOsdUploadFile
��    ��: OsdͼƬ�ϴ�
����˵��: pParam[in] --TOSDUPLOADFILEPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetOsdUploadFile(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetOsdUploadFile)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetOsdUploadFile, "IPC_SetOsdUploadFile", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_IMG_Def
��    ��: ͼ��ָ�Ĭ��
����˵��: pParam[in] --TIMGDEFPARAM
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_Img_Def(void *pHandle,void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Img_Def)(void *,void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_Img_Def, "IPC_Img_Def",pHandle,pParam,nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetColor
��    ��: ��ȡͼ�񳣹�����
����˵��: byVideoSource[in] --��ƵԴID
		  pParam[out] --TCOLORINFO
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetColor(void *pHandle, u8 byVideoSource, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetColor)(void *, u8, void *, int,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetColor, "IPC_GetColor", pHandle,byVideoSource, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetColor
��    ��: ����ͼ�񳣹�����
����˵��: pParam[in] --TCOLORPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetColor(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetColor)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetColor, "IPC_SetColor",pHandle,  pParam,  nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetFocus
��    ��: ��ȡ�۽�����
����˵��: byVideoSource[in] --��ƵԴID
		  pParam[out] --TFOCUSINFO
		  szAssistInfo[out] --�۽���ѡ����
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetFocus(void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetFocus)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetFocus, "IPC_GetFocus", pHandle,byVideoSource,pParam,nLen, szParamAssist,  nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetFocus
��    ��: ���þ۽�����
����˵��: pParam[in] --TFOCUSPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetFocus (void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetFocus)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetFocus, "IPC_SetFocus", pHandle,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetWhiteBlance
��    ��: ��ȡ��ƽ�����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TWHITEBLANCEINFO
		  szAssistInfo[out] --��ƽ���ѡ����
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetWhiteBlance (void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetWhiteBlance)(void *, u8 ,void *,int ,char* , int ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetWhiteBlance, "IPC_GetWhiteBlance", pHandle,byVideoSource,pParam, nLen, szParamAssist,  nLenAssist,pErrorCode);
	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetWhiteBlance
��    ��: ���ð�ƽ�����
����˵��: pParam[in] --TWHITEBLANCEPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetWhiteBlance (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetWhiteBlance)(void *, void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetWhiteBlance, "IPC_SetWhiteBlance", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetIrcutFilter
��    ��: ��ȡ��ҹģʽ����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TRCUTFILTERINFO
		  szAssistInfo[out] --��ҹģʽ��ѡ����
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetIrcutfilter (void *pHandle, u8 byVideoSource,void *pParam,int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetIrcutFilter)(void *, u8 ,void *,int , char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetIrcutFilter, "IPC_GetIrcutFilter",pHandle, byVideoSource,pParam,nLen, szParamAssist,  nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetIrcutFilter
��    ��: ������ҹģʽ����
����˵��: pParam[in] --TTRCUTFILTERPARAM
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetIrcutfilter (void *pHandle,void *pParam,int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetIrcutFilter)(void *,void *,int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetIrcutFilter, "IPC_SetIrcutFilter", pHandle,pParam,nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetIris
��    ��: ��ȡ��Ȧ����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TIRISINFO
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetIris (void *pHandle, u8 byVideoSource,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetIris)(void *, u8 ,void *,int ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetIris, "IPC_GetIris", pHandle, byVideoSource,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetIris
��    ��: ���ù�Ȧ����
����˵��: pParam[in] --TIRISPARAM
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetIris (void *pHandle,void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetIris)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetIris, "IPC_SetIris", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetShutter
��    ��: ��ȡ���Ų���
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TSHUTTERINFO
		  szAssistInfo[out] --���ſ�ѡ����
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetShutter(void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetShutter)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetShutter, "IPC_GetShutter",pHandle,byVideoSource,pParam,nLen,szParamAssist,nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetSutter
��    ��: ���ÿ��Ų���
����˵��: pParam[in] --TSHUTTERPARAM
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetShutter (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetShutter)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetShutter, "IPC_SetShutter", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetGain
��    ��: ��ȡ�������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TGAININFO
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetGain(void *pHandle, u8 byVideoSource,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetGain)(void *, u8 ,void *,int ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetGain, "IPC_GetGain", pHandle,byVideoSource,pParam,nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetGain
��    ��: �����������
����˵��: pParam[in] --TGAINPARAM
	      pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetGain (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetGain)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetGain, "IPC_SetGain", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetInfrared
��    ��: ��ȡ�������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TINFRAREDINFO
		  szAssistInfo[out] -- ���������ģʽ <contrlmode opt=��close,auto,farlamp,middlelamp,nearlamp,exnearlamp��/>
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API int CDECL IPC_GetInfrared(void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetInfrared)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetInfrared, "IPC_GetInfrared", pHandle,byVideoSource,pParam,nLen,szParamAssist,nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetInfrared
��    ��: ���ú������
����˵��: pParam[in] --TINFRAREDPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API int CDECL IPC_SetInfrared(void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetInfrared)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetInfrared, "IPC_SetInfrared", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetLaser
��    ��: ��ȡ�������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TLASERINFO
		  szAssistInfo[out] --����۹�ģʽ<spotmode opt=��def,littlefacula,bigfaxula,custom1,custom2��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API int CDECL IPC_GetLaser(void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetLaser)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetLaser, "IPC_GetLaser",pHandle,byVideoSource,pParam,nLen,szParamAssist,nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetLaser
��    ��: ���ü������
����˵��: pParam[in] --TLASERPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetLaser (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetLaser)(void *, void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetLaser, "IPC_SetLaser",  pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetCorrido
��    ��: ��ȡ���Ȳ���
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TCORRIDOINFO
		  szAssistInfo[out] --����ģʽ<spotmode opt=��close, left,right��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetCorridorMode (void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetCorridorMode)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetCorridorMode, "IPC_GetCorridorMode", pHandle,byVideoSource,pParam,nLen,szParamAssist,nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetCorrido
��    ��: �������Ȳ���
����˵��: pParam[in] --TCORRIDOPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetCorridorMode (void *pHandle,void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetCorridorMode)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetCorridorMode, "IPC_SetCorridorMode", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetImageMode
��    ��: ��ȡ����ģʽ����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TIMAGEMODEINFO
		  szAssistInfo[out] --����ģʽ<spotmode opt=��close, horizont, vertical, central��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetImageMode (void *pHandle, u8 byVideoSource, void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetImageMode)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetImageMode, "IPC_GetImageMode",  pHandle,byVideoSource,pParam,nLen,szParamAssist,nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetImageMode
��    ��: ���þ������
����˵��: pParam[in] --TIMAGEMODEPARAM
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetImageMode (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetImageMode)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetImageMode, "IPC_SetImageMode", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetNoiseRedece2D
��    ��: ��ȡ2D�������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TNOISEREDUCE2DINFO
		  szAssistInfo[out] --2Dģʽ<spotmode opt=��auto,open,close��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_Get2DDenoise (void *pHandle, u8 byVideoSource, void *pParam, int nLen, char* szAssistInfo, int &nAssistLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Get2DDenoise)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_Get2DDenoise, "IPC_Get2DDenoise", pHandle,byVideoSource,pParam,nLen,szAssistInfo,nAssistLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetNoiseRedece2D
��    ��: ����2D�������
����˵��: pParam[in] --TNOISEREDUCE2DPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_Set2DDenoise (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Set2DDenoise)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_Set2DDenoise, "IPC_Set2DDenoise",pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetNoiseRedece3D
��    ��: ��ȡ3D�������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TNOISEREDUCE3DINFO
		  szAssistInfo[out] --3Dģʽ<spotmode opt=��auto,open,close��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_Get3DDenoise(void *pHandle, u8 byVideoSource,void *pParam, int nLen, char* szAssistInfo, int &nAssistLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Get3DDenoise)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_Get3DDenoise, "IPC_Get3DDenoise",  pHandle,byVideoSource,pParam,nLen,szAssistInfo,nAssistLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetNoiseRedece3D
��    ��: ����3D�������
����˵��: pParam[in] --TNOISEREDUCE3DPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_Set3DDenoise (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Set3DDenoise)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_Set3DDenoise, "IPC_Set3DDenoise", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetLocalEcho
��    ��: ��ȡ���ػ��Բ���
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TLOCALECHOINFO
		  szAssistInfo[out] --ģʽ<spotmode opt=��close, PAL,NTSC,LINE,INTERLEAVE��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetLocalEcho (void *pHandle, u8 byVideoSource, void *pParam, int nLen, char* szAssistInfo, int &nAssistLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetLocalEcho)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetLocalEcho, "IPC_GetLocalEcho",  pHandle,byVideoSource,pParam,nLen,szAssistInfo,nAssistLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetLocalEcho
��    ��: ���ñ��ػ��Բ���
����˵��: pParam[in] --TLOCALECHOPARAM
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetLocalEcho (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetLocalEcho)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetLocalEcho, "IPC_SetLocalEcho",  pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetPowerLineFrequency
��    ��: ��ȡ����˸����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TPOWERLINEFREQUENCYINFO
		  szAssistInfo[out] --ģʽ<spotmode opt=��50hz,60hz,auto��/> 
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetPowerLineFrequency (void *pHandle, u8 byVideoSource,void *pParam, int nLen,  char* szAssistInfo, int &nAssistLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPowerLineFrequency)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetPowerLineFrequency, "IPC_GetPowerLineFrequency",  pHandle,byVideoSource,pParam,nLen,szAssistInfo,nAssistLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetPowerLineFrequency
��    ��: ���÷���˸����
����˵��: pParam[in] --TPOWERLINEFREQUENCYPARAM
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetPowerLineFrequency (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPowerLineFrequency)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPowerLineFrequency, "IPC_SetPowerLineFrequency",  pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}


/*=================================================================
��������: IPC_GetWdr
��    ��: ��ȡ��̬����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TDYNAMICMODEINFO ֻ��nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetWDR(void *pHandle, u8 byVideoSource, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetWDR)(void *, u8, void *, int,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetWDR, "IPC_GetWDR",pHandle, byVideoSource, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetWDR
��    ��: ���ÿ�̬����
����˵��: pParam[in] --TDYNAMICMODEPARAM  szMode[17]Ĭ��Ϊwdr ֻ������nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetWDR (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetWDR)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetWDR, "IPC_SetWDR",pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetHLC
��    ��: ��ȡǿ�����Ʋ���
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TDYNAMICMODEINFO ֻ��nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetHLC(void *pHandle, u8 byVideoSource,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetHLC)(void *, u8, void *, int,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetHLC, "IPC_GetHLC", pHandle, byVideoSource, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetHLC
��    ��: ����ǿ�����Ʋ���
����˵��: pParam[in] --TDYNAMICMODEPARAM  szMode[17]Ĭ��Ϊhlc ֻ������nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetHLC (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetHLC)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetHLC, "IPC_SetHLC", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetFogThrough
��    ��: ��ȡ͸�����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TDYNAMICMODEINFO ֻ��nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetFogThrough (void *pHandle, u8 byVideoSource,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetFogThrough)(void *, u8 ,void *,int ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetFogThrough, "IPC_GetFogThrough", pHandle,  byVideoSource,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetFogThrough
��    ��: ����͸�����
����˵��: pParam[in] --TDYNAMICMODEPARAM  szMode[17]Ĭ��Ϊfogthrough����close ֻ������nLevel��Ч
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetFogThrough (void *pHandle,void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetFogThrough)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetFogThrough, "IPC_SetFogThrough", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetGamma
��    ��: ��ȡGamma����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TDYNAMICMODEINFO ֻ��nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetGamma (void *pHandle, u8 byVideoSource, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetGamma)(void *, u8 ,void *,int ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetGamma, "IPC_GetGamma", pHandle,  byVideoSource,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetGamma
��    ��: ����Gamma����
����˵��: pParam[in] --TDYNAMICMODEPARAM  szMode[17]Ĭ��Ϊgamma��close ֻ������nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetGamma (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetGamma)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetGamma, "IPC_SetGamma", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetSmartIR
��    ��: ��ȡSmartIR����
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TDYNAMICMODEINFO ֻ��nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetSmartIR (void *pHandle, u8 byVideoSource,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSmartIR)(void *, u8 ,void *,int ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetSmartIR, "IPC_GetSmartIR",  pHandle,  byVideoSource,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetSmartIR
��    ��: ����SmartIR����
����˵��: pParam[in] --TDYNAMICMODEPARAM  szMode[17]Ĭ��Ϊsmartir��close ֻ������nLevel��Ч
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetSmartIR (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSmartIR)(void *,void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSmartIR, "IPC_SetSmartIR",  pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetBLC
��    ��: ��ȡ���ⲹ������
����˵��: byVideoSource[in] --��ƵԴID
		  pInfoOut[out] --TDYNAMICMODEINFO ֻ��nLevel��Ч
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetBLC(void *pHandle, u8 byVideoSource,void *pParam,int nLen,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetBlc)(void *, u8 ,void *,int ,char* , int& ,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetBlc, "IPC_GetBlc", pHandle,  byVideoSource,pParam, nLen, szParamAssist,  nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetBLC
��    ��: ���ñ��ⲹ������
����˵��: pParam[in] --TDYNAMICMODEPARAM  szMode[17]Ĭ��Ϊautoblc,regionblc��close ֻ������nLevel��Ч
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetBLC (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetBLC)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetBLC, "IPC_SetBLC", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetFillLight
��    ��: ��ȡ���ⲹ���
����˵��: 
		  pParam[out] --TDFILLLIGHT
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetFillLight (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetFillLight)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetFillLight, "IPC_GetFillLight", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetFillLight
��    ��: ���ú��ⲹ���
����˵��: pParam[in] --TDFILLLIGHT
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetFillLight (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetFillLight)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetFillLight, "IPC_SetFillLight", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetDynPluginState
��    ��: ���ö�̬���״̬
����˵��: pParam[in] --TDDYNMAICPLUGIN
          pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetDynPluginState (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDynPluginState)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetDynPluginState, "IPC_SetDynPluginState", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetDeviceInfo
��    ��: ��ȡ�豸��Ϣ
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetDeviceInfo(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetDeviceInfo)(void *, void *,int,u32*);
	LOADDLLFUN4(TRUE, _IPC_GetDeviceInfo, "IPC_GetDeviceInfo", pHandle,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetDeviceInfo
��    ��: �����豸��Ϣ
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetDeviceInfo(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDeviceInfo)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetDeviceInfo, "IPC_SetDeviceInfo", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetTestToolInfo
��    ��: ���ò��Թ��߻�����Ϣ
����˵��: TTOOLINFO
pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetTestToolInfo (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetTestToolInfo)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetTestToolInfo, "IPC_SetTestToolInfo", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetDevSeqInfo
��    ��: ����devseq��Ϣ
����˵��: TDEVSEQINFO
pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetDevSeqInfo (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDevSeqInfo)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetDevSeqInfo, "IPC_SetDevSeqInfo", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetEepromInfo
��    ��: ����eeprom��Ϣ
����˵��: TEEPROMINFO
pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetEepromInfo (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetEepromInfo)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetEepromInfo, "IPC_SetEepromInfo", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetSystemTime
��    ��: ��ȡϵͳʱ��
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetSystemTime(void *pHandle, void* pParam, int& nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSystemTime)(void *, void *,int&,u32*);
	LOADDLLFUN4(TRUE, _IPC_GetSystemTime, "IPC_GetSystemTime", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetSystemTime
��    ��: ����ϵͳʱ��
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetSystemTime(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSystemTime)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSystemTime, "IPC_SetSystemTime", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetSysTimeSynChronise
��    ��: ����ʱ��ͬ��
����˵��: TSYSTIMEINFO
pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetSysTimeSynChronise(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSysTimeSynChronise)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSysTimeSynChronise, "IPC_SetSysTimeSynChronise", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetTimeAutoEx
��    ��: �����Զ�Уʱ
����˵��: TTIMEAUTOINFOEX
pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetTimeAutoEx(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetTimeAutoEx)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetTimeAutoEx, "IPC_SetTimeAutoEx", pHandle, pParam,nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetTimeAutoEx
��    ��: ��ȡ�Զ�Уʱ
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetTimeAutoEx(void *pHandle, void* pParam, int& nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetTimeAutoEx)(void *, void* , int& ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetTimeAutoEx, "IPC_GetTimeAutoEx", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetTimeAuto
��    ��: �����Զ�Уʱ
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetTimeAuto(void *pHandle, void* pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetTimeAuto)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetTimeAuto, "IPC_SetTimeAuto", pHandle, pParam,nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetTimeAuto
��    ��: ��ȡ�Զ�Уʱ
����˵��: pParam [out] -- ��������ָ��
nLen -- ���ݳ���
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetTimeAuto(void *pHandle, void* pParam, int& nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetTimeAuto)(void *, void* , int& ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetTimeAuto, "IPC_GetTimeAuto", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetDST
��    ��: ��������ʱ
����˵��: TTIMEAUTOINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetDST(void *pHandle, void* pParam, int nLen,u32 *pErrorCode )
{
	typedef  bool  (CDECL* _IPC_SetDST)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetDST, "IPC_SetDST", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetDST
��    ��: ��ȡ����ʱ
����˵��: TTIMEAUTOINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetDST(void *pHandle, void* pParam, int nLen,u32 *pErrorCode  )
{
	typedef  bool  (CDECL* _IPC_GetDST)(void *, void* , int ,u32 * );
	LOADDLLFUN4(TRUE, _IPC_GetDST, "IPC_GetDST", pHandle,pParam,nLen,pErrorCode );

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetRSInfo
��    ��: ��ȡ������Ϣ
����˵��: pParam, PTRSINFO
�˴����ݣ�<addressnum enable="false"><controlprotocol opt="pelcol"  enable="false">
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetRSInfo(void *pHandle, void* ptParam, int nLen, char* szParamAssist, int nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetRSInfo)(void *, void* , int , char* , int ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetRSInfo, "IPC_GetRSInfo", pHandle, ptParam, nLen, szParamAssist,nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetRSInfo
����:���ô���ֹͣ
����˵��: pParam, PTRSINFO
�˴����ݣ�<addressnum enable="false"><controlprotocol opt="pelcol"  enable="false">
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetRSInfo(void *pHandle, void* ptParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetRSInfo)(void *, void* , int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetRSInfo, "IPC_SetRSInfo", pHandle,ptParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_LedFind
����:�򿪹ر�led��
����˵��: pParam, PTLEDINFO;
szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
�˴����ݣ�<speed opt="5s,10s,30s,1m,30m,60m,24h"/>
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_LedFind(void *pHandle, void* ptParam, int nLen, char* szParamAssist, int nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_LedFind)(void *, void* , int , char* , int ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_LedFind, "IPC_LedFind",pHandle, ptParam, nLen, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SystemReboot
����:ϵͳ����
����˵��: szMode, base(�򵥻ָ�������ip)/full(��ȫ�ָ�)
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SystemReboot(void *pHandle,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SystemReboot)(void *,u32 *);
	LOADDLLFUN2(TRUE, _IPC_SystemReboot, "IPC_SystemReboot",pHandle,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_RecoverFactory
����:�豸�ָ�
����˵��: szMode, base(�򵥻ָ�������ip)/full(��ȫ�ָ�)
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_RecoverFactory (void *pHandle, char* szMode,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_RecoverFactory)(void *, char* ,u32 *);
	LOADDLLFUN3(TRUE, _IPC_RecoverFactory, "IPC_RecoverFactory", pHandle, szMode,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_UserActive
����:�û�����(��ȫ�ָ�֮��)
����˵��:
		dwIP         IP(�ָ�֮��)
		wport        �˿�
		pParam       PTUSERACTIVEINFO
		pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_UserActive (u32 dwIP, u16 wPort, void*pParam,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_UserActive)(u32, u16, void* ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_UserActive, "IPC_UserActive",dwIP, wPort, pParam,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_ConfigUpload
����:���������ļ�
����˵��: pParam, PTUPLOADINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_ConfigUpload(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_ConfigUpload)(void *, void *, int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_ConfigUpload, "IPC_ConfigUpload", pHandle, pParam,  nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_ConfigDownload
����:pParam, PTDOWNLOADINFO
����˵��: pParam, PTDOWNLOADINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_ConfigDownload(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_ConfigDownload)(void *, void *, int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_ConfigDownload, "IPC_ConfigDownload", pHandle, pParam,  nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SysUpload
����:ϵͳ����
����˵��: pParam, PTUPLOADINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SysUpload(void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SysUpload)(void *, void *, int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_SysUpload, "IPC_SysUpload", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������:IPC_ SysUploadState
��    ��:����״̬��ѯ
����˵��:pHandle  		ǰ�˾��
		pParam,  		PTUPLOADSTATE;
		pErrorCode   	������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SysUploadState (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SysUploadState)(void *, void *, int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_SysUploadState, "IPC_SysUploadState", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAdvanced 
����:��ȡϵͳ�߼�������Ϣ
����˵��: pParam, PTADVANCEDINFO
szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
�˴����ݣ�<osdpicfont opt=��song,black�� /><mtcfmode opt=��hdr,fps60,stream4,4k,div4,normal,hdsdi enable=true��><aacmode opt=��autolow, normal, low enable=true��>
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAdvanced(void *pHandle, void *pParam, int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAdvanced)(void *, void *, int , char* , int& ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetAdvanced, "IPC_GetAdvanced", pHandle, pParam, nLen, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetAdvanced 
����:����ϵͳ�߼�������Ϣ
����˵��: 	pParam, PTADVANCEDINFO
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAdvanced (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAdvanced)(void *, void *, int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAdvanced, "IPC_SetAdvanced", pHandle,pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetUserInfo
��    ��: ��ȡ�û�Ȩ������
����˵��: pArrUserInfo, �û�Ȩ������TUSERINFO[]
		  nArrLen, ���鳤��
		  nLenStruct,���ݳ���,����sizeof(TUSERINFO).
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetUserInfo (void *pHandle, void *pParam, int &nLen, int& nLenStruct,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetUserInfo)(void *, void *, int&, int&,u32*);
	LOADDLLFUN5(TRUE, _IPC_GetUserInfo, "IPC_GetUserInfo", pHandle, pParam, nLen, nLenStruct,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetUserInfo
��    ��: �����û�Ȩ������
����˵��: pParam, PTUSERINFO
		  nLenStruct,���ݳ���,����sizeof(TUSERINFO)
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetUserInfo (void *pHandle, void *pParam, int nLenStruct,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetUserInfo)(void *, void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetUserInfo, "IPC_SetUserInfo", pHandle, pParam,nLenStruct,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_AddUser
��    ��: �����û�Ȩ������
����˵��: pParam, PTUSERINFO
		  nLen,���ݳ���,����sizeof(TUSERINFO)
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_AddUser (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_AddUser)(void *, void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_AddUser, "IPC_AddUser", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_DelUser
��    ��: �����û�Ȩ������
����˵��: pParam, PTUSERDELINFO
		  nLen,���ݳ���,����sizeof(TUSERDELINFO)
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_DelUser (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_DelUser)(void *, void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_DelUser, "IPC_DelUser", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_UpdateUser
��    ��: �޸��û�
����˵��: pParam, PTUSERUPDATEINFO
		  nLen,���ݳ���,����sizeof(TUSERUPDATEINFO)
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_UpdateUser (void *pHandle, void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_UpdateUser)(void *, void *, int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_UpdateUser, "IPC_UpdateUser", pHandle,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetPowerInfo
��    ��: ��ȡ�û�Ȩ������
����˵��: pArrPowerInfo, �û�Ȩ������TPOWERINFO[]
		  nArrLen, ���鳤��
		  nLenStruct,���ݳ���,����sizeof(TPOWERINFO).
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetPowerInfo (void *pHandle, void *pParam, int nLen, int& nLenStruct,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPowerInfo)(void *, void *, int , int& ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetPowerInfo, "IPC_GetPowerInfo", pHandle, pParam, nLen, nLenStruct,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPowerInfo
��    ��: �����û�Ȩ������
����˵��: pParam, PTPOWERINFO
		  pArrPowerInfo, �û�Ȩ������TPOWERINFO[]
		  nArrLen, ���鳤��
		  nLenStruct,���ݳ���,����sizeof(TPOWERINFO)
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetPowerInfo (void *pHandle, void *pParam, int nLen, int nLenStruct,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPowerInfo)(void *, void *, int , int ,u32 *);
	LOADDLLFUN5(TRUE, _IPC_SetPowerInfo, "IPC_SetPowerInfo", pHandle, pParam,  nLen,  nLenStruct,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetDdns
��    ��: ��ȡDDNS����
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetDdns(void *pHandle,void *pParam/* = NULL*/, int nLen, char* const szParamAssist, int nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetDdns)(void *, void *,int, char* const, u32*);
	LOADDLLFUN5(TRUE, _IPC_GetDdns, "IPC_GetDdns", pHandle, pParam,nLen,szParamAssist, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetDdns
��    ��: ����DDNS����
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetDdns(void *pHandle,void *pParam/* = NULL*/, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDdns)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetDdns, "IPC_SetDdns", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetDdnsState
��    ��: ��ȡDDNS״̬����
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetDdnsState(void *pHandle,void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetDdnsState)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetDdnsState, "IPC_GetDdnsState", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetNetPort
��    ��: ��ȡ�˿ڲ���
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetNetPort(void *pHandle,void *pParam/* = NULL*/, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetNetPort)(void *, void *, int , u32*);
	LOADDLLFUN4(TRUE, _IPC_GetNetPort, "IPC_GetNetPort", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetNetPort
��    ��: ���ö˿ڲ���
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetNetPort(void *pHandle,void *pParam/* = NULL*/, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetNetPort)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetNetPort, "IPC_SetNetPort", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetIpInfo
��    ��: ��ȡIP����
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetIpInfo(void *pHandle,void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetIpInfo)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetIpInfo, "IPC_GetIpInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetIpInfo
��    ��: ����IP����
����˵��: pParam [out] -- ��������ָ��
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetIpInfo(void *pHandle,void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetIpInfo)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetIpInfo, "IPC_SetIpInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetWlanInfo
��    ��: ��ȡWlan����
����˵��: dwHandle      �豸���
		  pParam [out] -- ��������ָ��TWLANINFO
		  nLen -- ���ݳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetWlanInfo(void *pHandle,void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetWlanInfo)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetWlanInfo, "IPC_GetWlanInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetWlanInfo
��    ��: ����Wlan����
����˵��: dwHandle      �豸���
		  pParam [out] -- ��������ָ��TWLANINFO
		  nLen -- ���ݳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetWlanInfo(void *pHandle,void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetWlanInfo)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetWlanInfo, "IPC_SetWlanInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetPPPoE
��    ��: ��ȡPPPoE����
����˵��: pParam [out] -- ��������ָ��TUPNPPORTMAP
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPPPoE(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPPPoE)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetPPPoE, "IPC_GetPPPoE", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetPPPoE
��    ��: ����PPPoE����
����˵��: pParam [out] -- ��������ָ��TUPNPPORTMAP
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPPPoE(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPPPoE)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetPPPoE, "IPC_SetPPPoE", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetQos
��    ��: ��ȡQos����
����˵��: pParam [out] -- ��������ָ��TQOSINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetQos(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetQos)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetQos, "IPC_GetQos", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetQos
��    ��: ����Qos����
����˵��: pParam [out] -- ��������ָ��TQOSINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetQos(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetQos)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetQos, "IPC_SetQos", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}
/*=================================================================
��������: IPC_GetKSnmp
��    ��: ��ȡKSnmp����
����˵��: pParam [out] -- ��������ָ��TKSNMPINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetKSnmp(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetKSnmp)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetKSnmp, "IPC_GetKSnmp", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}
/*=================================================================
��������: IPC_SetKSnmp
��    ��: ����KSnmp����
����˵��: pParam [out] -- ��������ָ��TKSNMPINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetKSnmp(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetKSnmp)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetKSnmp, "IPC_SetKSnmp", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;	
}
/*=================================================================
��������: IPC_Get8021x
		  ��    ��: ��ȡ8021x����
����˵��: pParam, PT8021XINFO
	  szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
	  �˴����ݣ�<protocoltype opt=��eap-tls,eap-ttls,eap-peap,eap-leap,eap-fast,eap-md5��>
				<eapolversion opt= ��1, 2��>
	  �� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
==================================================================*/
IPC_API int CDECL IPC_Get8021x(void *pHandle, void *pParam,  int nLen, char* const szParamAssist, int nLenAssist, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Get8021x)(void *, void *,int, char*const, u32*);
	LOADDLLFUN5(TRUE, _IPC_Get8021x, "IPC_Get8021x", pHandle, pParam,nLen,szParamAssist, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_Set8021x
��    ��: ����802.1x����
����˵��: pParam [out] -- ��������ָ��T8021XINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_Set8021x(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_Set8021x)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_Set8021x, "IPC_Set8021x", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetUPnP
��    ��: ��ȡUPnP����
����˵��: pParamInfo[out] -- TUPNPINFO
		  nlenInfo -- pParamInfo���ݳ���,����sizeof(TUPNPINFO).
		  pParamMap[out] -- �˿�ӳ�������.
		  nlenMap -- �˿�ӳ������ݸ���TUPNPPORTMAP.
		  nLenMapStruct -- ����sizeof(TUPNPPORTMAP)�����ں�������.
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetUPnP (void *pHandle, void * pInfo, int nlenInfo, void * pMap, int nLenMap, int &nLenMapStruct, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetUPnP)(void *, void *,int,void*,int,int&, u32*);
	LOADDLLFUN7(TRUE, _IPC_GetUPnP, "IPC_GetUPnP", pHandle, pInfo,nlenInfo ,pMap, nLenMap,nLenMapStruct, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetUPnP
��    ��: ����UPnP����
����˵��: pParamInfo[out] -- TUPNPINFO
		  nlenInfo -- pParamInfo���ݳ���,����sizeof(TUPNPINFO).
		  pParamMap[out] -- �˿�ӳ�������.
		  nlenMap -- �˿�ӳ������ݸ���TUPNPPORTMAP.
		  nLenMapStruct -- ����sizeof(TUPNPPORTMAP)�����ں�������.
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetUPnP (void *pHandle, void * pInfo, int nlenInfo, void * pMap, int nLenMap, int &nLenMapStruct, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetUPnP)(void *, void *,int,void*,int,int&, u32*);
	LOADDLLFUN7(TRUE, _IPC_SetUPnP, "IPC_SetUPnP", pHandle, pInfo,nlenInfo ,pMap, nLenMap,nLenMapStruct, pErrorCode);

	return ERR_NOFUN;	
}
/*=================================================================
��������: IPC_GetVsip
��    ��: ��ȡVsip����
����˵��: pParam [out] -- ��������ָ��TKVISPINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetVsip(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVsip)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_GetVsip, "IPC_GetVsip", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;	
}
/*=================================================================
��������: IPC_SetVsip
��    ��: ����Vsip����
����˵��: pParam [out] -- ��������ָ��TKVISPINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetVsip(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVsip)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_SetVsip, "IPC_SetVsip", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetOnvif
��    ��: ��ȡOnvif����
����˵��: pParam [out] -- ��������ָ��TONVIFINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetOnvif(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetOnvif)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_GetOnvif, "IPC_GetOnvif", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetOnvif
��    ��: ����Onvif����
����˵��: pParam [out] -- ��������ָ��TONVIFINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetOnvif(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetOnvif)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_SetOnvif, "IPC_SetOnvif", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetDpss
��    ��: ��ȡDpss����
����˵��: dwHandle      �豸���
		  pParam, TDPSSINFO
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetDpss(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetDpss)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetDpss, "IPC_GetDpss", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetDpss
��    ��: ����Dpss����
����˵��: dwHandle      �豸���
		  pParam, TDPSSINFO
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetDpss(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDpss)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetDpss, "IPC_SetDpss", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetAuthMode
��    ��: ��ȡAuthMode����
����˵��: pParam [out] -- ��������ָ��TAUTHMODEINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetAuthMode(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAuthMode)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_GetAuthMode, "IPC_GetAuthMode", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_SetAuthMode
��    ��: ����AuthMode����
����˵��: pParam [out] -- ��������ָ��TAUTHMODEINFO
		  nLen -- ���ݳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetAuthMode(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAuthMode)(void *, void *, u32*);
	LOADDLLFUN3(TRUE, _IPC_SetAuthMode, "IPC_SetAuthMode", pHandle, pParam, pErrorCode);

	return ERR_NOFUN;	
}

/*=================================================================
��������: IPC_GetGB28181
��    ��: ��ȡGB28181����
����˵��: pInfo, PTONVIFINFO
          byPlateid   ע��ƽ̨��(1~16)
	      pEncChnArr TGBENCCHNINFO[] ����ͨ����������ָ��
	      nlenEncChnInfo ����ͨ�������������
	      pAlarmChnArr TGBALARMCHNINFO[] �澯ͨ����������ָ��
	      nlenAlarmChnInfo�澯ͨ�������������
		  szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
		  �˴����ݣ�
		  <expand max="1024" opt="plat_domain,requriusedomain,fromtousedomain,
		  longitude,latitude,reg_retry_span,kplv_timeout_max_time,sdpfuseipc,
		  sdptimeisutc,rtcprtpdiff,alarmspan,catantfusecatarsp">
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetGB28181(void *pHandle, char*byPlateid,void *pInfo,  int nLenInfo, void *pEncChnArr, int& nLenEncChnInfo, void *pAlarmChnArr,  int& nLenAlarmChnInfo,char* const szParamAssist, int nLenAssist, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetGB28181)(void*, char*, void *, int, void*, int&, void*, int&, char*const, int, u32*);
	LOADDLLFUN11(TRUE, _IPC_GetGB28181, "IPC_GetGB28181", pHandle, byPlateid, pInfo, nLenInfo, pEncChnArr, nLenEncChnInfo, pAlarmChnArr, nLenAlarmChnInfo, szParamAssist, nLenAssist, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetGB28181
��    ��: ����GB28181����
����˵��: pInfo, PTONVIFINFO
		  byPlateid   ע��ƽ̨��(1~16)
	      pEncChnArr TGBENCCHNINFO[] ����ͨ����������ָ��
	      nlenEncChnInfo ����ͨ�������������
	      pAlarmChnArr TGBALARMCHNINFO[] �澯ͨ����������ָ��
	      nlenAlarmChnInfo�澯ͨ�������������
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetGB28181(void *pHandle,char*byPlateid, void *pInfo,  int nLenInfo, void *pEncChnArr, int nLenEncChnInfo, void *pAlarmChnArr,  int nLenAlarmChnInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetGB28181)(void *, char*, void *, int, void*, int, void*, int, u32*);
	LOADDLLFUN9(TRUE, _IPC_SetGB28181, "IPC_SetGB28181", pHandle, byPlateid, pInfo, nLenInfo, pEncChnArr, nLenEncChnInfo, pAlarmChnArr, nLenAlarmChnInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetWifiProbe
��    ��: ��ȡwifi̽��
����˵��: pParam, TWIFIPROBEINFO
		  nLen, ���ݳ���,����sizeof(TWIFIPROBEINFO)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetWifiProbe (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetWifiProbe)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetWifiProbe, "IPC_GetWifiProbe", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetWifiProbe
��    ��: ����wifi̽��
����˵��: pParam, TWIFIPROBEINFO
		  nLen, ���ݳ���,����sizeof(TWIFIPROBEINFO)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetWifiProbe (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetWifiProbe)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetWifiProbe, "IPC_SetWifiProbe", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetWifiProbeList
��    ��: ��ȡwifi̽���豸�б�
����˵��: pParam, TWIFIPROBELISTINFO
		  nLen, ���ݳ���,����sizeof(TWIFIPROBELISTINFO)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetWifiProbeList (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetWifiProbeList)(void *, void *, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetWifiProbeList, "IPC_GetWifiProbeList", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetStorageState
		  ��    ��: ��ȡ����״̬
����˵��: pParam, PTSTORAGESTATE
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�
		  <state opt="null,disker,diskrslowish,idel,noformat,formating,identifing">
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetStorageState(void *pHandle,void *pParam,int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetStorageState)(void *,void *,int , char* , int& ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetStorageState, "IPC_GetStorageState", pHandle,pParam,nLen, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetStorageNum
��    ��: ��ȡ���̸���
����˵��: 
	      nLenDisks    ���̸���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetStorageNum (void *pHandle, int &nLenDisks, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetStorageNum)(void *, int& ,u32 *);
	LOADDLLFUN3(TRUE, _IPC_GetStorageNum, "IPC_GetStorageNum", pHandle, nLenDisks,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetStorageMgr
		  ��    ��: ��ȡ�洢�������
����˵��: pInfo, TSTORAGEMANAGER
	      nlenInfo, pInfo���ݳ���,����sizeof(TSTORAGEMANAGER).
	      pDisks, TDISKINFO [],������Ϣ��������ָ��.
	      nLenDisks, ������Ϣ�����ݸ���.
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�<fullmode opt=��stop,over��/>   
		  <!-- req, xs:string --> <state opt="null,disker,diskrslowish,idel,noformat,formating,identifing">
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
 =================================================================*/
IPC_API int CDECL IPC_GetStorageMgr(void *pHandle, void * pInfo, int nLenInfo, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetStorageMgr)(void *, void * , int , char* , int& ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetStorageMgr, "IPC_GetStorageMgr", pHandle,  pInfo,  nLenInfo, szParamAssist,  nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetStorageMgr
		  ��    ��: ���ô洢�������
����˵��: pInfo, TSTORAGEMANAGER
	      nlenInfo, pInfo���ݳ���,����sizeof(TSTORAGEMANAGER).
	      pDisks, TDISKINFO [],������Ϣ��������ָ��.
	      nLenDisks, ������Ϣ�����ݸ���.
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetStorageMgr(void *pHandle, void * pInfo, int nLenInfo, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetStorageMgr)(void *, void * , int , u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetStorageMgr, "IPC_SetStorageMgr", pHandle, pInfo, nLenInfo, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_DiskFomat
		  ��    ��: ���̸�ʽ��
����˵��: pParam, PTSTORAGEFOMAT
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_DiskFomat (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_DiskFomat)(void *, void *,int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_DiskFomat, "IPC_DiskFomat", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetFomatProgress
		  ��    ��: ���̸�ʽ������
����˵��: pParam, PTFOMATSTATE
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetFomatProgress (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetFomatProgress)(void *, void *,int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetFomatProgress, "IPC_GetFomatProgress", pHandle,pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetRecSchedule
		  ��    ��: ��ȡ¼��ƻ�����
����˵��: pParam, PTRECSCHEDULE
	  nlenInfo, pParamInfo���ݳ���,����sizeof(TRECSCHEDULE).
	  szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�<preparetime opt=��none,5,10,15,20,25,30,infinite��/>
	  <delaytime opt=��none,5,10,15,20,25,30,infinite��/>
	  <rectype opt=��main,assist,three��/><esps opt=��es, ps��/><time max= 8 index=1>
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetRecSchedule (void *pHandle, void *pParam,int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetRecSchedule)(void *, void *,int , char* , int& ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetRecSchedule, "IPC_GetRecSchedule", pHandle, pParam, nLen,  szParamAssist,  nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetRecSchedule
		  ��    ��: ����¼��ƻ�����
����˵��: pParam, PTRECSCHEDULE
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetRecSchedule (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetRecSchedule)(void *, void *,int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetRecSchedule, "IPC_SetRecSchedule", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetSnapPicConfig
		  ��    ��: ��ȡǰ��ץ�Ĳ���
����˵��: pParam, PTSNAPPICCONFIG
	      nlen,  pParam���ݳ���,����sizeof(TSNAPPICCONFIG).
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�<type opt=��jpeg, jpg,bmp��/>
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetSnapPicCfg (void *pHandle, void *pParam,int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSnapPicCfg)(void *, void *,int , char* , int& ,u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetSnapPicCfg, "IPC_GetSnapPicCfg",pHandle, pParam, nLen, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetSnapPicConfig
		  ��    ��: ����ǰ��ץ�Ĳ���
����˵��: pParam, PTSNAPPICCONFIG
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetSnapPicCfg (void *pHandle,  void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSnapPicCfg)(void *, void *,int ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSnapPicCfg, "IPC_SetSnapPicCfg", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetSnapTime
��    ��: ��ȡ��ʱץ�ĵ�����
����˵��: pHandle  ǰ�˾��
	      pParam, PTSNAPTIME
	      pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetSnapTime (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSnapTime)(void *, void *,int& ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetSnapTime, "IPC_GetSnapTime", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetSnapTime
��    ��: ���ö�ʱץ�ĵ�����
����˵��: pHandle  ǰ�˾��
	      pParam, PTSNAPTIME
	      pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetSnapTime (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSnapTime)(void *, void *,int& ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSnapTime, "IPC_SetSnapTime", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetSnapTime
��    ��: ��ȡ�¼�ץ�ĵ�����
����˵��: pHandle  ǰ�˾��
	      pParam, PTSNAPEVENT
	      pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetSnapEvent (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSnapEvent)(void *, void *,int& ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetSnapEvent, "IPC_GetSnapEvent", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetSnapTime
��    ��: �����¼�ץ�ĵ�����
����˵��: pHandle  ǰ�˾��
	      pParam, PTSNAPEVENT
	      pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetSnapEvent (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSnapEvent)(void *, void *,int& ,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSnapEvent, "IPC_SetSnapEvent", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetVideoShield
		  ��    ��: ��ȡ�ƶ�������
����˵��: pParam, TDETECTINFO
	      nLen�� TDETECTINFO���ȣ� sizeof(TDETECTINFO);
	      pAreaArr, TDETECTPOINT��Ƶ�ڱ���������;
	      nLenArea����Ƶ�ڱ���������;
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�
		  <allcolor opt="gray,red,yellow,blue,orange,green,transparent,half-transparent,mosaic">
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetDetect(void *pHandle,  void *pParam,int nLen, void *pAreaArr,int nLenArea,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetDetect)(void *, void *, int, void*, int, char*, int&,u32*);
	LOADDLLFUN8(TRUE, _IPC_GetDetect, "IPC_GetDetect", pHandle, pParam, nLen, pAreaArr, nLenArea, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetVideoShield
		  ��    ��: �����ƶ�������
����˵��: pParam, TDETECTINFO
	      nLen�� TDETECTINFO���ȣ� sizeof(TDETECTINFO);
	      pAreaArr, TDETECTPOINT��Ƶ�ڱ���������;
	      nLenArea����Ƶ�ڱ���������;
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetDetect (void *pHandle, void *pParam,int nLen, void *pAreaArr,int nLenArea,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDetect)(void *, void *, int, void*, int,u32 *);
	LOADDLLFUN6(TRUE, _IPC_SetDetect, "IPC_SetDetect", pHandle, pParam, nLen, pAreaArr, nLenArea,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetShieldAlarm
		  ��    ��: ��ȡ�ڵ���������
����˵��: pParam,   TALARMINFO
	      nLen��    TALARMINFO���ȣ� sizeof(TALARMINFO);
	      pAreaArr, TDETECTPOINT��Ƶ�ڱ���������;
	      nLenArea����Ƶ�ڱ���������;
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��	
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetShieldAlarm (void *pHandle,void *pParam,int nLen, void *pAreaArr,int nLenArea,char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetShieldAlarm)(void *, void *, int, void*, int, char*, int&,u32 *);
	LOADDLLFUN8(TRUE, _IPC_GetShieldAlarm, "IPC_GetShieldAlarm",pHandle, pParam, nLen, pAreaArr, nLenArea, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetShieldAlarm
��    ��: �����ڵ���������
����˵��: pParam,   TALARMINFO
	      nLen��    TALARMINFO���ȣ� sizeof(TALARMINFO);
	      pAreaArr, TDETECTPOINT��Ƶ�ڱ���������;
	      nLenArea����Ƶ�ڱ���������;
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetShieldAlarm (void *pHandle,void *pParam,int nLen, void *pAreaArr,int nLenArea,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetShieldAlarm)(void*, void *, int, void*, int, u32*);
	LOADDLLFUN6(TRUE, _IPC_SetShieldAlarm, "IPC_SetShieldAlarm", pHandle, pParam, nLen, pAreaArr, nLenArea,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetWarningLine
��    ��: ��ȡ�����߲���
����˵��: pParam,   TWARNINGLINEINFO
	      nLen��    TWARNINGLINEINFO���ȣ� sizeof(TWARNINGLINEINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetWarningLine (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetWarningLine)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetWarningLine, "IPC_GetWarningLine", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetWarningLine
��    ��: ���þ����߲���
����˵��: pParam,   TWARNINGLINEINFO
	      nLen��    TWARNINGLINEINFO���ȣ� sizeof(TWARNINGLINEINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetWarningLine (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetWarningLine)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetWarningLine, "IPC_SetWarningLine", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAreaDetect
��    ��: ��ȡ�������ֲ���
����˵��: pParam,      TAREADETECTINFO
	      nLen��       TAREADETECTINFO���ȣ� sizeof(TAREADETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAreaDetectEnter (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAreaDetectEnter)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetAreaDetectEnter, "IPC_GetAreaDetectEnter", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAreaDetect
��    ��: �����������ֲ���
����˵��: pParam,      TAREADETECTINFO
	      nLen��       TAREADETECTINFO���ȣ� sizeof(TAREADETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAreaDetectEnter (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAreaDetectEnter)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAreaDetectEnter, "IPC_SetAreaDetectEnter", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAreaDetectEntry
��    ��: ��ȡ����������
����˵��: pParam,      TAREADETECTINFO
	      nLen��       TAREADETECTINFO���ȣ� sizeof(TAREADETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAreaDetectEntry (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAreaDetectEntry)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetAreaDetectEntry, "IPC_GetAreaDetectEntry", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAreaDetectEntry
��    ��: ��������������
����˵��: pParam,      TAREADETECTINFO
	      nLen��       TAREADETECTINFO���ȣ� sizeof(TAREADETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAreaDetectEntry (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAreaDetectEntry)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAreaDetectEntry, "IPC_SetAreaDetectEntry", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAreaDetectExit
��    ��: ��ȡ�����뿪����
����˵��: pParam,      TAREADETECTINFO
	      nLen��       TAREADETECTINFO���ȣ� sizeof(TAREADETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAreaDetectExit (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAreaDetectExit)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetAreaDetectExit, "IPC_GetAreaDetectExit", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAreaDetectExit
��    ��: ���������뿪����
����˵��: pParam,      TAREADETECTINFO
	      nLen��       TAREADETECTINFO���ȣ� sizeof(TAREADETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAreaDetectExit (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAreaDetectExit)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAreaDetectExit, "IPC_SetAreaDetectExit", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetObjectLeft
��    ��: ��ȡ��Ʒ��������
����˵��: pParam,      TOBJECTDETECTINFO
	      nLen��       TOBJECTDETECTINFO���ȣ� sizeof(TOBJECTDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetObjectLeft (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetObjectLeft)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetObjectLeft, "IPC_GetObjectLeft", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetObjectLeft
��    ��: ������Ʒ��������
����˵��: pParam,      TOBJECTDETECTINFO
	      nLen��       TOBJECTDETECTINFO���ȣ� sizeof(TOBJECTDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetObjectLeft (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetObjectLeft)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetObjectLeft, "IPC_SetObjectLeft", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetObjectRemoval
��    ��: ��ȡ��Ʒ��ȡ����
����˵��: pParam,      TOBJECTDETECTINFO
	      nLen��       TOBJECTDETECTINFO���ȣ� sizeof(TOBJECTDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetObjectRemoval (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetObjectRemoval)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetObjectRemoval, "IPC_GetObjectRemoval", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetObjectRemoval
��    ��: ������Ʒ��ȡ����
����˵��: pParam,      TOBJECTDETECTINFO
	      nLen��       TOBJECTDETECTINFO���ȣ� sizeof(TOBJECTDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetObjectRemoval (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetObjectRemoval)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetObjectRemoval, "IPC_SetObjectRemoval", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetPersonAggregate
��    ��: ��ȡ��Ա�ۼ�����
����˵��: pParam,      TPERSONDETECTINFO
	      nLen��       TPERSONDETECTINFO���ȣ� sizeof(TPERSONDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetPersonAggregate (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPersonAggregate)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPersonAggregate, "IPC_GetPersonAggregate", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPersonAggregate
��    ��: ������Ա�ۼ�����
����˵��: pParam,      TPERSONDETECTINFO
	      nLen��       TPERSONDETECTINFO���ȣ� sizeof(TPERSONDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetPersonAggregate (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPersonAggregate)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPersonAggregate, "IPC_SetPersonAggregate", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetVirtualFocus
��    ��: ��ȡ�齹������
����˵��: pParam,      TVIRTUALFOCUSINFO
	      nLen��       TVIRTUALFOCUSINFO���ȣ� sizeof(TVIRTUALFOCUSINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetVirtualFocus (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetVirtualFocus)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetVirtualFocus, "IPC_GetVirtualFocus", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetVirtualFocus
��    ��: �����齹������
����˵��: pParam,      TVIRTUALFOCUSINFO
	      nLen��       TVIRTUALFOCUSINFO���ȣ� sizeof(TVIRTUALFOCUSINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetVirtualFocus (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetVirtualFocus)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetVirtualFocus, "IPC_SetVirtualFocus", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetSightChange
��    ��: ��ȡ�����������
����˵��: pParam,      TSIGHTCHANGEINFO
	      nLen��       TSIGHTCHANGEINFO���ȣ� sizeof(TSIGHTCHANGEINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetSightChange (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetSightChange)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetSightChange, "IPC_GetSightChange", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetSightChange
��    ��: ���ó����������
����˵��: pParam,      TSIGHTCHANGEINFO
	      nLen��       TSIGHTCHANGEINFO���ȣ� sizeof(TSIGHTCHANGEINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetSightChange (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSightChange)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetSightChange, "IPC_SetSightChange", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAudioExcept
��    ��: ��ȡ�����쳣����
����˵��: pParam,      TAUDIOEXCEPTINFO
	      nLen��       TAUDIOEXCEPTINFO���ȣ� sizeof(TAUDIOEXCEPTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAudioExcept (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAudioExcept)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetAudioExcept, "IPC_GetAudioExcept", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAudioExcept
��    ��: ���������쳣����
����˵��: pParam,      TAUDIOEXCEPTINFO
	      nLen��       TAUDIOEXCEPTINFO���ȣ� sizeof(TAUDIOEXCEPTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAudioExcept (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAudioExcept)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAudioExcept, "IPC_SetAudioExcept", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetFaceDetect
��    ��: ��ȡ����������
����˵��: pParam,      TFACEDETECTINFO
	      nLen��       TFACEDETECTINFO���ȣ� sizeof(TFACEDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetFaceDetect (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetFaceDetect)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetFaceDetect, "IPC_GetFaceDetect", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetFaceDetect
��    ��: ��������������
����˵��: pParam,      TFACEDETECTINFO
	      nLen��       TFACEDETECTINFO���ȣ� sizeof(TFACEDETECTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetFaceDetect (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetFaceDetect)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetFaceDetect, "IPC_SetFaceDetect", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAlarmIn
��    ��: ��ȡ�����������
����˵��: pParam,PTALARMININFO
	      nLen�� TALARMININFO���ȣ� sizeof(TALARMININFO);
	      szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
		  nLenAssist, ������Ϣ����
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAlarmIn(void *pHandle, char*pAlmNum, void *pParam,int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAlarmIn)(void *,char* ,void *, int, char*, int&,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetAlarmIn, "IPC_GetAlarmIn", pHandle, pAlmNum,pParam, nLen, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAlarmIn
��    ��: ���ñ����������
����˵��: pParam,PTALARMININFO
	      nLen�� TALARMININFO���ȣ� sizeof(TALARMININFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAlarmIn (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAlarmIn)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAlarmIn, "IPC_SetAlarmIn", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetAlarmOut
��    ��: ��ȡ�����������
����˵��: pParam, PTALARMOUT
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetAlarmOut (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAlarmOut)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetAlarmOut, "IPC_GetAlarmOut", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAlarmOut
��    ��: ���ñ����������
����˵��: pParam, PTALARMOUT
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAlarmOut (void *pHandle,void *pParam, int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAlarmOut)(void *, void *, int,u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAlarmOut, "IPC_SetAlarmOut", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetExceptType
��    ��: ��ȡ�쳣���Ͳ���
����˵��: pParam, PTEXCEPTTYPE
		  nLen�� TEXCEPTTYPE���ȣ� sizeof(TEXCEPTTYPE)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API int CDECL IPC_GetExceptType (void *pHandle, void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetExceptType)(void*, void *, int,u32*);
	LOADDLLFUN4(TRUE, _IPC_GetExceptType, "IPC_GetExceptType", pHandle, pParam, nLen,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetExcpet
��    ��: ��ȡ�쳣���ò���
����˵��: pExceptType  �쳣����
          pParam, PTEXCEPTINFO
		  nLen�� TEXCEPTINFO���ȣ� sizeof(TEXCEPTINFO);
		  szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
		  nLenAssist, ������Ϣ����
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetExcept (void *pHandle, char*pExceptType ,void *pParam,int nLen, char* szParamAssist, int& nLenAssist,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetExcept)(void *, char*, void *, int, char*, int&,u32 *);
	LOADDLLFUN7(TRUE, _IPC_GetExcept, "IPC_GetExcept", pHandle, pExceptType, pParam, nLen, szParamAssist, nLenAssist,pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetExcpet
��    ��: ��ȡ�쳣���ò���
����˵��: pParam, PTEXCEPTINFO
		  nLen�� TEXCEPTINFO���ȣ� sizeof(TEXCEPTINFO);
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetExcept (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetExcept)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetExcept, "IPC_SetExcept", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzMove
		  ��    ��: ����PTZ�ƶ�(��,��,��,��,��λ��ֹͣ)
����˵��: pParam,PTPTZMOVE
		  nLen�� TPTZMOVE���ȣ� sizeof(TPTZMOVE);
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_PtzMove (void *pHandle,void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PtzMove)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_PtzMove, "IPC_PtzMove", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetPtzScan
		  ��    ��: ����PTZѲ��
����˵��: pParam,PTPTZSCAN
		  nLen�� TPTZSCAN���ȣ� sizeof(TPTZSCAN);
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_PtzScan (void *pHandle,void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PtzScan)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_PtzScan, "IPC_PtzScan", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_PtzZoneZoom
��    ��: ����PTZ��������
����˵��: pParam,PTPTZZONEZOOM
		  nLen�� TPTZZONEZOOM���ȣ� sizeof(TPTZZONEZOOM);
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_PtzZoneZoom (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PtzZoneZoom)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_PtzZoneZoom, "IPC_PtzZoneZoom", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_PtzGotoPoint
��    ��: ����PTZ���ж�λ
����˵��: pParam,TPTZGOTOPOINT
		  nLen�� TPTZGOTOPOINT���ȣ� sizeof(TPTZGOTOPOINT);
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_PtzGotoPoint (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PtzGotoPoint)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_PtzGotoPoint, "IPC_PtzGotoPoint", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzWiper
��    ��: ������ˢ����/�ر�
����˵��: pParam,TPTZWIPER
		  nLen�� TPTZWIPER���ȣ� sizeof(TPTZWIPER);
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzWiper (void *pHandle,void *pParam,int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzWiper)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzWiper, "IPC_SetPtzWiper", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetPtzBase
��    ��: ��ȡ��̨��������
����˵��: 
	      pParam, PTPTZBASE
		  nLen�� TPTZBASE�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzBase (void *pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzBase)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzBase, "IPC_GetPtzBase", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ SetPtzBase
		  ��    ��: ������̨��������
����˵��: pParam, PTPTZBASE
	      nLen��TPTZBASE�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzBase (void *pHandle, void *pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzBase)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzBase, "IPC_SetPtzBase", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ IPC_GetPtzMainTain
��    ��: ��ȡ��̨�ϵ�ά������
����˵��: 
	      pParam, PTPTZMAINTAIN
		  nLen�� TPTZMAINTAIN�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzMainTain (void *pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzMainTain)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzMainTain, "IPC_GetPtzMainTain", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ IPC_SetPtzMainTain
		  ��    ��: ������̨�ϵ�ά������
����˵��: pParam, PTPTZMAINTAIN
	      nLen��TPTZMAINTAIN�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzMainTain (void *pHandle, void *pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzMainTain)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzMainTain, "IPC_SetPtzMainTain", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ IPC_SetPtzRefactory
��    ��: ������̨�ָ���������
����˵��: pParam, PTPTZREFACTORY
	      nLen��TPTZREFACTORY�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzRefactory (void *pHandle, void *pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzRefactory)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzRefactory, "IPC_SetPtzRefactory", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetPtzWatchOn
		  ��    ��: ��ȡ��̨�����������
����˵��: 
		  pParam, PTPTZWATCHON
		  nLen�� TPTZWATCHON�ĳ���
		  szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��
		  �˴����ݣ�<mode opt=��hscan,vscan,preset,pathcruise,framescan,
		  randscan,fullviewscan,syncscan��>
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzWatchOn (void *pHandle, void *pParam,int nLen,char* szParamAssist, int& nLenAssist, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzWatchOn)(void *, void *, int, char*, int&, u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetPtzWatchOn, "IPC_GetPtzWatchOn", pHandle, pParam, nLen, szParamAssist, nLenAssist, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ SetPtzWatchOn
		  ��    ��: ������̨�����������
����˵��: pParam, PTPTZWATCHON
	      nLen��TPTZWATCHON�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzWatchOn (void *pHandle, void *pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzWatchOn)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzWatchOn, "IPC_SetPtzWatchOn", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetPtzPreset
��    ��: ��ȡԤ��λ����
����˵��: 
	      bySn,��Ҫ��ȡ��Ԥ��λ����ţ�1~255
		  pParam, PTPTZPRESET
		  nLen��bySnΪ0 ����TPTZPRESET����ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzPreset (void *pHandle, u8 bySn, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzPreset)(void *, u8,void *, int, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetPtzPreset, "IPC_GetPtzPreset", pHandle,bySn, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_ GetPtzPresetAll
��    ��: ��ȡȫ��Ԥ��λ����
����˵��: 
		  pParam, PTPTZPRESETALL
		  nLen������TPTZPRESETAll����ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzPresetAll (void *pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzPresetAll)(void *,void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzPresetAll, "IPC_GetPtzPresetAll", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetPtzPreset
		  ��    ��: ����Ԥ��λ����
����˵��: pParam, PTPTZPRESET
	  �� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzPreset (void *pHandle, void *pParam,  int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzPreset)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzPreset, "IPC_SetPtzPreset", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetPtzLimit
		  ��    ��: ��ȡ��̨��λ�������
����˵��: 
		  pParam, PTPTZLIMIT
		  nLen�� TPTZLIMIT�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzLimit (void *pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzLimit)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzLimit, "IPC_GetPtzLimit", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ SetPtzLimit
		  ��    ��: ������̨��λ�������
����˵��: pParam, PTPTZLIMIT
	  nLen��TPTZLIMIT�ĳ���
	  �� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzLimit (void *pHandle, void *pParam, int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzLimit)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzLimit, "IPC_SetPtzLimit", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetPtzPathCruise
��    ��: ��ȡѲ��ɨ�����
����˵��: 
	      bySn,��Ҫ��ȡ��ɨ��·������ţ�1~8, 0�����ȡ������Ϣ
		  pParam, PTPTZPATHCRUISE
		  nLen��bySnΪ0 ����TPTZPATHCRUISE����ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzPathCruise (void *pHandle, u8 bySn, void *pParam,int& nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzPathCruise)(void *, u8,void *, int&, u32 *);
	LOADDLLFUN5(TRUE, _IPC_GetPtzPathCruise, "IPC_GetPtzPathCruise", pHandle,bySn, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzPathCruise
��    ��: ����Ѳ��ɨ�����
����˵��: pParam, TPTZPATHCRUISE[]��ɨ��·����Ϣ����
	      nLen��TPTZPATHCRUISE����ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzPathCruise (void *pHandle, u8 bySn,void *pParam,  int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzPathCruise)(void *,u8, void *, int, u32 *);
	LOADDLLFUN5(TRUE, _IPC_SetPtzPathCruise, "IPC_SetPtzPathCruise", pHandle,bySn,pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzPathCruiseEvent
��    ��: ����Ѳ��ɨ���¼�(����Ѳ��,ֹͣѲ��)
����˵��: pParam, TPTZPATHCRUISEEVT��Ѳ��ɨ���¼�
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzPathCruiseEvent (void *pHandle, void *pParam,  int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzPathCruiseEvent)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzPathCruiseEvent, "IPC_SetPtzPathCruiseEvent", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetTimeTask
��    ��: ��ȡ��ʱ�������
����˵��: 
	      pParam, PTTIMETASK
		  nLen��sizeof(TTIMETASK);
	      pTimeArr, PTTIMETASKLIST
		  nlenTime,��ʱ����ʱ�����ݸ���.
		  nLenTimeStruct, ����sizeof(TTIMETASKLIST)�����ں�������.
		  szParamAssist,������Ϣ��xmlƬ�εķ�ʽ����enableѡ���optѡ��˴����ݣ�<mode opt=��close,hscan,vscan,preset,pathcruise,framescan,randscan,
		  fullviewscan,syncscan��>
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetTimeTask (void *pHandle, void *pParam, int nLen, void * pTimeArr, int nLenTime ,int nLenTimeStruct , char* szParamAssist, int& nLenAssist, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetTimeTask)(void *, void *, int,void*,int,int,char*,int&, u32 *);
	LOADDLLFUN9(TRUE, _IPC_GetTimeTask, "IPC_GetTimeTask", pHandle, pParam, nLen,pTimeArr,nLenTime,nLenTimeStruct, szParamAssist,nLenAssist, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ SetTimeTask
��    ��: ���ö�ʱ�������
����˵��: 
	      pParam, PTTIMETASK
		  nLen��sizeof(TTIMETASK);
	      pTimeArr, PTTIMETASKLIST
		  nlenTime,��ʱ����ʱ�����ݸ���.
		  nLenTimeStruct, ����sizeof(TTIMETASKLIST)�����ں�������.
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetTimeTask (void *pHandle, void *pParam, int nLen ,void * pTimeArr, int nLenTime ,int nLenTimeStruct, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetTimeTask)(void *, void *, int,void*,int,int, u32 *);
	LOADDLLFUN7(TRUE, _IPC_SetTimeTask, "IPC_SetTimeTask", pHandle, pParam, nLen,pTimeArr,nLenTime,nLenTimeStruct, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_ GetPtzMainTain
��    ��: ��ȡ��̨�������
����˵��: 
	      pParam, PTPTZCOORDINATE
		  nLen�� TPTZCOORDINATE�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzCoorDinate (void *pHandle, void *pParam,int nLen, char* szParamAssist, int& nLenAssist, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzCoorDinate)(void *, void *, int,char*,int&, u32 *);
	LOADDLLFUN6(TRUE, _IPC_GetPtzCoorDinate, "IPC_GetPtzCoorDinate", pHandle, pParam, nLen, szParamAssist, nLenAssist, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzCoorDinateEvt
��    ��: ������̨�����¼�
����˵��: 
	      pParam, PTPTZCOORDINATE
		  nLen�� TPTZCOORDINATE�ĳ���
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzCoorDinateEvt(void *pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzCoorDinateEvt)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzCoorDinateEvt, "IPC_SetPtzCoorDinateEvt", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetPtzRatio
��    ��: ��ȡ��̨����
����˵��: 
	      dwHandle      �豸���
		  pParam, TPTZRATIO
		  nLen�� TPTZRATIO�ĳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetPtzRatio (void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzRatio)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzRatio, "IPC_GetPtzRatio", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzRatio
��    ��: ������̨����
����˵��: 
	      dwHandle      �豸���
		  pParam, TPTZRATIO
		  nLen�� TPTZRATIO�ĳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetPtzRatio(void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzRatio)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzRatio, "IPC_SetPtzRatio", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzCoorDinateEvt
��    ��: ������̨P,T,Zֵ
����˵��: 
	      dwHandle      �豸���
		  pParam, PTPTZCOORDINATEEX
		  nLen�� TPTZCOORDINATEEX�ĳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetPtzCoorDinateEX(void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzCoorDinateEX)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzCoorDinateEX, "IPC_SetPtzCoorDinateEX", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetAquillaPTMove
��    ��: ���ð������ӳٶ�λ
����˵��: 
	      dwHandle      �豸���
		  pParam, TPTZAQUILLAPTMOVE
		  nLen�� TPTZAQUILLAPTMOVE�ĳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAquillaPTMove(void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAquillaPTMove)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAquillaPTMove, "IPC_SetAquillaPTMove", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetAquillaPTZAngle
��    ��: ���ð�������λ
����˵��: 
	      dwHandle      �豸���
		  pParam, TPTZAQUILLAPTZANGLE
		  nLen�� TPTZAQUILLAPTZANGLE�ĳ���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetAquillaPTZAngle(void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAquillaPTZAngle)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetAquillaPTZAngle, "IPC_SetAquillaPTZAngle", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_PtzDeviationCheck
��    ��: ��̨���У��
����˵��: 
	      dwHandle      �豸���
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_PtzDeviationCheck(void* pHandle, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_PtzDeviationCheck)(void *, u32 *);
	LOADDLLFUN2(TRUE, _IPC_PtzDeviationCheck, "IPC_PtzDeviationCheck", pHandle, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetPtzDevCheckRlt
��    ��: ��ȡ��̨���У����
����˵��: 
	      dwHandle      �豸���
		  pParam,		TPTZDEVCHECKRLT
		  nLen��        TPTZDEVCHECKRLT�ĳ���
		  pErrorCode    ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetPtzDevCheckRlt(void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzDevCheckRlt)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzDevCheckRlt, "IPC_GetPtzDevCheckRlt", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetPtzPatternsInfo
		  ��    ��: ʵ�ֻ���ɨ����Ϣ��ȡ
����˵��: pParam, PTPTZPATTERNSINFO
		  nLen,   ����ɨ���������
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzPatternsInfo (void *pHandle, void *pParam,  int &nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzPatternsInfo)(void *, void *, int&, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzPatternsInfo, "IPC_GetPtzPatternsInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_SetPtzPatternEvt
��    ��: ���û���ɨ���¼�
����˵��: pParam, PTPTZPATTERNEVT
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SetPtzPatternEvt (void *pHandle, void *pParam,  int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzPatternEvt)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzPatternEvt, "IPC_SetPtzPatternEvt", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetPtzHvangle
��    ��: ��ȡ�ӳ�������
����˵��: pParam, PTPTZHVANGLE  
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetPtzHVangle (void *pHandle, void *pParam,  int nLen,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPtzHVangle)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_GetPtzHVangle, "IPC_GetPtzHVangle", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetPtzWSInfo
��    ��: ����websocket��Ϣ���豸�������ϴ�ptz��Ϣ
����˵��: 
	      dwHandle      �豸���
		  pParam,		TPTZWSINFO
		  nLen��        TPTZWSINFO����
		  pErrorCode    ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetPtzWSInfo(void* pHandle, void *pParam,int nLen, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPtzWSInfo)(void *, void *, int, u32 *);
	LOADDLLFUN4(TRUE, _IPC_SetPtzWSInfo, "IPC_SetPtzWSInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetCap
��    ��: ��ȡ������
����˵��: nCap -- ����������
          apCapName -- ������������
		  anCapOut -- �������ķ���ֵ
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetCap(void *pHandle, u16 nCap, char* apCapName[], u32 anCapOut[], u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetCap)(void *, u16,char *[], u32[],u32* );
	LOADDLLFUN5(TRUE, _IPC_GetCap, "IPC_GetCap", pHandle, nCap, apCapName, anCapOut,pErrorCode);

	*pErrorCode = ERR_NOFUN;
	return false;
}

IPC_API int CDECL IPC_AddConnectDetect(void *pHandle, u32 dwConnectTimeOut, u32 dwReConnectTimes, cbfConnectDetect pcbfFun, void* pContext,u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_AddConnectDetect)(void*, u32, u32, cbfConnectDetect, void*, u32*);
	LOADDLLFUN6(TRUE, _IPC_AddConnectDetect, "IPC_AddConnectDetect", pHandle, dwConnectTimeOut, dwReConnectTimes, pcbfFun, pContext, pErrorCode);

	return ERR_NOFUN;
}


IPC_API int CDECL IPC_DelConnectDetect(void *pHandle, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_DelConnectDetect)(void*, u32*);
	LOADDLLFUN2(TRUE, _IPC_DelConnectDetect, "IPC_DelConnectDetect", pHandle, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_IsConnect
��    ��: ����״̬�ж�
          
����˵��:
		 dwHandle      �豸���
		 bIsConnect	   ����״̬
		 pErrorCode    ������ָ��

�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_IsConnect(u32 dwHandle, bool& bIsConnect, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_IsConnect)(u32,bool&,u32*);
	LOADDLLFUN3(TRUE, _IPC_IsConnect, "IPC_IsConnect", dwHandle,bIsConnect,pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_StartRealPlay
��    ��: ����������(TCP)
����˵��: pParam[in]--TRTSPVIDEOPARAM
		  nLen --����ṹ�峤��
		  pInfoOut[out]--TPLAYVIDEOINFO
		  nLenInfo[out] --����ṹ��
		  pErrorCode   ������
�� �� ֵ: UDP:�ɹ�����id,ʧ�ܷ���0��ԭ�����pErrorCode,TCP:�ɹ����ŷ���id,ʧ������pErrorCode�Ƿ�ΪRET_FAILD
=================================================================*/
IPC_API u32 CDECL IPC_StartRealPlay(void *pHandle, emPlayVideoType eType,void* pParam, int nLen,void*pInfoOut,int& nLenInfo,u32* pErrorCode)
{
	typedef  u32  (CDECL* _IPC_StartRealPlay)(void *, emPlayVideoType ,void* , int ,void*,int& ,u32* );
	LOADDLLFUN7(TRUE, _IPC_StartRealPlay, "IPC_StartRealPlay", pHandle,  eType, pParam,  nLen,pInfoOut,nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetRtspMetaPort
��    ��: ����Rtsp Meta�˿�
����˵��: eType  ������������ type_udp,type_tcp
		  bVideo	�Ƿ������Ƶ
          pParam[in]--TPLAYVIDEOPARAM
          nLen --����ṹ�峤��	
          pInfoOut[out]--TPLAYVIDEOINFO
          nLenInfo[out] --����ṹ��
          pErrorCode   ������
�� �� ֵ: �ɹ�����id,ʧ�ܷ���0��ԭ�����pErrorCode
=================================================================*/
IPC_API u32 CDECL IPC_SetRtspMetaPort(void *pHandle, emPlayVideoType eType, bool bVideo, void* pParam, int nLen,void*pInfoOut,int& nLenInfo,u32* pErrorCode)
{
	typedef  u32  (CDECL* _IPC_SetRtspMetaPort)(void *, emPlayVideoType ,bool, void* , int ,void*,int& ,u32* );
	LOADDLLFUN8(TRUE, _IPC_SetRtspMetaPort, "IPC_SetRtspMetaPort", pHandle,  eType,bVideo, pParam,  nLen,pInfoOut,nLenInfo, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_RemoveRtspMetaPort
��    ��: ȥ��Rtsp Meta�˿�
����˵��: 
		  dwPlayID      ����ID
		  pErrorCode    ������
�� �� ֵ: �ɹ�����id,ʧ�ܷ���0��ԭ�����pErrorCode
=================================================================*/
IPC_API u32 CDECL IPC_RemoveRtspMetaPort(void *pHandle, u32 dwPlayID, u32* pErrorCode)
{
	typedef  u32  (CDECL* _IPC_RemoveRtspMetaPort)(void *, u32,u32* );
	LOADDLLFUN3(TRUE, _IPC_RemoveRtspMetaPort, "IPC_RemoveRtspMetaPort", pHandle, dwPlayID, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_StopVideo_RTSP
��    ��: ֹͣ����������(TCP)
����˵��: pParam[in]--TRTSPPLAYVIDEOINFO
		  nLen --����ṹ�峤��
�� �� ֵ: �ɹ�����IPC_ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API BOOL32 CDECL IPC_StopRealPlay(void *pHandle,emPlayVideoType eType,u32 dwPlayID, u32* pErrorCode)
{
	typedef  bool  (CDECL* _IPC_StopRealPlay)(void *,emPlayVideoType ,u32 , u32* );
	LOADDLLFUN4(TRUE, _IPC_StopRealPlay, "IPC_StopRealPlay", pHandle, eType,dwPlayID, pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_GetCompileTime
��    ��: ��ȡipcsdk�����ʱ��
          
����˵��:
		  szCompileTime sdk�����ʱ��
		  pErrorCode   	������
����ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetCompileTime(char* szCompileTime,u32*pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetCompileTime)( char*, u32* );
	LOADDLLFUN2(TRUE, _IPC_GetCompileTime, "IPC_GetCompileTime",szCompileTime , pErrorCode);

	return ERR_NOFUN;
}
/*=================================================================
��������: IPC_AssTeleZoomInfo
��    ��: Զ�˷Ŵ�
����˵��:
    hPlayHandle     ���������
    pchFileName     �����ͼƬ�ļ�ȫ·��(�ļ���+�ļ�·��)    
�� �� ֵ: �ɹ�����ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_AssTeleZoomInfo (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_AssTeleZoomInfo)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_AssTeleZoomInfo, "IPC_AssTeleZoomInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetAssTeleZoomInfo
��    ��: Զ�˷Ŵ�
����˵��:
    hPlayHandle     ���������
    pchFileName     �����ͼƬ�ļ�ȫ·��(�ļ���+�ļ�·��)    
�� �� ֵ: �ɹ�����ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetAssTeleZoomInfo (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAssTeleZoomInfo)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetAssTeleZoomInfo, "IPC_GetAssTeleZoomInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_AssMalfInfo
��    ��: ���ν���
����˵��:
    hPlayHandle     ���������
    pchFileName     �����ͼƬ�ļ�ȫ·��(�ļ���+�ļ�·��)    
�� �� ֵ: �ɹ�����ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_AssMalfInfo (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_AssMalfInfo)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_AssMalfInfo, "IPC_AssMalfInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetAssMalfInfo
��    ��: ���ν���
����˵��:
    hPlayHandle     ���������
    pchFileName     �����ͼƬ�ļ�ȫ·��(�ļ���+�ļ�·��)    
�� �� ֵ: �ɹ�����ERR_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GetAssMalfInfo (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetAssMalfInfo)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetAssMalfInfo, "IPC_GetAssMalfInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SetMTCF
��    ��: ���ù���ģʽ
����˵��: pParam, TMTCFPARAM
		  nLen, ���ݳ���,����sizeof(TMTCFPARAM)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_SetMTCF (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetMTCF)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetMTCF, "IPC_SetMTCF", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetMTCF
��    ��: ��ȡ����ģʽ
����˵��: pParam, TMTCFPARAM
		  nLen, ���ݳ���,����sizeof(TMTCFPARAM)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetMTCF (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetMTCF)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetMTCF, "IPC_GetMTCF", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GetBatteryStatus
��    ��: ��ȡ��ص���
����˵��: pParam, TBATSTATUSINFO
		  nLen, ���ݳ���,����sizeof(TBATSTATUSINFO)
		  pErrorCode   ������
�� �� ֵ: �ɹ�����true, ʧ�ܷ���false��ԭ�����pErrorCode
=================================================================*/
IPC_API BOOL32 CDECL IPC_GetBatteryStatus (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetBatteryStatus)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetBatteryStatus, "IPC_GetBatteryStatus", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetSSH (void *pHandle, bool bOpen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetSSH)(void*, bool, u32*);
	LOADDLLFUN3(TRUE, _IPC_SetSSH, "IPC_SetSSH", pHandle, bOpen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API int CDECL IPC_SetColorSize (void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetColorSize)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetColorSize, "IPC_SetColorSize", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API int CDECL IPC_GetColorSize (void *pHandle, void *pParam,  int nLen, char* szParamAssist, int& nLenAssist, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetColorSize)(void*, void*, int, char*, int&, u32*);
	LOADDLLFUN6(TRUE, _IPC_GetColorSize, "IPC_GetColorSize", pHandle, pParam, nLen, szParamAssist, nLenAssist, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_GetGpsInfo (void *pHandle, void *pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetGpsInfo)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetGpsInfo, "IPC_GetGpsInfo", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_SethotPointState
��    ��: �����ȵ�׷��״̬
����˵��: pParam, PTPTZHVANGLE  
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_SethotPointState (void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SethotPointState)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SethotPointState, "IPC_SethotPointState", pHandle, pParam,nLen, pErrorCode);

	return ERR_NOFUN;
}

/*=================================================================
��������: IPC_GethotPointState
��    ��: ��ȡ�ȵ�׷��״̬
����˵��: pParam, PTPTZHVANGLE  
�� �� ֵ: �ɹ�����RET_SUCCESS, ʧ�ܷ��ش�����
=================================================================*/
IPC_API int CDECL IPC_GethotPointState (void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GethotPointState)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GethotPointState, "IPC_GethotPointState", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}


IPC_API BOOL32 CDECL IPC_GetMobilenetwork(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetMobilenetwork)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetMobilenetwork, "IPC_GetMobilenetwork", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetMobilenetwork(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetMobilenetwork)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetMobilenetwork, "IPC_SetMobilenetwork", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_GetPubsec(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetPubsec)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetPubsec, "IPC_GetPubsec", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetPubsec(void *pHandle, void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetPubsec)(void*, void*, int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetPubsec, "IPC_SetPubsec", pHandle, pParam, nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetAzimuth (void *pHandle, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetAzimuth)(void*, u32*);
	LOADDLLFUN2(TRUE, _IPC_SetAzimuth, "IPC_SetAzimuth", pHandle, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_GetBasicPos (void *pHandle,void *pParam,  int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_GetBasicPos)(void*,void*,int, u32*);
	LOADDLLFUN4(TRUE, _IPC_GetBasicPos, "IPC_GetBasicPos", pHandle,pParam,nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetDeployPicStart(void *pHandle, int nParam, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDeployPicStart)(void*,int, u32*);
	LOADDLLFUN3(TRUE, _IPC_SetDeployPicStart, "IPC_SetDeployPicStart", pHandle,nParam, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetDeployPicUpload(void *pHandle, void* pParam, int nLen, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDeployPicUpload)(void*,void*,int, u32*);
	LOADDLLFUN4(TRUE, _IPC_SetDeployPicUpload, "IPC_SetDeployPicUpload", pHandle,pParam,nLen, pErrorCode);

	return ERR_NOFUN;
}

IPC_API BOOL32 CDECL IPC_SetDeployPicStop(void *pHandle, u32 *pErrorCode)
{
	typedef  bool  (CDECL* _IPC_SetDeployPicStop)(void*,u32*);
	LOADDLLFUN2(TRUE, _IPC_SetDeployPicStop, "IPC_SetDeployPicStop", pHandle, pErrorCode);

	return ERR_NOFUN;
}



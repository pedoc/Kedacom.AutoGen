///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*****************************************************************************
ģ����  : mediaprevsdk���ܽӿ�
�ļ���  : mediaprevsdk_c.h
����ļ���mediaprevsdk.cpp
ʵ�ֹ��ܣ�
����    ��sunjun
�汾    ��IPC-V7.0-R1.0 Copyright (C) 2009 - 2012 All Rights Reserved
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��        �汾        �޸���        �߶���    �޸�����
201709018      v1.0        sunjun	                 ����
******************************************************************************/
#ifndef MEDIAREVSDK_H_
#define MEDIAREVSDK_H_

#include "mediastruct.h"
#include "mediadefine.h"

#ifndef MEDIA_API
#ifdef WIN32
#define MEDIA_API  extern "C" __declspec(dllexport)
#else
#define MEDIA_API
#endif
#endif

#ifdef WIN32
#define CDECL  __cdecl
#else
#define CDECL
#endif

#ifndef STDCALL
#ifdef WIN32
#define STDCALL  __stdcall
#else
#define STDCALL
#endif
#endif

#ifdef WIN32
typedef void (__stdcall *MEDIA_FRAMECBFUN)(int nPort, PTMediaRawData pFrame, void* pUserData);

typedef void (__stdcall *MEDIA_ALARM_CB)(int nPort, int& nType, int &nData, void* pUserData);
#else
typedef void (*MEDIA_FRAMECBFUN)(int nPort, PTMediaRawData pFrame, void* pUserData);

typedef void (*MEDIA_ALARM_CB)(int nPort, int& nType, int &nData, void* pUserData);
#endif

/**
 * @brief  ��ʼ��
 * @param  
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_Init(unsigned short wTelnetPort = 3500, int bOpenTelnet = 0);


/**
 * @brief  �ͷ�
 * @param 
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_Release();

/**
 * @brief  �Ƿ��Ѿ���ʼ��
 * @param 
 * @return ��ʼ������true�����򷵻�false
 */
MEDIA_API bool CDECL MEDIA_IsInit();

/**
 * @brief  ��ȡID
 * @param  pdwMediaId  [out]���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_GetMediaId(unsigned long *pdwMediaId);

/**
 * @brief  ���ý�������
 * @param  pdwMediaId  [in]���
 * @param  dwPuIp	   [in]ǰ���豸IP
 * @param  dwLocalIp   [in]����IP
 * @param  TSwitchParam[in]��ز���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_SetSwitch(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TSwitchParam tSwitchParam);

/**
 * @brief  ���ý��պ���
 * @param  pdwMediaId  [in]���
 * @param  dwIp	   [in]ǰ���豸IP
 * @param  wDesPort	   [in]Ŀ��˿�
 * @param  dwLocalIp   [in]����IP
 * @param  wPort      [in]�˿�
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_SetCallSwitch(unsigned long dwMediaId, unsigned long dwIp, unsigned short wDesPort,  unsigned long dwLocalIp, unsigned short wPort);

/**
 * @brief  ����ֹͣ����
 * @param  pdwMediaId  [in]���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_StopCallSwitch(unsigned long dwMediaId);

/**
 * @brief  ֹͣ��������
 * @param  pdwMediaId  [in]���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_StopSwitch(unsigned long dwMediaId);

/**
 * @brief  ����rtsp��������
 * @param  pdwMediaId  [in]���
 * @param  dwPuIp	   [in]ǰ���豸IP
 * @param  dwLocalIp   [in]����IP
 * @param  TSwitchParam[in]��ز���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_SetRtspSwitch(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TRtspSwitchParam tRtspSwitchParam);

/**
 * @brief  ֹͣrtsp��������
 * @param  pdwMediaId  [in]���
 * @param  dwPuIp	   [in]ǰ���豸IP
 * @param  dwLocalIp   [in]����IP
 * @param  TSwitchParam[in]��ز���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_StopRtspSwitch(unsigned long dwMediaId);

/**
 * @brief  ������Զ��ת��
 * @param  pdwMediaId  [in]���
 * @param  dwDestIp	   [in]Զ��Ŀ��IP
 * @param  dwPuIp	   [in]ǰ���豸IP
 * @param  dwPuIp	   [in]ǰ��IP
 * @param  TSwitchParam[in]���ؽ�����ز���
 * @param  TSwitchSendParam[in]ת��Զ����ز���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_SetDataSend(unsigned long dwMediaId, unsigned long dwDestIp, unsigned long dwPuIp, unsigned long dwLocalIp, TSwitchParam tSwitchParam, TSwitchSendParam tSwitchSendParam);

/**
 * @brief  ֹͣ��Զ��ת��
 * @param  pdwMediaId  [in]���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_StopDataSend(unsigned long dwMediaId);

/**
 * @brief  ��������֡�ص�
 * @param  pdwMediaId  [in]���
 * @param  MEDIA_FRAMECBFUN  [in]�ص�����������NULLΪֹͣ�ص�
 * @param  pParam  [in]�ص�������
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */

MEDIA_API int CDECL MEDIA_SetFrameCallBack(unsigned long dwMediaId, MEDIA_FRAMECBFUN pFun, void *pParam);

/**
 * @brief  ����Ԫ���ݸ澯�ص�
 * @param  pdwMediaId  [in]���
 * @param  MEDIA_ALARM_CB  [in]�ص�����������NULLΪֹͣ�ص�
 * @param  pParam  [in]�ص�������
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */

MEDIA_API int CDECL MEDIA_SetAlarmCallBack(unsigned long dwMediaId, MEDIA_ALARM_CB pFun, void *pParam);

/**
 * @brief  rtp�������֡���ݣ���MEDIA_SetRtpDataЭͬʹ��
 * @param  pdwMediaId  [in]���
 * @param  dwPuIp  [in]Զ���豸ip
 * @param  dwLocalIp  [in]����ip
 * @param  TRtspSwitchParam �˿ڵ���ز���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_SetRtpToFrame(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TRtspSwitchParam tRtspSwitchParam);

/**
 * @brief  ����rtp���ݣ���֡ʱ���ã���MEDIA_SetRtpToFrameЭͬʹ��
 * @param  pdwMediaId  [in]���
 * @param  nType [in] �������� 0Ϊ��Ƶ 1Ϊ��Ƶ
 * @param  pBuf  [in]rtp����ָ��
 * @param  dwDatalen  [in]rtp���ݳ���
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIA_API int CDECL MEDIA_SetRtpData(unsigned long dwMediaId, int nType, void *pBuf, unsigned long dwDatalen);

#endif
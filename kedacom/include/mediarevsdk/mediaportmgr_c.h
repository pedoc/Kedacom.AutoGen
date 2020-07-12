///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*****************************************************************************
ģ����  : mediaportmgr_c
�ļ���  : mediaportmgr_c.h
����ļ���mediaportmgr_c.cpp
ʵ�ֹ��ܣ�
����    ��sunjun
�汾    ��IPC-V7.0-R1.0 Copyright (C) 2009 - 2012 All Rights Reserved
-----------------------------------------------------------------------------
�޸ļ�¼:
��  ��        �汾        �޸���        �߶���    �޸�����
201709018      v1.0        sunjun	                 ����
******************************************************************************/
#ifndef MEDIAPORTMGR_H_
#define MEDIAPORTMGR_H_

#ifndef STDCALL
#define STDCALL  __stdcall
#endif

#ifndef CDECL
#define CDECL  __cdecl
#endif

#ifdef __cplusplus			/* for C++ */
#define MEDIAPORT_API  extern "C"			__declspec(dllexport)
#else						/* for C */
#define MEDIAPORT_API						__declspec(dllexport)
#endif  /*__cplusplus*/

/* �˿ڶ��� */
#define MEDIA_RTP_LOCAL_PORT     (unsigned short)60000	   // ��Ƶ����˿�
#define MEDIA_LOCAL_CALL_PORT	 (unsigned short)52000	   // ��Ƶ���ж˿�
#define MEDIA_RTP_REMOTE_PORT    (unsigned short)59000	   // ǰ����Ƶ���Ͷ˿�
#define MEDIA_LOCAL_REC_PORT     (unsigned short)10086     // ����¼����ʼ�˿�
#define MEDIA_DOWNLOAD_PORT		 (unsigned short)10000     // ���ر��ؽ��ն˿�
#define MEDIA_DOWNLOAD_PUPORT	 (unsigned short)1730	   // ǰ�����ط��Ͷ˿�
#define MEDIA_SWITCH_SEND_PORT   (unsigned short)40000	   // ת���˿�

/**
 * @brief  ��ʼ��
 * @param  
 * @return 
 */
MEDIAPORT_API s32 CDECL PMGR_InitPortMgr();


/**
 * @brief  �ͷ�
 * @param 
 * @return 
 */
MEDIAPORT_API s32 CDECL PMGR_UnInitPortMgr();

/**
 * @brief  ��ȡ����ip
 * @param  (out)dwLocalIp  ����ip
		   (in) dwRemoteIp ǰ��ip
		   (in) wRemotePort ǰ�˶˿�
 * @return ��ʼ������true�����򷵻�false
 */
MEDIAPORT_API s32 CDECL PMGR_GetLocalIp(unsigned long &dwLocalIp, unsigned long dwRemoteIp, unsigned short wRemotePort);

/**
 * @brief  ��ȡ���ض˿�
 * @param  wVideoPort  [out]��Ƶ�˿�
		   wAudioPort  [out]��Ƶ�˿�
		   videoChan   [out]ͨ��
		   dwStartPort [out]��ʼ�˿�
 * @return �ɹ�����MEDIARCV_SUCCESS��ʧ�ܷ��ش�����
 */
MEDIAPORT_API s32 PMGR_GetMediaPort(unsigned short& wVideoPort,unsigned short& wAudioPort,unsigned char videoChan, unsigned long dwStartPort);


#endif
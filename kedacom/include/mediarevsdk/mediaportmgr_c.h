///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*****************************************************************************
模块名  : mediaportmgr_c
文件名  : mediaportmgr_c.h
相关文件：mediaportmgr_c.cpp
实现功能：
作者    ：sunjun
版本    ：IPC-V7.0-R1.0 Copyright (C) 2009 - 2012 All Rights Reserved
-----------------------------------------------------------------------------
修改记录:
日  期        版本        修改人        走读人    修改内容
201709018      v1.0        sunjun	                 创建
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

/* 端口定义 */
#define MEDIA_RTP_LOCAL_PORT     (unsigned short)60000	   // 视频浏览端口
#define MEDIA_LOCAL_CALL_PORT	 (unsigned short)52000	   // 音频呼叫端口
#define MEDIA_RTP_REMOTE_PORT    (unsigned short)59000	   // 前端视频发送端口
#define MEDIA_LOCAL_REC_PORT     (unsigned short)10086     // 本地录像起始端口
#define MEDIA_DOWNLOAD_PORT		 (unsigned short)10000     // 下载本地接收端口
#define MEDIA_DOWNLOAD_PUPORT	 (unsigned short)1730	   // 前端下载发送端口
#define MEDIA_SWITCH_SEND_PORT   (unsigned short)40000	   // 转发端口

/**
 * @brief  初始化
 * @param  
 * @return 
 */
MEDIAPORT_API s32 CDECL PMGR_InitPortMgr();


/**
 * @brief  释放
 * @param 
 * @return 
 */
MEDIAPORT_API s32 CDECL PMGR_UnInitPortMgr();

/**
 * @brief  获取本地ip
 * @param  (out)dwLocalIp  本地ip
		   (in) dwRemoteIp 前端ip
		   (in) wRemotePort 前端端口
 * @return 初始化返回true，否则返回false
 */
MEDIAPORT_API s32 CDECL PMGR_GetLocalIp(unsigned long &dwLocalIp, unsigned long dwRemoteIp, unsigned short wRemotePort);

/**
 * @brief  获取本地端口
 * @param  wVideoPort  [out]视频端口
		   wAudioPort  [out]音频端口
		   videoChan   [out]通道
		   dwStartPort [out]起始端口
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIAPORT_API s32 PMGR_GetMediaPort(unsigned short& wVideoPort,unsigned short& wAudioPort,unsigned char videoChan, unsigned long dwStartPort);


#endif
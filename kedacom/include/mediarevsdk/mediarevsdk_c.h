///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*****************************************************************************
模块名  : mediaprevsdk功能接口
文件名  : mediaprevsdk_c.h
相关文件：mediaprevsdk.cpp
实现功能：
作者    ：sunjun
版本    ：IPC-V7.0-R1.0 Copyright (C) 2009 - 2012 All Rights Reserved
-----------------------------------------------------------------------------
修改记录:
日  期        版本        修改人        走读人    修改内容
201709018      v1.0        sunjun	                 创建
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
 * @brief  初始化
 * @param  
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_Init(unsigned short wTelnetPort = 3500, int bOpenTelnet = 0);


/**
 * @brief  释放
 * @param 
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_Release();

/**
 * @brief  是否已经初始化
 * @param 
 * @return 初始化返回true，否则返回false
 */
MEDIA_API bool CDECL MEDIA_IsInit();

/**
 * @brief  获取ID
 * @param  pdwMediaId  [out]句柄
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_GetMediaId(unsigned long *pdwMediaId);

/**
 * @brief  设置接收码流
 * @param  pdwMediaId  [in]句柄
 * @param  dwPuIp	   [in]前端设备IP
 * @param  dwLocalIp   [in]本地IP
 * @param  TSwitchParam[in]相关参数
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_SetSwitch(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TSwitchParam tSwitchParam);

/**
 * @brief  设置接收呼叫
 * @param  pdwMediaId  [in]句柄
 * @param  dwIp	   [in]前端设备IP
 * @param  wDesPort	   [in]目标端口
 * @param  dwLocalIp   [in]本地IP
 * @param  wPort      [in]端口
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_SetCallSwitch(unsigned long dwMediaId, unsigned long dwIp, unsigned short wDesPort,  unsigned long dwLocalIp, unsigned short wPort);

/**
 * @brief  设置停止呼叫
 * @param  pdwMediaId  [in]句柄
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_StopCallSwitch(unsigned long dwMediaId);

/**
 * @brief  停止接收码流
 * @param  pdwMediaId  [in]句柄
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_StopSwitch(unsigned long dwMediaId);

/**
 * @brief  设置rtsp接收码流
 * @param  pdwMediaId  [in]句柄
 * @param  dwPuIp	   [in]前端设备IP
 * @param  dwLocalIp   [in]本地IP
 * @param  TSwitchParam[in]相关参数
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_SetRtspSwitch(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TRtspSwitchParam tRtspSwitchParam);

/**
 * @brief  停止rtsp接收码流
 * @param  pdwMediaId  [in]句柄
 * @param  dwPuIp	   [in]前端设备IP
 * @param  dwLocalIp   [in]本地IP
 * @param  TSwitchParam[in]相关参数
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_StopRtspSwitch(unsigned long dwMediaId);

/**
 * @brief  设置向远端转发
 * @param  pdwMediaId  [in]句柄
 * @param  dwDestIp	   [in]远端目的IP
 * @param  dwPuIp	   [in]前端设备IP
 * @param  dwPuIp	   [in]前端IP
 * @param  TSwitchParam[in]本地接收相关参数
 * @param  TSwitchSendParam[in]转发远端相关参数
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_SetDataSend(unsigned long dwMediaId, unsigned long dwDestIp, unsigned long dwPuIp, unsigned long dwLocalIp, TSwitchParam tSwitchParam, TSwitchSendParam tSwitchSendParam);

/**
 * @brief  停止向远端转发
 * @param  pdwMediaId  [in]句柄
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_StopDataSend(unsigned long dwMediaId);

/**
 * @brief  设置码流帧回调
 * @param  pdwMediaId  [in]句柄
 * @param  MEDIA_FRAMECBFUN  [in]回调函数，设置NULL为停止回调
 * @param  pParam  [in]回调上下文
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */

MEDIA_API int CDECL MEDIA_SetFrameCallBack(unsigned long dwMediaId, MEDIA_FRAMECBFUN pFun, void *pParam);

/**
 * @brief  设置元数据告警回调
 * @param  pdwMediaId  [in]句柄
 * @param  MEDIA_ALARM_CB  [in]回调函数，设置NULL为停止回调
 * @param  pParam  [in]回调上下文
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */

MEDIA_API int CDECL MEDIA_SetAlarmCallBack(unsigned long dwMediaId, MEDIA_ALARM_CB pFun, void *pParam);

/**
 * @brief  rtp数据组成帧数据，和MEDIA_SetRtpData协同使用
 * @param  pdwMediaId  [in]句柄
 * @param  dwPuIp  [in]远端设备ip
 * @param  dwLocalIp  [in]本地ip
 * @param  TRtspSwitchParam 端口等相关参数
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_SetRtpToFrame(unsigned long dwMediaId, unsigned long dwPuIp, unsigned long dwLocalIp, TRtspSwitchParam tRtspSwitchParam);

/**
 * @brief  设置rtp数据，组帧时设置，和MEDIA_SetRtpToFrame协同使用
 * @param  pdwMediaId  [in]句柄
 * @param  nType [in] 码流类型 0为视频 1为音频
 * @param  pBuf  [in]rtp数据指针
 * @param  dwDatalen  [in]rtp数据长度
 * @return 成功返回MEDIARCV_SUCCESS，失败返回错误码
 */
MEDIA_API int CDECL MEDIA_SetRtpData(unsigned long dwMediaId, int nType, void *pBuf, unsigned long dwDatalen);

#endif
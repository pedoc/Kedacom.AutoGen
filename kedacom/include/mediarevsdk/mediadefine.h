//////////////////////////////////////////////////////////////////////////
// mediadefine.h 
#ifndef MEDIADEFINE_H_
#define MEDIADEFINE_H_


#pragma pack(1)

#define MEDIARCV_SUCCESS                     (0)    // 成功
#define MEDIARCV_FAIL						 (1)    // 失败
#define MEDIARCV_NOFUN						 (2)    // 没有找到SDKDLL对应接口
#define MEDIARCV_NODLL						 (3)    // 没有找到对应DLL
#define MEDIARCV_INITFAILD                   (4)    // 初始化失败
#define MEDIARCV_RELEASE                  	 (5)    // 释放失败

#define MEDIARCV_ERROR_BASE                  (s32)(500)
#define MEDIARCV_ERROR_GET_RCV               (MEDIARCV_ERROR_BASE + 1)    // 获取接收对象失败
#define MEDIARCV_ERROR_VIDEO_CREATE_IN       (MEDIARCV_ERROR_BASE + 2)    // 视频创建InID失败
#define MEDIARCV_ERROR_SETOPT_TYPE_IN        (MEDIARCV_ERROR_BASE + 3)    // 设置码流类型失败
#define MEDIARCV_ERROR_PLAYLOAD_IN           (MEDIARCV_ERROR_BASE + 4)    // 设置playload失败
#define MEDIARCV_ERROR_KEDACDM_IN            (MEDIARCV_ERROR_BASE + 5)    // 设置科达码流失败
#define MEDIARCV_ERROR_ALIVE_IN              (MEDIARCV_ERROR_BASE + 6)    // 设置保活失败
#define MEDIARCV_ERROR_SAMPLE_IN			 (MEDIARCV_ERROR_BASE + 7)    // 设置sample失败
#define MEDIARCV_ERROR_MAXFRAME_IN			 (MEDIARCV_ERROR_BASE + 8)    // 设置最大缓帧失败失败
#define MEDIARCV_ERROR_OUTMAXFRAME_IN        (MEDIARCV_ERROR_BASE + 9)    // 设置最大输出缓帧失败
#define MEDIARCV_ERROR_TRANSFER_IN           (MEDIARCV_ERROR_BASE + 10)   // 设置端口转发失败
#define MEDIARCV_ERROR_VIDEOSTART_IN         (MEDIARCV_ERROR_BASE + 11)   // 设置视频开始失败
#define MEDIARCV_ERROR_CREATE_OUT            (MEDIARCV_ERROR_BASE + 12)   // 创建OutID失败
#define MEDIARCV_ERROR_SETOPT_TYPE_OUT       (MEDIARCV_ERROR_BASE + 13)   // 设置码流类型失败
#define MEDIARCV_ERROR_DATACALLBACK_OUT      (MEDIARCV_ERROR_BASE + 14)   // 设置码流回调
#define MEDIARCV_ERROR_START_OUT	         (MEDIARCV_ERROR_BASE + 15)   // 设置码流out
#define MEDIARCV_ERROR_ADDPIPLINE	         (MEDIARCV_ERROR_BASE + 16)   // 增加pipline
#define MEDIARCV_ERROR_AUDIO_CREATE_IN       (MEDIARCV_ERROR_BASE + 17)   // 音频创建InID失败
#define MEDIARCV_ERROR_AUDIOSTART_IN         (MEDIARCV_ERROR_BASE + 18)   // 设置音频开始失败
#define MEDIARCV_ERROR_REMOVEPIPELINE        (MEDIARCV_ERROR_BASE + 19)   // 移除Pipeline失败
#define MEDIARCV_ERROR_OUT_STOP			     (MEDIARCV_ERROR_BASE + 20)   // OUT对象停止
#define MEDIARCV_ERROR_OUT_RELEASE			 (MEDIARCV_ERROR_BASE + 21)   // OUT对象释放
#define MEDIARCV_ERROR_IN_STOP			     (MEDIARCV_ERROR_BASE + 22)   // IN对象停止
#define MEDIARCV_ERROR_IN_RELEASE			 (MEDIARCV_ERROR_BASE + 23)   // IN对象释放


/* 端口定义 */
#define MEDIA_RTP_REMOTE_PORT	 (unsigned short)59000     // 前端发送视频浏览端口
#define MEDIA_RTP_LOCAL_PORT     (unsigned short)60000	   // 视频浏览端口
#define MEDIA_LOCAL_CALL_PORT	 (unsigned short)52000	   // 音频呼叫端口
#define MEDIA_LOCAL_REC_PORT     (unsigned short)10086     // 本地录像起始端口
#define MEDIA_DOWNLOAD_PORT		 (unsigned short)10000     // 下载本地接收端口
#define MEDIA_DOWNLOAD_PUPORT	 (unsigned short)1730	   // 前端下载发送端口

 	/* 媒体句柄 */
#define PLAYERHANDLE unsigned long


#pragma pack()

#endif


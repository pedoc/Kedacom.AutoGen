//////////////////////////////////////////////////////////////////////////
// mediastruct.h 
#ifndef MEDIASTRUCT_H_
#define MEDIASTRUCT_H_

#pragma pack(1)

typedef enum tagEncName
{
	E_ENCNAME_H264 = 10,
	E_ENCNAME_H265,
	E_ENCNAME_MJPEG,
	E_ENCNAME_SVAC,
	E_ENCNAME_NULL,
}TEncName, *PTEncName;

typedef struct tagEncNameAndPayload
{
	TEncName eEncName;			// 码流编码类型
	unsigned char byPayload;				// payload
}TEncNameAndPayload, *PTEncNameAndPayload;

// 本地端口
typedef struct tagLocalNetParam
{
	unsigned short wRtpPort;
	unsigned short wRtcpPort;
	unsigned short wRtcpBackPort;
} TLocalNetParam, *PTLocalNetParam;

// 远端端口
typedef struct tagRemotePortInfo
{
	unsigned short wRemoteVideoPort;
	unsigned short wRemoteAudioPort;
	unsigned short wRemoteAudioPort2;
	unsigned short wRemoteAlarmPort;
}TRemotePortInfo, *PTRemotePortInfo;

typedef struct tagPlayPortInfo
{
	TLocalNetParam tPlayVideoPort;
	TLocalNetParam tPlayAudioPort;
	TLocalNetParam tPlayAudioPort2;
	TLocalNetParam tPlayAlarmPort;
} TPlayPortInfo, *PTPlayPortInfo;

// 设置接收参数
typedef struct tagSwitchParam
{
	TPlayPortInfo tPlayPortInfo;	        // 本地的端口(必要) 
	TRemotePortInfo tRemotePortInfo;		// 远端发送端口（必要）
	TEncNameAndPayload tEncNameAndPayload;	// 按需
} TSwitchParam, *PTSwitchParam;

// 设置转发参数
typedef struct tagSwitchSendParam
{
	TPlayPortInfo tPlaySendPortInfo;	    // 转发本地的发送端口
	TRemotePortInfo tRemoteSendPortInfo;	// 转发目的端的端口
}TSwitchSendParam, *PTSwitchSendParam;


//设置rtsp参数
typedef struct tagRtspSwitchParam
{
	char			szAdmin[32];		// 前端的账号
	char			szPassword[32];		// 前端的密码
	char			szMediaURL[260];    // url
	bool            bAlarm;             // 是否开启告警
	bool            bNoStream;          // FALSE申请rtsp码流， TRUE不申请rtsp码流，只申请rtsp告警链路
	TSwitchParam    tSwitchParam;
}TRtspSwitchParam, *PTRtspSwitchParam;

typedef struct tagMediaRawData
{
	unsigned char		*pData;       //数据缓冲
	unsigned int 		dwPreBufSize;//pData缓冲前预留了多少空间，用于加
	unsigned int		byMediaEncode; //在kdvdef.h 内部定义
	unsigned int		dwDataSize;  //pData指向的实际缓冲大小缓冲大小
	unsigned int 		dwFrameID;   //帧标识，用于接收端
	unsigned int 		dwTimeStamp; //时间戳, 用于接收端
	unsigned int 		dwSSRC;      //同步源, 用于接收端
	unsigned long		dwRawTimeStamp;		//绝对时间戳（视频上面时间）
	union
	{
		struct{
			//下面一个属性跟之前的版本结构体（tagFrameHdr）尤其是网络组件提供的结构体有区别，大家要注意了
			unsigned char    		byKeyFrame;    //频帧类型（I or P）	KD_DATA_TYPE 
			unsigned char			byFrameRate; //发送帧率,用于接收端
			unsigned short			wVideoWidth;  //视频帧宽
			unsigned short			wVideoHeight; //视频帧宽
		}tVideoParam;
		struct{
			unsigned short			wChannel;		//音频通道
			unsigned short			wSample;	//音频采样率
			unsigned short			wSamplebit; //音频采样位数
		}tAudioParam;
	};
	unsigned short		wReverse[4];
}TMediaRawData,*PTMediaRawData;


#pragma pack()

#endif


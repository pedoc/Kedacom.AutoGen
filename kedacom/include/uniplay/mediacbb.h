#ifndef KD_MEDIACBB_H
#define KD_MEDIACBB_H
#include "kdvtype.h"
#include "kddef.h"
//#include "uniplay.h"
#if (defined(_WINDOW))
#ifdef KDVDECODER_EXPORTS
#define KDCLIENT_API __declspec(dllexport)
#else
#define KDCLIENT_API __declspec(dllimport)
#endif
#else
#define  KDCLIENT_API
#endif

//流畅度
typedef enum __tEDecodeFluency
{
	FLUENCY_REAL_TIME = 0,				/*实时性最优*/
	FLUENCY_NORMAL,						/*一般*/
	FLUENCY_OPTIMAL,					/*流畅性最优*/
} EDecodeFluency;

typedef enum __tEPlayState
{
	PLAY_STATE_STOP = 0,
	PLAY_STATE_START,
	PLAY_STATE_PAUSE,
	PLAY_STATE_UNKNOWN = 255,
} EPlayState;

//
typedef enum __tENetProtocol
{
	PROTOCOL_RTP_TCP = 0,
	PROTOCOL_RTP_UDP,					//(这个需要根据IP，判断出是否为多播或者单播
	PROTOCOL_RTSP_HTTP = 3,
	PROTOCOL_RTSP_TCP,
	PROTOCOL_RTSP_UDP,
	PROTOCOL_RTMP,
	PROTOCOL_UNKNOWN=255
} ENetProtocol;
#define MAX_USERDATA_LEN	16
#define MAX_NETSND_DEST_NUM	5
//清屏模式
typedef enum
{
	CLEARWINDOW_MODE_FREEZON = 0,		/*图像冻结*/
	CLEARWINDOW_MODE_COLORBAR,			/*显示七彩条*/
	CLEARWINDOW_MODE_BLUESCREEN,		/*蓝屏*/
	CLEARWINDOW_MODE_BLACKSCREEN,		/*黑屏*/
	CLEARWINDOW_MODE_NULL,				/*正常显示，不清屏*/
	CLEARWINDOW_MODE_MAX
}EClearWindowMode;

//OSD贴图类型
typedef enum __tELogoType
{
	LOGO_BMP32 = 0,						//BMP32类型
	LOGO_YUV420,						//YUV420类型
} ELogoType;

//单帧倒放模式
typedef enum __tEMemcoryType
{
	SINGLEFRAME_CPU = 0,				//使用CPU模式，默认模式
	SINGLEFRAME_MEM,					//使用内存模式
} EMemcoryType;

//回调类型
typedef enum emWorkType
{
	WORKTYPE_RECEIVE = 0,				//接收码流
	WORKTYPE_SEND = 0,					//发送码流
	WORKTYPE_RECORDER,					//录像失败
	WORKTYPE_SNAP, 						//抓拍失败
	WORKTYPE_UNKNOWN=255				//其他
} eWorkType;

//解码模式
typedef enum emDecoderType
{
	VID_GPU = 0,						//硬解码方式
	VID_SOFTDEC,						//软解码
}DecoderType;

//编码等级
typedef enum emCodecProfile
{
	PROFILE_AVC_BASELINE = 0,				//baseline
	PROFILE_AVC_MAIN,						//main-profile
	PROFILE_AVC_HIGH,						//high-profile
	PROFILE_AVC_UNKNOWN=255					//其他
} eCodecProfile;

typedef enum emTargetUsage
{
	TARGETUSAGE_AVC_QUILITY = 0,				//质量优先
	TARGETUSAGE_AVC_SPEED,						//速度优先
	TARGETUSAGE_AVC_UNKNOWN=255					//其他
} eTargetUsage;

// typedef enum emStreamType
// {
// 	STREAMTYPE_ES = 0,						//ES流
// 	STREAMTYPE_PS,							//PS流
// 	STREAMTYPE_TS,							//TS流
// 	STREAMTYPE_UNKNOWN=255					//其他
// } eStreamType;

typedef enum emOpenType
{
	OPENTYPE_LOCALFILE = 1,					//本地录像
	OPENTYPE_NETRV,							//网络源
	OPENTYPE_NETSD,							//网络发送
	OPENTYPE_NETDOWN,						//远程录像下载
	OPENTYPE_FILERECORD,					//录像保存
	OPENTYPE_UNKNOWN=255					//其他
} eOpenType;




//音频编码参数
typedef struct AudioEncParam
{
	u32		dwSizeOfLen;				/*结构体长度*/
	u32		dwEncType;					/*音频编码类型*/
	u32		dwChannel;					/*音频采集声道数*/
	u32		dwSample;					/*音频采样率*/
	u32		dwBitPerSamle;				/*音频采样位宽*/
	void*	pDriver;					/*音频驱动*/
	u32		dwBitRate;					/*音频码率*/
	u32		dwReverse[2];				/*预留*/
}TAudioEncParam;
/*网络参数*/
typedef struct tagNetSession
{    
	u32   dwRTPAddr;  //RTP地址(网络序)
	u16   wRTPPort;   //RTP端口(本机序)
	u32   dwRTCPAddr; //RTCP地址(网络序)
	u16   wRTCPPort;  //RTCP端口(本机序)
	u32   dwRtpUserDataLen;   //Rtp用户数据长度,用于在代理情况下,需要在每个udp头前添加固定头数据的情况
	u8    abyRtpUserData[MAX_USERDATA_LEN]; //用户数据指针
	u32   dwRtcpUserDataLen;   //Rtcp用户数据长度,用于在代理情况下,需要在每个udp头前添加固定头数据的情况
	u8    abyRtcpUserData[MAX_USERDATA_LEN]; //用户数据指针
}TNetSession;
//音频编码器参数
typedef struct AudioEncoder
{
	s32		nPriority;				/*音频处理线程优先级*/
	u32		dwCpuId;				/*音频处理的CPU标识*/
}TAudioEncoder;

//编码源图像的结构信息
typedef struct
{
	u32	dwSrcWidth;					//源图像的宽度
	u32	dwSrcHeight;				//源图像的高度
	u32	dwSrcYUVType;				//源图像的图像类型，为YUV420或者YUV422
	u32	dwSrcInterlace;				//源图像的帧场类型

	u32	dwSrcTopCutLine;			//上面的裁剪的行数，应为2的倍数
	u32	dwSrcBottomCutLine;			//下面的裁剪的行数，应为2的倍数
	u32	dwSrcLeftCutPoint;			//左边的裁剪的点数，应为2的倍数
	u32	dwSrcRightCutPoint;			//右边的裁剪的点数，应为2的倍数

	u32 u32Reserved;
}TVideoResizerSrc;

//目的图像的结构参数
	typedef struct
{
	u32	dwDstWidth;					//目的图像的宽度
	u32	dwDstHeight;				//目的图像的高度
	u32	dwDstYUVType;				//目的图像的图像类型，为YUV420或者YUV422
	u32	dwDstInterlace;				//目的图像的帧场类型

	u32	dwDstTopCutLine;			//上面的裁剪的行数，应为2的倍数
	u32	dwDstBottomCutLine;			//下面的裁剪的行数，应为2的倍数
	u32	dwDstLeftCutPoint;			//左边的裁剪的点数，应为2的倍数
	u32	dwDstRightCutPoint;			//右边的裁剪的点数，应为2的倍数

	u32	dwTopFillLine;				//上面的添加的颜色行数，应为2的倍数
	u32	dwBottomFillLine;			//下面的添加的颜色行数，应为2的倍数
	u32	dwLeftFillPoint;			//左边的添加的颜色点数，应为2的倍数
	u32	dwRightFillPoint;			//右边的添加的颜色点数，应为2的倍数

	u32	dwYColor;
	u32	dwUColor;
	u32	dwVColor;					//填充的边缘的颜色，目前黑色为Y:0x01,UV:0x80,绿色是全零，也可以考虑设置成RGB三个参数

	u32 u32Reserved;
}TVideoResizerDst;
//网络发送参数
typedef struct tagCbbNetSndParam
{
	u32			dwNum;										//实际地址对数
	TNetSession	tLocalNet;									//当地地址对
	u32			dwProtoType[MAX_NETSND_DEST_NUM];			//发送协议
	TNetSession	tRemoteNet[MAX_NETSND_DEST_NUM];			//远端地址对
}TCbbNetSndParam;
//视频编码参数
typedef struct  VideoEncParam
{
	u32					dwSizeOfLen;			/*结构体长度*/
	TVideoResizerSrc*	ptVideoEncSrc; 			/*视频裁剪与缩放参数*/
	TVideoResizerDst*	ptVideoEncDst;
	u32					dwEncType;				/*视频编码类型*/
	u32					dwBitRate; 				/*视频编码码率*/
	u32					dwFrameRate; 			/*视频编码帧率*/
	DecoderType			emDectype; 				/*视频编码CPU还是GPU*/
	eCodecProfile		dwProfile;				/*视频编码等级*/
	eTargetUsage		dwTargetusage;			/*视频编码优先级，速度优先或质量优先*/
	u32					dwInterval;				/*视频编码I帧间隔*/
	u32					nSlices;				/*视频编码Slices个数*/
	void*				pDriver; 				/*视频驱动*/
	u32					dwReverse[2];			/*预留*/
} TVideoEncParam;

//视频编码器参数
typedef struct VideoEncoder
{
	s32		nPriority;				/*视频处理线程优先级*/
	u32		dwCpuId;				/*视频处理的CPU标识*/
}TVideoEncoder;


//编码器统计信息
typedef struct KdvEncStatis
{
	u32		dwVideoEncNum;				/*视频总编码数*/
	u32		dwVideoFrameRate;			/*视频帧率*/
	u32		dwVideoBitRate;				/*视频码流速度*/
	u32		dwVideoPackLose;			/*视频丢帧数*/
	u32		dwVideoPackError;			/*视频错帧数*/
	u32		dwAvrVideoBitRate;			/*1分钟内视频编码平均码率*/
	u32		dwAudioEncNum;				/*音频总编码数*/
	u32		dwAudioBitRate;				/*语音码流速度*/
	u32		dwAudioPackLose;			/*语音丢帧数*/
	u32		dwAudioPackError;			/*语音错帧数*/
	u32		dwAvrAudioBitRate;			/*1分钟内语音编码平均码率*/
	u32		dwReverse[2];				/*预留*/
}TKdvEncStatis;

typedef struct tagEventErrorInfo
{
	u32			dwErrorCode; 			// error code
	eWorkType	emWork;					// work
	u32			dwReverse[2];				//预留
} EVENTERRORINFO;
#define MAX_USERDATA_LEN    16   //最大用户数据长度


/*本地网络参数*/
/*当本地在pxy后面, 本地地址中的m_wUserLen表示接收时需要去除的头长度*/
// typedef struct tagLocalNetParam
// {
// 	TNetSession m_tLocalNet;
// 	u32         m_dwRtcpBackAddr;//RTCP回发地址(网络序)
// 	u16         m_wRtcpBackPort; //RTCP回发端口（本机序）
// }TLocalNetParam;


//解码器状态
typedef struct KdvDecStatus
{
	BOOL32			bDecStart;				/*是否开始音视频解码*/
	u32				dwAudioBufLen;			/*音频播放缓冲长度*/
	u32				dwVideoBufLen;			/*视频播放缓冲长度*/
	TLocalNetParam	tAudioRcvAddr;			/*音频当地地址*/
	TLocalNetParam	tVideoRcvAddr;			/*视频当地地址*/
	u32				dwVideoDecType;			/*视频解码类型*/
	u32				dwDecdWidth;			/*码流的宽*/
	u32				dwDecdHeight;			/*码流的高*/
	void*			hPlayWnd;				/*窗口句柄*/
	BOOL32			bSetWndReturn;			/*窗口句柄设置是否成功*/
	BOOL32			bVidWaitForIFrm;		/*视频是否等I帧*/
	BOOL32			bOnlyKeyFrame;			/*视频是否只解I帧*/
	u32				dwAudioDecType;			/*音频解码类型*/
	u32				dwChannel;				/*音频通道*/
	u32				dwSample;				/*音频采样率*/
	u32				dwSamplebit;			/*音频采样位数*/
	EDecodeFluency	eDecodeFly;				/*视频流畅度*/
	u32				dwMaxImgW;				/*解码码流的宽度最大值，默认2048*1536*/
	u32				dwMaxImgH;				/*解码码流的高度最大值*/
	u32				dwReverse[2];				/*预留*/
}TKdvDecStatus;

//解码器统计信息
typedef struct KdvDecStatis
{
	u32		byVideoFrameRate;			/*视频解码帧率*/
	u32		dwVideoBitRate;				/*视频解码码率*/
	u32		dwAudioBitRate;				/*语音解码码率*/
	u32		dwVideoRecvFrame;			/*收到的视频帧数*/
	u32		dwAudioRecvFrame;			/*收到的语音帧数*/
	u32		dwVideoLoseFrame;			/*丢失的视频帧数*/
	u32		dwAudioLoseFrame;			/*丢失的语音帧数*/
	u32		dwVideoLoseRatio;			/*视频丢失率,单位是%*/
	u32		dwAudioLoseRatio;			/*音频丢失率,单位是%*/
	u32		dwPackError;				/*乱帧数*/
	u32		dwIndexLose;				/*序号丢帧*/
	u32		dwSizeLose;					/*大小丢帧*/
	u32		dwFullLose;					/*满丢帧*/	
	u32		dwAvrVideoBitRate;			/*1分钟内视频解码平均码率*/
	u32		dwAvrAudioBitRate;			/*1分钟内语音解码平均码率*/
	u32		dwReverse[2];				/*预留*/
}TKdvDecStatis;

typedef enum emEventType
{
	EVENTTYPE_ENCCHANGE = 0,			//码流分辨率改变
	EVENTTYPE_CHECK,					//码流校验结果改变
	EVENTTYPE_FILEEND,					//文件播放结束
	EVENTTYPE_UNKNOWN=255				//其他
} eEventType;

typedef struct __KDWAVEFORMATEX
{
	/* format type */
	u16    wFormatTag;
	/* number of channels (i.e. mono, stereo...) */
	u16    nChannels;
	/* sample rate */
	u32   nSamplesPerSec;
	/* for buffer estimation */
	u32   nAvgBytesPerSec;
	/* block size of data */
	u16    nBlockAlign;
	/* Number of bits per sample of mono data */
	u16    wBitsPerSample;
	/* The count in bytes of the size of extra information (after cbSize) */
	u16    cbSize;
} KDWAVEFORMATEX;

typedef struct tagEventInfo
{
	eEventType	emEvent;					// work
	u32			dwWidth;
	u32			dwHeight;
	long		nCheckBsVal;				// 0表示校验非法，1表示校验正确，只有校验结果发生改变后才回调
	u32			dwReverse[2];				//预留
} EVENTINFO;

struct MP3_WAVEFORMATEX
{
	KDWAVEFORMATEX wfx;
	u8 byRawData[12];
};

typedef struct tagKDRGBQUAD {
	unsigned char    rgbBlue;
	unsigned char    rgbGreen;
	unsigned char    rgbRed;
	unsigned char    rgbReserved;
} KDRGBQUAD;
#define MAX_NETSND_DEST_NUM 5 
#pragma pack(push) //保存对齐状态
#pragma pack(2)//设定为4字节对齐
typedef struct tagKDBITMAPFILEHEADER {
	unsigned short	bfType;
	unsigned long	bfSize;
	unsigned short	bfReserved1;
	unsigned short	bfReserved2;
	unsigned long	bfOffBits;
} KDBITMAPFILEHEADER, *PKDBITMAPFILEHEADER;
#pragma pack(pop)//恢复对齐状态

typedef struct tagKDBITMAPINFOHEADER{
	unsigned long		biSize;
	long				biWidth;
	long				biHeight;
	unsigned short		biPlanes;
	unsigned short		biBitCount;
	unsigned long		biCompression;
	unsigned long		biSizeImage;
	long				biXPelsPerMeter;
	long				biYPelsPerMeter;
	unsigned long		biClrUsed;
	unsigned long		biClrImportant;
} KDBITMAPINFOHEADER, *PKDBITMAPINFOHEADER;

typedef struct tagPlayFileInfo
{
	u64				qwTotalSize;			//文件大小
	u64				qwCreateDate;			//文件创建时间
	u64				qwTotalFrameNum;		//文件FrameNum
	u32				dwTotalTime;			//文件时间毫秒单位
	u32				dwReverse[2];			//预留
} TPlayFileInfo;

typedef struct tagFileStreamInfo
{
	BOOL32			bAudio;					//是否音频流
	u32				dwWidth;				//码流宽度
	u32				dwHeight;				//码流高度
	u32				byStreamId;				//流序号
	u32				byMediaType;			//媒体类型
	u32				dwChannel;				//音频采样通道
	u32				dwSample;				//音频采样率
	u32				dwSamplebit;			//音频采样位数
	u32				dwReverse[2];			//预留
} TPlayFileStreamInfo ;

#define MAX_FILE_STREAM		3	

typedef struct tagPlayFileStatus
{
	u32					dwCurrentPlayPos;		//当前播放位置，单位为毫秒
	u32					byPlayMode;				//播放模式，正常，快放，慢放
	u32					byPlayRate;				//播放速度
	u32					byPlayState;			//播放状态，停止、开始、暂停
	u32					byStreamNum;			//文件中所有流的个数
	u32					dwVFps;					//视频帧率
	u32					dwAFps;					//音频帧率
	TPlayFileStreamInfo	tFileStreamInfo[MAX_FILE_STREAM];
	u32					dwReverse[2];			//预留
} TPlayFileStatus;

typedef void (*PFRAMECALLBACK)( PKDFrameInfo pFrame, void* pContext);
typedef void (*PRAWCALLBACK)(PKDTRawData pFrmHdr, void* pContext);		//接收的码流进行回调
typedef void (*PGETAUDIOPOWER)(u32 byAudioPower, void* pContext);
typedef void (*PSTATICPICCALLBACK)(u8 *pBuf, KDBITMAPINFOHEADER* pHead, void* pContext);
typedef void (*PDATAINFOCALLBACK)(u8 *pDataBuf, s32 nDataSize ,s32 nDatatype, BOOL32 bEnableCb, void* pContext);
typedef void (*PEVENTERRORCALLBACK)( EVENTERRORINFO *pEventInfo, void* pContext);
typedef void (*PEVENTCALLBACK)( EVENTINFO *pEventInfo, void* pContext);


typedef struct Callback
{
	PRAWCALLBACK	pAudioRawCallback;			//音频编码回调
	PFRAMECALLBACK	pAudioFrameCallback;		//音频解码回调
	PFRAMECALLBACK	pAudioTransCallback;		//音频转码回调
	PRAWCALLBACK	pVideoRawCallback;			//视频编码回调
	PFRAMECALLBACK	pVideoFrameCallback;		//视频解码回调
	PFRAMECALLBACK	pVideoTransCallback;		//视频转码回调
} TCallBack;

typedef struct CallbackContont
{
	void*	pAudioRawContont;		//音频编码用户数据
	void*	pAudioFrameContont;		//音频解码用户数据
	void*	pAudioTransContont;		//音频转码用户数据
	void*	pVideoRawContont;		//视频编码用户数据
	void*	pVideoFrameContont;		//视频解码用户数据
	void*	pVideoTransContont;		//视频转码用户数据
} TContont;

//台标融入码流的相关信息设置
typedef struct tagLogoParam
{
	u32			dwWidth;				/*台标宽度*/
	u32			dwHeight;				/*台标高度*/
	ELogoType	eLogoType;				/*台标类型*/
	u8*			pBuf;					/*台标数据*/
	u32			dwBuflen;				/*台标数据长度*/
	u32			dwLeft;					/*台标位置*/
	u32			dwTop;					/*台标位置*/
	u32			dwRight;				/*台标位置*/
	u32			dwbotton;				/*台标位置*/
	u32			byClarity;				/*台标透明度(0-255) */
	u32			dwReverse[2];			/*预留*/
}TLogoParam;
KDCLIENT_API u32 GetClientVersion();


//重传参数
typedef struct tagNetRSParam
{
	u32			wFirstTimeSpan;				//第一个重传检测点
	u32			wSecondTimeSpan;			//第二个重传检测点
	u32			wThirdTimeSpan;				//第三个重传检测点
	u32			wRejectTimeSpan;			//过期丢弃的时间跨度
} TNetRSParam;



//编码器状态
typedef struct KdvEncStatus
{
	u32				dwVideoBufLen;			/*视频缓冲长度*/
	TVideoEncParam	tVideoEncParam;			/*视频编码参数*/
	TCbbNetSndParam	tVideoSendAddr;			/*视频发送地址*/
	u32				dwVideoCpuId; 			/*视频处理的CPU标识*/
	u32				dwVideoThreadPrority; 	/*视频处理线程优先级*/
	BOOL32			bNetSndAudioStart;		/*是否开始音频发送*/
	u32				dwAudioBufLen;			/*音频缓冲长度*/
	TAudioEncParam	tAudioEncParam;			/*音频编码参数*/
	TCbbNetSndParam	tAudioSendAddr;			/*音频发送地址*/
	u32				dwAudioSend;			/*已发送的音频包数*/
	u32				dwAudioCpuId; 			/*音频处理的CPU标识*/
	u32				dwAudioThreadPrority; 	/*音频处理线程优先级*/
	u32				dwAudioCapType; 		/*音频源获取方式AUDIO_CAP或AUDIO_REV*/
	BOOL32			bAudioAecStart;			/*是否开始AEC*/
	u32				dwAudioCapChannel;		/*音频采集声道数*/
	u32				dwAudioCapSample;		/*音频采样率*/
	u32				dwAudioCapBitPerSamle;	/*音频采样位宽*/
	u32				dwReverse[2];			/*预留*/
}TKdvEncStatus;
class KDCLIENT_API CKdvDecoder
{
public:
	CKdvDecoder(void);
	CKdvDecoder(u32 dwMaxImgW, u32 dwMaxImgH);
	virtual ~CKdvDecoder(void);

public:
	virtual u32 	Open(const char* szUri1, const char* szUri2 = NULL)=0;
	virtual u32 	Close()=0;
	u32 	Start(BOOL32 bReCreateDecoder = FALSE);
	u32 	Stop();
	u32 	SetDisplayRegion(u32 nRegionNum, KDRECT* pSrcRect, void* hDestWnd, BOOL bEnable);
	u32 	SetCallBack(const TCallBack* ptCallback, const TContont* ptContext);
	u32 	SetEventErrorCallback(PEVENTERRORCALLBACK pFun, void* pContext);
	u32 	SaveSnapPic(const u8* pszFileName, EImageType ePicType,	void *hWnd = NULL) ;
	u32 	RedrawLastFrame();
	u32 	StartLocalRecord(u8* szRecFileName,	s32 nRecodeType);
	u32 	StopLocalRecord();

	u32 	GetDecoderStatus(TKdvDecStatus &tKdvDecStatus ) ;
	u32 	GetDecoderStatis(TKdvDecStatis &tKdvDecStatis );
	u32 	ThreadBoundCPU(u32 nCpuNum);
	u32 	SetVideoDecPriority (s32 nPriority);
	u32 	DenoiseFilter(BOOL32 bEnable, u32 level = 3);
	u32 	SetDrawRotationAngle(u32 dwDrawRotationAngle);
	u32 	ClearWindow(EClearWindowMode eMode);
	u32 	SetWaitForVB(BOOL32 bEnable);
	u32 	SetOnlyKeyFrame(BOOL32 bKeyFrame);
	u32 	SetColor(u32 nRegionNum, u32 nBrightness, u32 nContrast, u32 nSaturation, u32 nHue);
	u32 	GetColor(u32 nRegionNum, u32* pBrightness, u32* pContrast, u32* pSaturation, u32* pHue);
	u32 	SetOsdParam(TLogoParam* ptOsdParam, BOOL32 bOsd);
	u32 	SetVideoDecType(DecoderType eDecType);
	u32 	GetVideoDecType(DecoderType &eDecType);
	u32 	SetBothSynchronous(BOOL32 bSynchronous);
	s32 	GetFileHeadLen();
	u32 	SetCheckBsVal(BOOL32 bEnable);
	u32 	SetSnapPicCallBack(PSTATICPICCALLBACK pCallBack, void* pContext);
	u32 	SetDrawCallBack(PDRAWCALLBACK pFun, void* pContext);
	u32 	SetOutputAudioPowerCB(PGETAUDIOPOWER pGetOutputAudioPowerCB, void* pContext);
	u32 	SetTransDataCallBack(PDATAINFOCALLBACK pFun, void* pContext);
	u32 	SetEventCallBack(PEVENTCALLBACK pFun, void* pContext);
	u32 	SetProSamplesPerSec(BOOL32 bEnable, u32 nProSamplesPerSec = 48000);
	u32 	GetAudioInformation(KDWAVEFORMATEX* pwfSrc, KDWAVEFORMATEX* pwfDes);
	u32 	SetAudioVolume(u32 byVolume);
	u32 	GetAudioVolume(u32 &pbyVolume);
	u32 	SetSysVolume(u32 byVolume);
	u32 	GetSysVolume(u32 &pbyVolume);
	u32 	GetAudioDriver(void* lpcstrDescription[16]);
	u32 	SetAudioDriver(void* lpcstrDescription);
	u32 	SetAudioMutex( BOOL bMutex);

private:
	char	szRevert[8*1024];
};

class KDCLIENT_API CKdvStreamDecoder :
	public CKdvDecoder
{
public:
	CKdvStreamDecoder(void);
	CKdvStreamDecoder(u32 dwMaxImgW, u32 dwMaxImgH);
	virtual ~CKdvStreamDecoder(void);

public:
	u32 	Open(const char* szUri1, const char* szUri2 = NULL);
	u32 	Close();
	u32 	SetFluency(EDecodeFluency eFluency);
	u32 	SetStreamMode(s32 nmode);
	u32 	FreezeVideo(BOOL32 bFreeze);
	u32 	SetNetFeedbackParam(TNetRSParam* ptNetRSParam1, TNetRSParam* ptNetRSParam2=NULL,BOOL32 bRepeatSnd = FALSE);
	u32 	SetActivePT( u32 byRmtActivePT, u32 byRealPT);
	u32 	SetTimeStampSample(u32 dwSample);
	u32		SetAudioInfo(u32 dwChannels, u32 dwSamplesPerSec, u32 dwBitsPerSample);
	u32 	SetNalInfo(u8* pNal, u32 dwNalLength);
	u32 	SetDecFrame(BOOL32 bSetFrame, u32 dwFrameRate);
/*
	u32 	FastPlay(u32 rate){return 0;}
	u32 	SlowPlay(u32 rate){return 0;}
	u32 	PauseFile(){return 0;}
	u32 	ResumeFile(){return 0;}
	u32 	SingleFrame(u32* pdwFrameTime = NULL, u32 dwFrameNum = 1){return 0;}
	u32 	SingleFrameBack(u32 dwFrameNum = 1){return 0;}
	u32 	GetFileInfo(TPlayFileInfo *ptFileInfo){return 0;}
	u32 	SetPlayTime(u32 nTime){return 0;}
	u32 	GetPlayTime(){return 0;}
	*/
};

class KDCLIENT_API CKdvFileDecoder :
	public CKdvDecoder
{
public:
	CKdvFileDecoder(void);
	CKdvFileDecoder(u32 dwMaxImgW, u32 dwMaxImgH);
	virtual ~CKdvFileDecoder(void);

public:
	u32 	Open(const char* szUri1, const char* szUri2 = NULL);
	u32 	Close();
	u32 	SetPlayTime(u32 nTime);
	u32 	GetPlayTime();
	u32 	SetPlayPos(float fPos);
	float	GetPlayPos();
	u32 	GetPlayedFrames();
	u32		GetTotalTime();
	u32		GetTotalFrame();
	u32 	PauseFile();
	u32 	ResumeFile();
	u32 	SingleFrame(u32* pdwFrameTime = NULL, u32 dwFrameNum = 1);
	u32 	SingleFrameBack(u32 dwFrameNum = 1);
	u32 	SetSingleFrameMode(EMemcoryType eSingleFrameMode);
	u32 	FastPlay(u32 rate);
	u32 	SlowPlay(u32 rate);
	u32 	GetFileInfo(TPlayFileInfo *ptFileInfo);
	u32 	GetPlayStatus(TPlayFileStatus *ptPlayFileStatus);
	u32 	RevertPlay(BOOL32 bRevertPlay);
	u32 	GetUserData(u8* pDataBuffer, u32 dwBufferSize);
	u32 	GetUserDataLength(u32* pdwBufferSize);
	u32 	FileGetUserData(const u8* pFilePath, u8* pDataBuffer, u32 dwBufferSize);
	u32 	FileGetUserDataLength(const u8* pFilePath, u32* pdwBufferSize);
	u32 	GetKeyFramePos( s32 nValue, s32 nType, PKD_FRAME_POS pFramePos);
	u32 	GetNextKeyFramePos(s32	nValue, s32 nType, PKD_FRAME_POS pFramePos);
};


class KDCLIENT_API CKdvEncoder
{
public:
	CKdvEncoder(void);
	virtual ~CKdvEncoder(void);

public:
	u32 	CreateAudioEncoder(const TAudioEncoder *ptAudioEncoder = NULL);
	u32 	DestroyAudioEncoder();
	u32 	SetNetFeedbackAudioParam(u16 wBufTimeSpan, BOOL32 bRepeatSnd = FALSE);
	u32 	SetAudioEncParam(const TAudioEncParam* ptAudioEncParam = NULL);
	u32 	GetAudioEncParam(TAudioEncParam &tAudioEncParam);
	u32 	SetSinkParam(const char* szSinkUri[MAX_NETSND_DEST_NUM] );
	u32 	Start (u32  dwSSRC = 0);
	u32 	Stop ();
	u32 	GetEncoderStatus(TKdvEncStatus &tKdvEncStatus);
	u32 	GetEncoderStatis(TKdvEncStatis &tKdvEncStatis);
	u32 	SetInputAudioPowerCB(PGETAUDIOPOWER pGetInputAudioPowerCB, void* pContext);
	u32 	SetCallBack(TCallBack tCallback, TContont tContext);
	u32 	SetAudioVolume(u32 byVolume);
	u32 	GetAudioVolume(u32 &byVolume);
	u32 	SetAudioDumb(BOOL32 bDumb);
	u32 	GetAudioDumb(BOOL32 &bDumb);
	u32 	SetAudioAec(BOOL32 bSetAec);

private:
	char	szReverd[8*1024];
};
#endif
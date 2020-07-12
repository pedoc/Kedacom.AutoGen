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

//������
typedef enum __tEDecodeFluency
{
	FLUENCY_REAL_TIME = 0,				/*ʵʱ������*/
	FLUENCY_NORMAL,						/*һ��*/
	FLUENCY_OPTIMAL,					/*����������*/
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
	PROTOCOL_RTP_UDP,					//(�����Ҫ����IP���жϳ��Ƿ�Ϊ�ಥ���ߵ���
	PROTOCOL_RTSP_HTTP = 3,
	PROTOCOL_RTSP_TCP,
	PROTOCOL_RTSP_UDP,
	PROTOCOL_RTMP,
	PROTOCOL_UNKNOWN=255
} ENetProtocol;
#define MAX_USERDATA_LEN	16
#define MAX_NETSND_DEST_NUM	5
//����ģʽ
typedef enum
{
	CLEARWINDOW_MODE_FREEZON = 0,		/*ͼ�񶳽�*/
	CLEARWINDOW_MODE_COLORBAR,			/*��ʾ�߲���*/
	CLEARWINDOW_MODE_BLUESCREEN,		/*����*/
	CLEARWINDOW_MODE_BLACKSCREEN,		/*����*/
	CLEARWINDOW_MODE_NULL,				/*������ʾ��������*/
	CLEARWINDOW_MODE_MAX
}EClearWindowMode;

//OSD��ͼ����
typedef enum __tELogoType
{
	LOGO_BMP32 = 0,						//BMP32����
	LOGO_YUV420,						//YUV420����
} ELogoType;

//��֡����ģʽ
typedef enum __tEMemcoryType
{
	SINGLEFRAME_CPU = 0,				//ʹ��CPUģʽ��Ĭ��ģʽ
	SINGLEFRAME_MEM,					//ʹ���ڴ�ģʽ
} EMemcoryType;

//�ص�����
typedef enum emWorkType
{
	WORKTYPE_RECEIVE = 0,				//��������
	WORKTYPE_SEND = 0,					//��������
	WORKTYPE_RECORDER,					//¼��ʧ��
	WORKTYPE_SNAP, 						//ץ��ʧ��
	WORKTYPE_UNKNOWN=255				//����
} eWorkType;

//����ģʽ
typedef enum emDecoderType
{
	VID_GPU = 0,						//Ӳ���뷽ʽ
	VID_SOFTDEC,						//�����
}DecoderType;

//����ȼ�
typedef enum emCodecProfile
{
	PROFILE_AVC_BASELINE = 0,				//baseline
	PROFILE_AVC_MAIN,						//main-profile
	PROFILE_AVC_HIGH,						//high-profile
	PROFILE_AVC_UNKNOWN=255					//����
} eCodecProfile;

typedef enum emTargetUsage
{
	TARGETUSAGE_AVC_QUILITY = 0,				//��������
	TARGETUSAGE_AVC_SPEED,						//�ٶ�����
	TARGETUSAGE_AVC_UNKNOWN=255					//����
} eTargetUsage;

// typedef enum emStreamType
// {
// 	STREAMTYPE_ES = 0,						//ES��
// 	STREAMTYPE_PS,							//PS��
// 	STREAMTYPE_TS,							//TS��
// 	STREAMTYPE_UNKNOWN=255					//����
// } eStreamType;

typedef enum emOpenType
{
	OPENTYPE_LOCALFILE = 1,					//����¼��
	OPENTYPE_NETRV,							//����Դ
	OPENTYPE_NETSD,							//���緢��
	OPENTYPE_NETDOWN,						//Զ��¼������
	OPENTYPE_FILERECORD,					//¼�񱣴�
	OPENTYPE_UNKNOWN=255					//����
} eOpenType;




//��Ƶ�������
typedef struct AudioEncParam
{
	u32		dwSizeOfLen;				/*�ṹ�峤��*/
	u32		dwEncType;					/*��Ƶ��������*/
	u32		dwChannel;					/*��Ƶ�ɼ�������*/
	u32		dwSample;					/*��Ƶ������*/
	u32		dwBitPerSamle;				/*��Ƶ����λ��*/
	void*	pDriver;					/*��Ƶ����*/
	u32		dwBitRate;					/*��Ƶ����*/
	u32		dwReverse[2];				/*Ԥ��*/
}TAudioEncParam;
/*�������*/
typedef struct tagNetSession
{    
	u32   dwRTPAddr;  //RTP��ַ(������)
	u16   wRTPPort;   //RTP�˿�(������)
	u32   dwRTCPAddr; //RTCP��ַ(������)
	u16   wRTCPPort;  //RTCP�˿�(������)
	u32   dwRtpUserDataLen;   //Rtp�û����ݳ���,�����ڴ��������,��Ҫ��ÿ��udpͷǰ��ӹ̶�ͷ���ݵ����
	u8    abyRtpUserData[MAX_USERDATA_LEN]; //�û�����ָ��
	u32   dwRtcpUserDataLen;   //Rtcp�û����ݳ���,�����ڴ��������,��Ҫ��ÿ��udpͷǰ��ӹ̶�ͷ���ݵ����
	u8    abyRtcpUserData[MAX_USERDATA_LEN]; //�û�����ָ��
}TNetSession;
//��Ƶ����������
typedef struct AudioEncoder
{
	s32		nPriority;				/*��Ƶ�����߳����ȼ�*/
	u32		dwCpuId;				/*��Ƶ�����CPU��ʶ*/
}TAudioEncoder;

//����Դͼ��Ľṹ��Ϣ
typedef struct
{
	u32	dwSrcWidth;					//Դͼ��Ŀ��
	u32	dwSrcHeight;				//Դͼ��ĸ߶�
	u32	dwSrcYUVType;				//Դͼ���ͼ�����ͣ�ΪYUV420����YUV422
	u32	dwSrcInterlace;				//Դͼ���֡������

	u32	dwSrcTopCutLine;			//����Ĳü���������ӦΪ2�ı���
	u32	dwSrcBottomCutLine;			//����Ĳü���������ӦΪ2�ı���
	u32	dwSrcLeftCutPoint;			//��ߵĲü��ĵ�����ӦΪ2�ı���
	u32	dwSrcRightCutPoint;			//�ұߵĲü��ĵ�����ӦΪ2�ı���

	u32 u32Reserved;
}TVideoResizerSrc;

//Ŀ��ͼ��Ľṹ����
	typedef struct
{
	u32	dwDstWidth;					//Ŀ��ͼ��Ŀ��
	u32	dwDstHeight;				//Ŀ��ͼ��ĸ߶�
	u32	dwDstYUVType;				//Ŀ��ͼ���ͼ�����ͣ�ΪYUV420����YUV422
	u32	dwDstInterlace;				//Ŀ��ͼ���֡������

	u32	dwDstTopCutLine;			//����Ĳü���������ӦΪ2�ı���
	u32	dwDstBottomCutLine;			//����Ĳü���������ӦΪ2�ı���
	u32	dwDstLeftCutPoint;			//��ߵĲü��ĵ�����ӦΪ2�ı���
	u32	dwDstRightCutPoint;			//�ұߵĲü��ĵ�����ӦΪ2�ı���

	u32	dwTopFillLine;				//�������ӵ���ɫ������ӦΪ2�ı���
	u32	dwBottomFillLine;			//�������ӵ���ɫ������ӦΪ2�ı���
	u32	dwLeftFillPoint;			//��ߵ���ӵ���ɫ������ӦΪ2�ı���
	u32	dwRightFillPoint;			//�ұߵ���ӵ���ɫ������ӦΪ2�ı���

	u32	dwYColor;
	u32	dwUColor;
	u32	dwVColor;					//���ı�Ե����ɫ��Ŀǰ��ɫΪY:0x01,UV:0x80,��ɫ��ȫ�㣬Ҳ���Կ������ó�RGB��������

	u32 u32Reserved;
}TVideoResizerDst;
//���緢�Ͳ���
typedef struct tagCbbNetSndParam
{
	u32			dwNum;										//ʵ�ʵ�ַ����
	TNetSession	tLocalNet;									//���ص�ַ��
	u32			dwProtoType[MAX_NETSND_DEST_NUM];			//����Э��
	TNetSession	tRemoteNet[MAX_NETSND_DEST_NUM];			//Զ�˵�ַ��
}TCbbNetSndParam;
//��Ƶ�������
typedef struct  VideoEncParam
{
	u32					dwSizeOfLen;			/*�ṹ�峤��*/
	TVideoResizerSrc*	ptVideoEncSrc; 			/*��Ƶ�ü������Ų���*/
	TVideoResizerDst*	ptVideoEncDst;
	u32					dwEncType;				/*��Ƶ��������*/
	u32					dwBitRate; 				/*��Ƶ��������*/
	u32					dwFrameRate; 			/*��Ƶ����֡��*/
	DecoderType			emDectype; 				/*��Ƶ����CPU����GPU*/
	eCodecProfile		dwProfile;				/*��Ƶ����ȼ�*/
	eTargetUsage		dwTargetusage;			/*��Ƶ�������ȼ����ٶ����Ȼ���������*/
	u32					dwInterval;				/*��Ƶ����I֡���*/
	u32					nSlices;				/*��Ƶ����Slices����*/
	void*				pDriver; 				/*��Ƶ����*/
	u32					dwReverse[2];			/*Ԥ��*/
} TVideoEncParam;

//��Ƶ����������
typedef struct VideoEncoder
{
	s32		nPriority;				/*��Ƶ�����߳����ȼ�*/
	u32		dwCpuId;				/*��Ƶ�����CPU��ʶ*/
}TVideoEncoder;


//������ͳ����Ϣ
typedef struct KdvEncStatis
{
	u32		dwVideoEncNum;				/*��Ƶ�ܱ�����*/
	u32		dwVideoFrameRate;			/*��Ƶ֡��*/
	u32		dwVideoBitRate;				/*��Ƶ�����ٶ�*/
	u32		dwVideoPackLose;			/*��Ƶ��֡��*/
	u32		dwVideoPackError;			/*��Ƶ��֡��*/
	u32		dwAvrVideoBitRate;			/*1��������Ƶ����ƽ������*/
	u32		dwAudioEncNum;				/*��Ƶ�ܱ�����*/
	u32		dwAudioBitRate;				/*���������ٶ�*/
	u32		dwAudioPackLose;			/*������֡��*/
	u32		dwAudioPackError;			/*������֡��*/
	u32		dwAvrAudioBitRate;			/*1��������������ƽ������*/
	u32		dwReverse[2];				/*Ԥ��*/
}TKdvEncStatis;

typedef struct tagEventErrorInfo
{
	u32			dwErrorCode; 			// error code
	eWorkType	emWork;					// work
	u32			dwReverse[2];				//Ԥ��
} EVENTERRORINFO;
#define MAX_USERDATA_LEN    16   //����û����ݳ���


/*�����������*/
/*��������pxy����, ���ص�ַ�е�m_wUserLen��ʾ����ʱ��Ҫȥ����ͷ����*/
// typedef struct tagLocalNetParam
// {
// 	TNetSession m_tLocalNet;
// 	u32         m_dwRtcpBackAddr;//RTCP�ط���ַ(������)
// 	u16         m_wRtcpBackPort; //RTCP�ط��˿ڣ�������
// }TLocalNetParam;


//������״̬
typedef struct KdvDecStatus
{
	BOOL32			bDecStart;				/*�Ƿ�ʼ����Ƶ����*/
	u32				dwAudioBufLen;			/*��Ƶ���Ż��峤��*/
	u32				dwVideoBufLen;			/*��Ƶ���Ż��峤��*/
	TLocalNetParam	tAudioRcvAddr;			/*��Ƶ���ص�ַ*/
	TLocalNetParam	tVideoRcvAddr;			/*��Ƶ���ص�ַ*/
	u32				dwVideoDecType;			/*��Ƶ��������*/
	u32				dwDecdWidth;			/*�����Ŀ�*/
	u32				dwDecdHeight;			/*�����ĸ�*/
	void*			hPlayWnd;				/*���ھ��*/
	BOOL32			bSetWndReturn;			/*���ھ�������Ƿ�ɹ�*/
	BOOL32			bVidWaitForIFrm;		/*��Ƶ�Ƿ��I֡*/
	BOOL32			bOnlyKeyFrame;			/*��Ƶ�Ƿ�ֻ��I֡*/
	u32				dwAudioDecType;			/*��Ƶ��������*/
	u32				dwChannel;				/*��Ƶͨ��*/
	u32				dwSample;				/*��Ƶ������*/
	u32				dwSamplebit;			/*��Ƶ����λ��*/
	EDecodeFluency	eDecodeFly;				/*��Ƶ������*/
	u32				dwMaxImgW;				/*���������Ŀ�����ֵ��Ĭ��2048*1536*/
	u32				dwMaxImgH;				/*���������ĸ߶����ֵ*/
	u32				dwReverse[2];				/*Ԥ��*/
}TKdvDecStatus;

//������ͳ����Ϣ
typedef struct KdvDecStatis
{
	u32		byVideoFrameRate;			/*��Ƶ����֡��*/
	u32		dwVideoBitRate;				/*��Ƶ��������*/
	u32		dwAudioBitRate;				/*������������*/
	u32		dwVideoRecvFrame;			/*�յ�����Ƶ֡��*/
	u32		dwAudioRecvFrame;			/*�յ�������֡��*/
	u32		dwVideoLoseFrame;			/*��ʧ����Ƶ֡��*/
	u32		dwAudioLoseFrame;			/*��ʧ������֡��*/
	u32		dwVideoLoseRatio;			/*��Ƶ��ʧ��,��λ��%*/
	u32		dwAudioLoseRatio;			/*��Ƶ��ʧ��,��λ��%*/
	u32		dwPackError;				/*��֡��*/
	u32		dwIndexLose;				/*��Ŷ�֡*/
	u32		dwSizeLose;					/*��С��֡*/
	u32		dwFullLose;					/*����֡*/	
	u32		dwAvrVideoBitRate;			/*1��������Ƶ����ƽ������*/
	u32		dwAvrAudioBitRate;			/*1��������������ƽ������*/
	u32		dwReverse[2];				/*Ԥ��*/
}TKdvDecStatis;

typedef enum emEventType
{
	EVENTTYPE_ENCCHANGE = 0,			//�����ֱ��ʸı�
	EVENTTYPE_CHECK,					//����У�����ı�
	EVENTTYPE_FILEEND,					//�ļ����Ž���
	EVENTTYPE_UNKNOWN=255				//����
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
	long		nCheckBsVal;				// 0��ʾУ��Ƿ���1��ʾУ����ȷ��ֻ��У���������ı��Żص�
	u32			dwReverse[2];				//Ԥ��
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
#pragma pack(push) //�������״̬
#pragma pack(2)//�趨Ϊ4�ֽڶ���
typedef struct tagKDBITMAPFILEHEADER {
	unsigned short	bfType;
	unsigned long	bfSize;
	unsigned short	bfReserved1;
	unsigned short	bfReserved2;
	unsigned long	bfOffBits;
} KDBITMAPFILEHEADER, *PKDBITMAPFILEHEADER;
#pragma pack(pop)//�ָ�����״̬

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
	u64				qwTotalSize;			//�ļ���С
	u64				qwCreateDate;			//�ļ�����ʱ��
	u64				qwTotalFrameNum;		//�ļ�FrameNum
	u32				dwTotalTime;			//�ļ�ʱ����뵥λ
	u32				dwReverse[2];			//Ԥ��
} TPlayFileInfo;

typedef struct tagFileStreamInfo
{
	BOOL32			bAudio;					//�Ƿ���Ƶ��
	u32				dwWidth;				//�������
	u32				dwHeight;				//�����߶�
	u32				byStreamId;				//�����
	u32				byMediaType;			//ý������
	u32				dwChannel;				//��Ƶ����ͨ��
	u32				dwSample;				//��Ƶ������
	u32				dwSamplebit;			//��Ƶ����λ��
	u32				dwReverse[2];			//Ԥ��
} TPlayFileStreamInfo ;

#define MAX_FILE_STREAM		3	

typedef struct tagPlayFileStatus
{
	u32					dwCurrentPlayPos;		//��ǰ����λ�ã���λΪ����
	u32					byPlayMode;				//����ģʽ����������ţ�����
	u32					byPlayRate;				//�����ٶ�
	u32					byPlayState;			//����״̬��ֹͣ����ʼ����ͣ
	u32					byStreamNum;			//�ļ����������ĸ���
	u32					dwVFps;					//��Ƶ֡��
	u32					dwAFps;					//��Ƶ֡��
	TPlayFileStreamInfo	tFileStreamInfo[MAX_FILE_STREAM];
	u32					dwReverse[2];			//Ԥ��
} TPlayFileStatus;

typedef void (*PFRAMECALLBACK)( PKDFrameInfo pFrame, void* pContext);
typedef void (*PRAWCALLBACK)(PKDTRawData pFrmHdr, void* pContext);		//���յ��������лص�
typedef void (*PGETAUDIOPOWER)(u32 byAudioPower, void* pContext);
typedef void (*PSTATICPICCALLBACK)(u8 *pBuf, KDBITMAPINFOHEADER* pHead, void* pContext);
typedef void (*PDATAINFOCALLBACK)(u8 *pDataBuf, s32 nDataSize ,s32 nDatatype, BOOL32 bEnableCb, void* pContext);
typedef void (*PEVENTERRORCALLBACK)( EVENTERRORINFO *pEventInfo, void* pContext);
typedef void (*PEVENTCALLBACK)( EVENTINFO *pEventInfo, void* pContext);


typedef struct Callback
{
	PRAWCALLBACK	pAudioRawCallback;			//��Ƶ����ص�
	PFRAMECALLBACK	pAudioFrameCallback;		//��Ƶ����ص�
	PFRAMECALLBACK	pAudioTransCallback;		//��Ƶת��ص�
	PRAWCALLBACK	pVideoRawCallback;			//��Ƶ����ص�
	PFRAMECALLBACK	pVideoFrameCallback;		//��Ƶ����ص�
	PFRAMECALLBACK	pVideoTransCallback;		//��Ƶת��ص�
} TCallBack;

typedef struct CallbackContont
{
	void*	pAudioRawContont;		//��Ƶ�����û�����
	void*	pAudioFrameContont;		//��Ƶ�����û�����
	void*	pAudioTransContont;		//��Ƶת���û�����
	void*	pVideoRawContont;		//��Ƶ�����û�����
	void*	pVideoFrameContont;		//��Ƶ�����û�����
	void*	pVideoTransContont;		//��Ƶת���û�����
} TContont;

//̨�����������������Ϣ����
typedef struct tagLogoParam
{
	u32			dwWidth;				/*̨����*/
	u32			dwHeight;				/*̨��߶�*/
	ELogoType	eLogoType;				/*̨������*/
	u8*			pBuf;					/*̨������*/
	u32			dwBuflen;				/*̨�����ݳ���*/
	u32			dwLeft;					/*̨��λ��*/
	u32			dwTop;					/*̨��λ��*/
	u32			dwRight;				/*̨��λ��*/
	u32			dwbotton;				/*̨��λ��*/
	u32			byClarity;				/*̨��͸����(0-255) */
	u32			dwReverse[2];			/*Ԥ��*/
}TLogoParam;
KDCLIENT_API u32 GetClientVersion();


//�ش�����
typedef struct tagNetRSParam
{
	u32			wFirstTimeSpan;				//��һ���ش�����
	u32			wSecondTimeSpan;			//�ڶ����ش�����
	u32			wThirdTimeSpan;				//�������ش�����
	u32			wRejectTimeSpan;			//���ڶ�����ʱ����
} TNetRSParam;



//������״̬
typedef struct KdvEncStatus
{
	u32				dwVideoBufLen;			/*��Ƶ���峤��*/
	TVideoEncParam	tVideoEncParam;			/*��Ƶ�������*/
	TCbbNetSndParam	tVideoSendAddr;			/*��Ƶ���͵�ַ*/
	u32				dwVideoCpuId; 			/*��Ƶ�����CPU��ʶ*/
	u32				dwVideoThreadPrority; 	/*��Ƶ�����߳����ȼ�*/
	BOOL32			bNetSndAudioStart;		/*�Ƿ�ʼ��Ƶ����*/
	u32				dwAudioBufLen;			/*��Ƶ���峤��*/
	TAudioEncParam	tAudioEncParam;			/*��Ƶ�������*/
	TCbbNetSndParam	tAudioSendAddr;			/*��Ƶ���͵�ַ*/
	u32				dwAudioSend;			/*�ѷ��͵���Ƶ����*/
	u32				dwAudioCpuId; 			/*��Ƶ�����CPU��ʶ*/
	u32				dwAudioThreadPrority; 	/*��Ƶ�����߳����ȼ�*/
	u32				dwAudioCapType; 		/*��ƵԴ��ȡ��ʽAUDIO_CAP��AUDIO_REV*/
	BOOL32			bAudioAecStart;			/*�Ƿ�ʼAEC*/
	u32				dwAudioCapChannel;		/*��Ƶ�ɼ�������*/
	u32				dwAudioCapSample;		/*��Ƶ������*/
	u32				dwAudioCapBitPerSamle;	/*��Ƶ����λ��*/
	u32				dwReverse[2];			/*Ԥ��*/
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
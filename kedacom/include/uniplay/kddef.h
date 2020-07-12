#ifndef KD_MEDIA_DEFINE_H
#define KD_MEDIA_DEFINE_H

#if defined(_WINDOWS) ||defined(WIN32)||defined(WIN64)
	#if !defined(_WINDOW)
		#define _WINDOW
	#endif
#endif

#ifndef _WINDOW
#define __stdcall
#endif

#ifdef _WINDOW
//#include <winsock2.h>
#include <windows.h>
#elif	defined(_LINUX_)||defined(__LINUX__)
//#include <unistd.h>
#ifndef BOOLTYPE
#define BOOLTYPE
typedef int 				 BOOL;
#endif
#ifndef TRUE
#define  TRUE                (1)
#endif
#ifndef FALSE
#define  FALSE               (0)
#endif
#define MAX_PATH				256
#endif
//#include <time.h>

#if (defined(_WINDOW)) 
#ifdef _STATIC_LIB_
#ifdef KDMEDIA_EXPORTS
#define KDMEDIA_API __declspec(dllexport)
#else
#define KDMEDIA_API
#endif
#else
#ifdef KDMEDIA_EXPORTS
#define KDMEDIA_API __declspec(dllexport)
#else
#define KDMEDIA_API __declspec(dllimport)
#endif
#endif
#define CALLMETHOD //__stdcall
#define CALLBACK   __stdcall
#else
#define CALLMETHOD

#ifndef CALLBACK
#define CALLBACK
#endif

#define KDMEDIA_API
//#define KDMEDIA_API extern "C"
#endif

#if (defined(_WINDOW)) 
//vc6û�и�ͷ�ļ�
#if _MSC_VER > 1200
#include <stdint.h>
#else
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;

typedef signed __int64       int64_t;
typedef unsigned __int64     uint64_t;
#endif
#endif
#ifdef _LINUX_
#include <stdint.h>
#endif
//#include "kdvdef.h"
#include "errorcode.h"

#define KD_MIN_WAVE_COEF -100
#define KD_MAX_WAVE_COEF 100

//Source buffer
#define KD_SOURCE_BUF_MAX	1024
#define KD_SOURCE_BUF_MIN	50

//Stream type
#define KD_STREAME_REALTIME 0
#define KD_STREAME_FILE	 1

#define MIN_WAVE_COEF					-100	//KD_AdjustWaveAudioʹ��
#define MAX_WAVE_COEF					100		//KD_AdjustWaveAudioʹ��
//Max display regions.
#define KD_MAX_DISPLAY_WND 16

#define KD_RUNINFO_VER 0x0001
#define KD_MAX_KDAP_DEVICENUM 6
#define TS_SYNC_RTP_ONLY 1// frame contains only RTP timestamp
#define TS_SYNC_NTP_UNIPLY 2//frame contains NTP timestamp , NTP calculated by uniplay

/* ����ģʽ */
typedef enum
{
	KD_CLEARWINDOW_MODE_FREEZON = 0,       /*ͼ�񶳽�*/
	KD_CLEARWINDOW_MODE_COLORBAR,          /*��ʾ�߲���*/
	KD_CLEARWINDOW_MODE_BLUESCREEN,	    /*����*/
	KD_CLEARWINDOW_MODE_BLACKSCREEN,       /*����*/
	KD_CLEARWINDOW_MODE_NULL,       /*������ʾ��������*/
	KD_CLEARWINDOW_MODE_MAX
}EKDClearWindowMode;
typedef struct tagKDRECT
{
	long    left;
	long    top;
	long    right;
	long    bottom;
} KDRECT;
#if	defined(__LINUX__)
typedef KDRECT 				 RECT;
#endif

typedef enum _KD_VIE_MODULES{
  KD_VIE_MODU_ADJ           = 0x00000001,  //ͼ���������
  KD_VIE_MODU_EHAN          = 0x00000002,  //�ֲ���ǿģ��
  KD_VIE_MODU_DEHAZE        = 0x00000004,  //ȥ��ģ��
  KD_VIE_MODU_DENOISE       = 0x00000008,  //ȥ��ģ��
  KD_VIE_MODU_SHARPEN       = 0x00000010,  //��ģ��
  KD_VIE_MODU_DEBLOCK       = 0x00000020,  //ȥ���˲�ģ��
  KD_VIE_MODU_CRB           = 0x00000040,  //ɫ��ƽ��ģ��
  KD_VIE_MODU_LENS          = 0x00000080   //��ͷ�������ģ��
}KD_VIE_MODULES;

typedef enum _KD_RESETBUF_MODULES{
	KD_RESETBUF_AUDDEC_DAT           = 0x00000000,	//��Ƶδ���뻺��
	KD_RESETBUF_VIDDEC_DAT,							//��Ƶδ���뻺��
	KD_RESETBUF_AUDPLY_PCM,							//��ƵPCM����
	KD_RESETBUF_VIDDEC_YUV							//��Ƶ���Ż���
}KD_RESETBUF_MODULES;


#define TARGET_NULL   1     //�ر����
#define TARGET_PRINT  2     //�����printf
#define TARGET_TELNET 4     //ͨ��osp�����telnet
#define TARGET_FILE   8      //ͨ��osp������ļ�
#define TARGET_LOGCAT 16     //ֻ��ANDROID����Ч��

#define UNILOG_ERR     1
#define UNILOG_WARNING 2
#define UNILOG_INFO    4
#define UNILOG_DEBUG   8

typedef enum  __KD_FRAME_TYPE
{
	KD_FRAME_VIDEO = 0,
	KD_FRAME_AUDIO,
    KD_FRAME_DIRECT_VIDEO,
    KD_FRAME_MEDIA_CODEC_VIDEO,
	KD_FRAME_AUDIO_RENDER, //��Ƶ���������ɼ�ʱָ�������ͣ�����������ɼ�,��WIN��֧��.
	KD_FRAME_UNKNOWN = 255,
}KD_FRAME_TYPE;

typedef enum __KD_DATA_TYPE
{
	KD_FRAME_VIDEO_I = 0,
	KD_FRAME_VIDEO_P,
	KD_FRAME_VIDEO_B,
}KD_DATA_TYPE;


typedef enum __tEImageType
{
	KD_PicFormat_BMP32 = 0,		//BMP32����
	KD_PicFormat_JPEG,				//JPEG����
	KD_PicFormat_JPEG_70,			//70%������JPEG����
	KD_PicFormat_JPEG_50,			//50%������JPEG����
	KD_PicFormat_JPEG_30,			//30%������JPEG����
	KD_PicFormat_JPEG_10,			//10%������JPEG����
	KD_PicFormat_BMP24,            //BMP24����
} EImageType;

typedef enum _tKDRenderType
{
	AudioRender_winmm = 0,
	AudioRender_Dsound,
	AudioRender_XAudio,
	AudioRender_oss,
	AudioRender_alsa,
	AudioRender_AudioCore,
	VideoRender_ddraw = 100,
	VideoRender_d3d,
	VideoRender_WOpenGl,
	VideoRender_X11,
	VideoRender_XOpenGl,
	VideoRender_AOpenGL,
	VideoRender_AppleGL,
	VideoRender_Quar2D,
	VideoRender_OpenGL_ES
}RenderType;

typedef enum	__PLAYKD_VIE_IMAGESTAB_MODE
{
	PLAYKD_IMAGESTAB_MODE_UPSCALE			= 0x00000001,
	PLAYKD_IMAGESTAB_MODE_BOXING			= 0x00000002,
}PLAYKD_VIE_IMAGESTAB_MODE;

typedef enum	__PLAYKD_VIE_IMAGEFRC_MODE
{
	PLAYKD_IMAGEFRC_MODE_CPU			= 0x00000001,
	PLAYKD_IMAGEFRC_MODE_GPU			= 0x00000002,
}PLAYKD_VIE_IMAGEFRC_MODE;

typedef struct
{
	int		denoiseLevel;			//ȥ��ǿ��[0, 255] ǿ������
	int		usmAmount;				//��ǿ��[0, 255] 
	int		ufrcVal;				//PLAYKD_VIE_IMAGEFRC_MODE,ֻʵ��PLAYKD_IMAGEFRC_MODE_GPU
	int		uimagestab;				//PLAYKD_VIE_IMAGESTAB_MODE
	//int		moduFlag;
	int		brightVal;				//���ȵ���ֵ��[-256, 255]	���ܿ�����PLAYKD_SetColor�ӿ�ʵ��
	int		contrastVal;			//�Աȶȵ���ֵ��[-256, 255]
	int		colorVal;				//���Ͷȵ���ֵ��[-256, 255]
	int		colorhue;				//ɫ�ȵ���ֵ��[-256, 255]
	//int		usmRadius;				//�񻯰뾶[1, 15]			��ʱ���ṩ
	//int		usmThreshold;			//����ֵ[0, 255]
}KD_VIE_MODUCONFIG,*PKD_VIE_MODUCONFIG;

typedef enum	__PLAYKD_VIE_MODULES
{
	PLAYKD_VIE_MODU_DENOISE			= 0x00000001,  //ȥ��ģ��
	PLAYKD_VIE_MODU_FRC				= 0x00000002,  //��֡ģ��
	PLAYKD_VIE_MODU_STAB			= 0x00000004,  //����ģ��,��bsw�ϲ�֧�֣�����Ӳ������
	PLAYKD_VIE_MODU_SHARP			= 0x00000008,  //��ģ��
	PLAYKD_VIE_MODU_ADJ				= 0x00000010,  //���ȡ��Աȶ�ģ�飬δ�ṩ��ʹ��PLAYKD_SetColor�ӿڴ���
}PLAYKD_VIE_MODULES;

typedef struct
{
	uint32_t				dwFilePos;		//ָ��֡���ļ��е�ƫ��λ��
	uint32_t				dwFrameLen;	//֡����
	uint32_t				dwFrameNum;	//֡���
	uint32_t				dwFrameTime;	//֡ʱ��
} KD_FRAME_POS,*PKD_FRAME_POS;

typedef enum	__FRAME_DATA_FORMAT
{
	FRAME_DATA_PCM = 0,
	FRAME_DATA_YV12 = 100,
	FRAME_DATA_RGB24,
	FRAME_DATA_RGBA32,
	FRAME_DATA_ABGR,
	FRAME_DATA_ARGB4444,
	FRAME_DATA_RGB565,
	FRAME_DATA_ARGB1555,
	FRAME_DATA_BGRA,
	FRAME_DATA_YUY2,
	FRAME_DATA_UYVY,
	FRAME_DATA_NV21,
	FRAME_DATA_NV12,
	FRAME_DATA_I420,
    FRAME_DATA_SURF,
	FRAME_DATA_END
}FRAME_DATA_FORMAT;
#define FRAME_DATA_RGB	FRAME_DATA_RGB24

typedef enum PlaySpeed
{
    PlaySpeed_1_div_16 = 0,
	PlaySpeed_1_div_8=1,
	PlaySpeed_1_div_4,
	PlaySpeed_1_div_2,
	PlaySpeed_1,
	PlaySpeed_2,
	PlaySpeed_4,
	PlaySpeed_8,
	PlaySpeed_16
}emPlaySpeed;

typedef enum DecodeFrameType
{
    Decode_NORMAIL = 0,     //��������
    Decode_KEY_FRAME,       //ֻ��ؼ�֡
    Decode_NONE,            //������Ƶ֡,δʵ��
}emDecodeFrameType;

enum BufferType
{
	KD_BUF_VIDEO_SRC =1,
	KD_BUF_AUDIO_SRC ,
	KD_BUF_VIDEO_RENDER,
	KD_BUF_AUDIO_RENDER
};

enum KdDecoderMode
{
	KD_DECMODE_NOTIMER = 0,		// �޽���ģʽ����һ֡��һ֡������������ʾ
	KD_DECMODE_STATTIMER,		// ͳ�ƽ���ģʽ��ͨ��ͳ�ƽ������ݵ��������Զ��趨����
	KD_DECMODE_SPEEDTIMER,		// ֡�ʽ���ģʽ�������趨�Ĳ����ٶȼ��ص���֡�����������Ž��ࣻ������<200msʱ�������ٶȱ���
	KD_DECMODE_STAMPTIMER,		// ʱ�������ģʽ������ʱ������������Ž���
	KD_DECMODE_IPCREALTIMER,	// ʵʱ����ģʽ���൱��1��2������֡��Ϣ֡���ٶȲ��ţ�buf>2ʱ����2����
};
/* ��תģʽ KDVP_SetRotateAngleʹ�� */
typedef enum
{
    ROTATE_0        = 0,
    ROTATE_90       = 90,
    ROTATE_180      = 180,
    ROTATE_270      = 270
}ERotateMode;

enum KdRunTimeInfoModule
{
	KD_RUNTIMEINFO_DEFAULT      = 0,		// 
	KD_RUNTIMEINFO_VIDEODEC     = 2,	// ��Ƶ����ģ��
	KD_RUNTIMEINFO_VIDEOPLAY    = 3,	// ��Ƶ��ʾģ��
	KD_RUNTIMEINFO_VIDEOREENC   = 4,	// ��Ƶ�ر���ģ��
	KD_RUNTIMEINFO_VIDEOENC     = 5,	// ��Ƶ����ģ��
	KD_RUNTIMEINFO_VIDEOCAP     = 6,	// ��Ƶ�ɼ�ģ��
	KD_RUNTIMEINFO_AUDIODEC     = 7,	// ��Ƶ����ģ��
	KD_RUNTIMEINFO_AUDIOPLAY    = 8,	// ��Ƶ����ģ��
	KD_RUNTIMEINFO_AUDIOCAP     = 9,	// ��Ƶ�ɼ�ģ��
	KD_RUNTIMEINFO_AUDIOENC     = 10,	// ��Ƶ����ģ��
	KD_RUNTIMEINFO_VIDEOREVERSE = 11,	// ��Ƶ���뵹��ģ��
	KD_RUNTIMEINFO_VIDEOOSD     = 12,	// ��Ƶˮӡģ��
};

/*������ͳ����Ϣ*/
typedef struct tagDecStatis
{
	uint8_t	  		byVideoFrameRate;	/*��Ƶ����֡��*/
	uint16_t		wVideoBitRate;   	/*��Ƶ��������*/
	uint16_t		wAudioBitRate;   	/*������������*/
	uint32_t 		dwVideoRecvFrame;	/*�յ�����Ƶ֡��*/
	uint32_t		dwAudioRecvFrame;	/*�յ�������֡��*/
	uint32_t 		dwVideoLoseFrame;	/*���붪ʧ����Ƶ֡��*/
	uint32_t 		dwAudioLoseFrame;	/*���붪ʧ������֡��*/
    uint16_t		wVideoLoseRatio;	//��Ƶ���붪ʧ��,��λ��% 	
	uint16_t		wAudioLoseRatio;	//��Ƶ���붪ʧ��,��λ��% 	
	uint32_t 		dwPackError;		/*��֡��*/ 
	uint32_t 		dwIndexLose;		/*��Ŷ�֡*/
	uint32_t 		dwVideoSizeLose; 	/*��С��֡*/
	uint32_t 		dwVideoFullLose; 	/*����֡*/	
	uint32_t 		dwAudioSizeLose; 	/*��С��֡*/
	uint32_t 		dwAudioFullLose; 	/*����֡*/	
	uint32_t 		dwAvrVideoBitRate;   /*1��������Ƶ����ƽ������*/
	uint32_t	  	dwAvrAudioBitRate;   /*1��������������ƽ������*/
	BOOL 			bVidCompellingIFrm;  /*��Ƶǿ������I֡*/								  
	uint32_t		dwDecdWidth;		/*�����Ŀ�*/
	uint32_t 		dwDecdHeight;   	/*�����ĸ�*/
    int             dwCodecType;        /*��������*/
    int             eDrawMode;          /*��ͼ��ʽ*/
    int             dwVerticalSync;     /*��ֱͬ��ģʽ*/
}TDecStatis; 

/*������ͳ����Ϣ*/
typedef struct tagDecStatisEx
{
    int                 wStructSize;        //sizeof(TDecStatisEx),������д����ȷ�ϰ汾
    unsigned char	  	byVideoFrameRate;	/*��Ƶ����֡��*/
    unsigned short		wVideoBitRate;   	/*��Ƶ��������*/
    unsigned short		wAudioBitRate;   	/*������������*/
    unsigned int 		dwVideoRecvFrame;	/*�յ�����Ƶ֡��*/
    unsigned int		dwAudioRecvFrame;	/*�յ�������֡��*/
    unsigned int 		dwVideoLoseFrame;	/*���붪ʧ����Ƶ֡��*/
    unsigned int 		dwAudioLoseFrame;	/*���붪ʧ������֡��*/
    unsigned short		wVideoLoseRatio;	//��Ƶ���붪ʧ��,��λ��% 	
    unsigned short		wAudioLoseRatio;	//��Ƶ���붪ʧ��,��λ��% 	
    unsigned int 		dwPackError;		/*��֡��*/ 
    unsigned int 		dwIndexLose;		/*��Ŷ�֡*/
    unsigned int 		dwVideoSizeLose; 	/*��С��֡*/
    unsigned int 		dwVideoFullLose; 	/*����֡*/	
    unsigned int 		dwAudioSizeLose; 	/*��С��֡*/
    unsigned int 		dwAudioFullLose; 	/*����֡*/	
    unsigned int 		dwAvrVideoBitRate;   /*1��������Ƶ����ƽ������*/
    unsigned int	  	dwAvrAudioBitRate;   /*1��������������ƽ������*/
    BOOL 			    bVidCompellingIFrm;  /*��Ƶǿ������I֡*/								  
    unsigned int		dwDecdWidth;		/*�����Ŀ�*/
    unsigned int 		dwDecdHeight;   	/*�����ĸ�*/
    int                 dwCodecType;        /*��������*/
    int                 eDrawMode;          /*��ͼ��ʽ*/
    int                 dwVerticalSync;     /*��ֱͬ��ģʽ*/
    int                 dwAudioStream;      //�ļ�ģʽ��audio stream����
    int                 dwAudioStreamID;    //��ǰ���ŵ�audio stream ID
}TDecStatisEx; 

typedef struct tagRawData
{
	uint8_t			*pData;       //���ݻ���
    uint32_t 		dwPreBufSize;//pData����ǰԤ���˶��ٿռ䣬���ڼ�
	uint32_t		byMediaEncode; //��kdvdef.h �ڲ�����
    uint32_t		dwDataSize;  //pDataָ���ʵ�ʻ����С�����С
    uint32_t 		dwFrameID;   //֡��ʶ�����ڽ��ն�
    uint32_t 		dwTimeStamp; //ʱ���, ���ڽ��ն�
	uint32_t 		dwSSRC;      //ͬ��Դ, ���ڽ��ն�
	uint64_t		dwRawTimeStamp;		//����ʱ�����������Ƶͬ�����ڲ����ܻ��޸ĸ��ֶΡ�
    union
    {
        struct{
			//����һ�����Ը�֮ǰ�İ汾�ṹ�壨tagFrameHdr����������������ṩ�Ľṹ�������𣬴��Ҫע����
			uint8_t    			byKeyFrame;    //��2λƵ֡���ͣ�I or P��KD_DATA_TYPE ,��8λΪ����������־,Ϊ1ʱ���ڲ����������в���֡��
			uint8_t				byFrameRate; //����֡��,���ڽ��ն�
			uint16_t			wVideoWidth;  //��Ƶ֡��
			uint16_t			wVideoHeight; //��Ƶ֡��
		}tVideoParam;
		struct{
			uint16_t			wChannel;		//��Ƶͨ��
			uint16_t			wSample;	//��Ƶ������
			uint16_t			wSamplebit; //��Ƶ����λ��
		}tAudioParam;
    };
	uint16_t		wReverse[4]; //wReverse[0]=0x00F0��ʾ������Ƶ��·����wReverse[1]��ֵΪ��ID�������1�ۼӣ�Ŀǰ���֧��2·��Ƶ��������wReverse[1]=1Ϊ��1��wReverse[1]=2Ϊ��2��
}KDTRawData,*PKDTRawData;


		//֡��Ϣ
typedef struct __tKDFrameInfo
{
	uint8_t*		pbyRawBuf;
	uint32_t		dwRawlen;
	uint32_t		dwMediaType;			//��������(KD_FRAME_TYPE)
	uint32_t		dwSubMediaType;			//KD_DATA_TYPE(��Ƶ��Ч)
	uint32_t		dwFrameIndex;			//֡���
	uint64_t		dwNetTimeStamp;			//���ʱ�����RTP�ڲ�ʱ�����
	uint64_t		dwMediaTimeStamp;		//����ʱ�����������Ƶͬ�����ڲ����ܻ��޸ĸ��ֶΡ�
	uint32_t		dwMediaEncode;			//��kdvdef.h �ڲ��������FRAME_DATA_FORMAT���涨��
	union FRAME
	{
		struct VideoFrame
		{
			uint16_t		dwFrameRate;
			uint16_t		dwWidth;     //�����
			uint16_t		dwHeight;    //�����
			uint16_t		strike[3];
		}tVideo;

		struct AudioFrame
		{
			uint16_t		wChannels;   //������
			uint16_t		wBitWidth;   //λ��
			uint16_t		dwSampleRate; //������
		}tAudio;
	}u;
	uint16_t		wBitRate;			//�����ʣ���λΪ1028�ֽ�
	uint16_t		wReverse[3];   //�ɼ��࣬wReverse[0]������Ƶ�ɼ�DBֵ��wReverse[1]����ɼ�ʧ��ʱ�Ĵ�����,wReverse[2]�ο�ԴDBֵ;�ر���ص�ʱ��wReverse[0]=0x00F0��ʾ������Ƶ��·����wReverse[1]��ֵΪ��ID�������1�ۼӣ�Ŀǰ���֧��2·��Ƶ��������wReverse[1]=1Ϊ��1��wReverse[1]=2Ϊ��2��
}KDFrameInfo,*PKDFrameInfo;

typedef struct
{
	int            iModule;				//��ǰ����ģ��(KdRunTimeInfoModule)
	int            nStrVersion;     	//���ݷ��صĽṹ��汾����Ҫ��Ϊ�˼�����,��һ���汾�����0x0001
	int            nFrameID;     		//֡��
	int            nTimeStamp;     		//ʱ���
	int            nErrorCode;			//������,�ο�errorcode.h
	unsigned char  reserved[12];		//�����ֽ�
}KDRunTimeInfo;

typedef struct
{
	KDRECT	tOsdParam;
	int		nOsdBuf;        //OSDͼƬ����
	char	*pOsdBuf;       //OSDͼƬbuf��ַ
} KDOsdParam;

typedef enum	__PLAYKD_OSD_MODES
{
    PLAYKD_OSD_MODE_RENDER			= 0x00000001,  //OSD����
    PLAYKD_OSD_MODE_SNAP			= 0x00000002,  //OSDץ��
    PLAYKD_OSD_MODE_RECORD			= 0x00000004,  //OSD¼��
}PLAYKD_OSD_MODES;

typedef struct
{
    int                 wStructSize;	   //sizeof(KD_OSD_MODECONFIG)
    int                 eOsdMode;		   //ѡ�����OSDģʽ,ͨ��PLAYKD_OSD_MODESѡ�񣬿���ͬʱ������ͬģʽ
    BOOL                bOsd;               //�Ƿ���OSD;Ĭ�Ϲرգ�TRUE����
    union
    {
    unsigned int        uiARGB;             //������ɫ��͸����;[0xFFFFFFFF]���2λ��Alphaͨ��ֵ��ʣ����RGB;RGB=0x000000(��ɫ)ʱ��ǿ�Ƹ�Ϊ0x000001
    unsigned int        uiOutBmpWidth;      //Out,���������ͼƬ�Ĵ�С
    };
    union
    {
    unsigned int        uiFontSize;         //�����С[16,2000]
    unsigned int        uiOutBmpHeight;
    };
    unsigned int        uiFontRotate;       //��ת�Ƕ�[0,360)
    unsigned int        uiLayerMode;        //1��ƽ�̣����ơ��������ξ���ƽ�̣������������֡�����̫���������ضϡ�2:����ˮӡ��С����ģʽ��bOsd����ΪTRUE����������Ҫ�ر�OSD��
    char                strText[128];        //��������,�128
    char*               pstrFontPath;       //�ֿ�·����ָ���ַ������ܳ���512���ȣ�������д�����ΪNULL���ڲ��Լ�����Ĭ���ֿ⣬�����ܵ���һЩ�ַ���ʾ����
    unsigned int        uiWinWidth;         //֪ͨ��������ǰ���ڿ�ߣ����ڴ��ڱ仯ʱʹ��
    unsigned int        uiWinHeight;        //֪ͨ��������ǰ���ڿ�ߣ����ڴ��ڱ仯ʱʹ��
    BOOL                bAutoAdjustFont;    //�Ƿ���ݴ����Զ����������С ��֤ˮӡ�Ų�һ�£�bAutoAdjustFont=TRUEʱ��uiFontSize��С���ó�1920*1080����ʱ�ο���С,��backsurface��Сʱ����Ӧˮӡ�����п��ܹ�С���޷���ʾ
}KD_OSD_MODECONFIG,*PKD_OSD_MODECONFIG;

typedef struct 
{
    uint32_t dwStreamRecvBitRate;
    uint32_t dwExpectedDelay;
    uint32_t dwIncompleteFrames;
    uint32_t dwIncompleteFirstTS;
    uint32_t dwIncompleteLastTS;
    uint32_t dwAverageCompleteTimeMs;
}TMrtcRecvState;

typedef struct
{
    BOOL    bOpen;      //�Ƿ������߳̽���
    int     dwCpu;      //�����߳���
}TDecMultiThread;

#define KD_IS_DECODEOK(flag)		(flag&0x01)
#define KD_IS_UPDATEDATA(flag)		(flag&0x02)
#define KD_SET_DECODEOK_FLAG(flag)	(flag|0x01)
#define KD_SET_UPDATEDATA_FLAG(flag)	(flag|0x02)
//�ص���������� dwMediaEncodeӦ������FRAME_DATA_FORMAT����
typedef void (CALLBACK *PDECCALLBACK)(int32_t dwPort,PKDFrameInfo pFrame, void* pcontext);
//pcontext1 ��֡��Ϣ����������PLAYKD_InputDataEx������ȥ��������
//pcontext2������PLAYKD_SetYuvCallbackEx������ȥ��������
typedef void (CALLBACK *PDECCALLBACKEXT)(int32_t dwPort,PKDFrameInfo pFrame, int flag,void* pStreamContext,void* pFrameContext);
//ͨ������pFrame�ڲ�dwRawlen���ж��ϲ�Ӧ�÷�������ڴ棬���س�����pbyRawBuf����Ϊnull��
//������Ҫ��������Լ�yuv����
typedef void * (CALLBACK *PALLOCATEMMCALLBACK)(int32_t dwPort,PKDFrameInfo pFrame, void* pStrmContext, void*pFrameContext);
//�ص���������� dwMediaEncodeӦ������kdvdef.h����
//typedef void (CALLBACK *PDEMUCALLBACK)(int32_t dwPort,PKDFrameInfo pFrame, void* pcontext);

/*
pAddDrawDC ��һ���ṹ��
win�£�
typedef struct
{
    void *hdc;
    void *hwnd;
    void *rendertype;//��Ⱦ���ͣ�D3Dֱ����ʾ��D3D��ʾ��DDRAW��ʾ��DRAWDIB��ʾ��
}DrawDC;

*/
typedef void (CALLBACK *PDRAWCALLBACK)(void* pAddDrawDC, void* pcontext);
//	��Ƶ�ɼ����ݻص�ָ��,�������������:
//			pDataBuffer,�ص�����ָ�� 
//			DataLength,�ص����ݳ���
//          pFrame.wReverse[0],��������DBֵ��-100��0��ӳ�䵽(0��100),100�������
//			pUserData,�û�����
typedef void (CALLBACK *PCAPTIONCALLBACK)(PKDFrameInfo pFrame, void* pUserData);
typedef int (CALLBACK *PFILEENDCALLBACK)(int32_t dwPort,void* pcontext);
//PCM���ݻص�����
// ptVideoData��yuv���ݽṹ
// pParam��ʹ�������õĻص���������
//�ص�����ptVideoData����� dwMediaEncodeӦ������FRAME_DATA_FORMAT����
//typedef void 	(CALLBACK  	*CBF_YUVData)( PKDFrameInfo ptVideoData, void* pParam);

//PCM���ݻص�����
// ptAudioData��PCM���ݽṹ
// pParam��ʹ�������õĻص���������
//�ص�����ptAudioData����� dwMediaEncodeӦ������FRAME_DATA_FORMAT����
//typedef void 	(CALLBACK 	*CBF_PCMData)( PKDFrameInfo ptAudioData, void* pParam);

//δ�������ݻص�
//�ص�����pFrameHdr����� dwMediaEncodeӦ������kdvdef.h����
typedef void 	(CALLBACK 	*PRAWDATACALLBACK)( PKDTRawData pFrameHdr, void* pParam );

//���벥����ͼ�ص�����
//typedef void 	(CALLBACK 	*CBF_DRAW)(void* hDC, void* pParam);

//�ֱ��ʸı�ص�����
typedef void	(CALLBACK 	*PENCCALLBACK)(void* nUser);

//�ڲ�Դ���ݻص�֪ͨ����
typedef void	(CALLBACK 	*PSOURCECALLBACK)(int32_t dwPort,void* nUser);

//aec��Ƶ�ο����ݻص�
typedef int (CALLBACK *PFAECCB)(PKDFrameInfo pFrame,void *pUserData);

//
typedef void (CALLBACK *PRunTimeInfoCBFun)(int nPort, KDRunTimeInfo* pRunTimeInfo, void *nUser);

typedef void (CALLBACK *PFAUDIOCLOCKCB)(uint64_t u64NowTime, void * pUserData);

typedef void (CALLBACK *PFAUDIOEOSCB)(void * pUserData);
#endif

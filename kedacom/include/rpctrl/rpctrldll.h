#ifndef RPCTRLDLL_H
#define RPCTRLDLL_H
#include "kdvtype.h"


#define RP_SYS_MAX_DIR_NUM								32
//Is video must from key frame
#define DEFAULT_CONFIG_VIDEOFROMKEYFRAME               TRUE
//Is video must wait keyframe when frame lost
#define DEFAULT_CONFIG_FRAMELOSTWAITKEYFRAME           TRUE
//Task loop wait time
#define DEFAULT_CONFIG_TASKSWITCHTIME                  32
//Command timeout time
#define DEFAULT_CONFIG_COMMANDTIMEOUT                  10000
//default video frame duration, = 1000/framerate  缓存大小=1000/DEFAULT_CONFIG_VIDEOFRAMEDURATION
#define DEFAULT_CONFIG_VIDEOFRAMEDURATION              20
//default audio frame duration, = 1000/framerate
#define DEFAULT_CONFIG_AUDIOFRAMEDURATION				33
//Bufftime
#define DEFAULT_CONFIG_BUFFTIME                        1500
//buffsize for kds file record
#define	DEFAULT_CONFIG_BUFFSIZE							1024 * 1024
//Play Bufftime
#define DEFAULT_CONFIG_PLAY_BUFFTIME                   100
//Play buffsize for kds play
#define DEFAULT_CONFIG_PLAY_BUFFSIZE					64 * 1024
//Is insert null frame when no frame input
#define DEFAULT_CONFIG_INSERTNULLFRAME                 TRUE
//Max time input frame dealy. After this time, stream is still.
#define DEFAULT_CONFIG_INPUTFRAMEMAXDELAY              10000
//Max time stream wait. After this time, ready streams do not wait the delay stream.
#define DEFAULT_CONFIG_FRAMEWAITTIME                   400
//Calclate real frame duration per this number frame
#define DEFAULT_CONFIG_DURATIONCALCNUM                 250
//Is use fix frame rate
#define DEFAULT_CONFIG_USEFIXFRAMERATE                 TRUE
//switch file mini span
#define DEFAULT_CONFIG_SWITCHFILEMINSPAN               1000
//DISK operation timeout
#define	DEFAULT_CONFIG_DISK_OP_TIMEOUT				   10000
#define	DEFAULT_TASK_NUM								0
#define DEFAULT_TASK_NUM_PER_DIR						1
#define RP_SYS_MAX_DIR_NUM								32
#define DEFAULT_MAX_STREAM_DELAY						50000
//剩余存储空间告警回调函数,只有当二级告警,停止录像时,录像机号才有意义,其他一般设置为255
typedef void (*FreeSpaceAlarmCallBack)( u8 byAlarmLevel, s8* pchPartionName, u32 dwRecorderId, u32 dwContext );
typedef void(*RpFtpRcvCallBack)(u32 dwStatusCode, u32 dwSSid, u32 dwCurTime, u32 dwUserdata);
typedef void(*RpFtpDataCallback)(u8 * pbData, u32 dwDataSize, u64 qwTimeStamp, u8 byStreamId, u32 dwUserdata);

//录放像库初始化参数结构
typedef struct tagRPInitParam
{
    //需要的录像机最大路数（不大于最大容量）
    u32 m_dwInitialRecorderNum;
    //需要的放像机最大路数（不大于最大容量）
    u32 m_dwInitialPlayerNum;
    //一级告警的最小剩余存储空间（不停止录像）
    u32 m_dwRemainSpaceAlarmLevelOne;
    //二级告警的最小剩余存储空间（停止所有录像）
    u32	m_dwRemainSpaceAlarmLevelTwo;
    //剩余存储空间告警
    FreeSpaceAlarmCallBack	m_pCallback;
    //告警上下文
    u32 m_dwContext;
}TRPInitParam;

typedef struct tagSysGlobalParam
{
    tagSysGlobalParam()
    {
        m_bVideoFromKeyFrame = DEFAULT_CONFIG_VIDEOFROMKEYFRAME;
        m_bFrameLostWaitKeyFrame = DEFAULT_CONFIG_FRAMELOSTWAITKEYFRAME;
        m_nClockRate = 1000;
        m_nDefaultPlyTaskSwitchTime = DEFAULT_CONFIG_TASKSWITCHTIME;
        m_nDefaultRecTaskSwitchTime = DEFAULT_CONFIG_TASKSWITCHTIME;
        m_nDefaultCommandTimeout = DEFAULT_CONFIG_COMMANDTIMEOUT;
        m_nDefaultVideoFrameDuration = DEFAULT_CONFIG_VIDEOFRAMEDURATION;
        m_nDefaultAudioFrameDuration = DEFAULT_CONFIG_AUDIOFRAMEDURATION;
        m_nDefaultBuffTime = DEFAULT_CONFIG_BUFFTIME;
        m_nDefaultPlayBuffTime = DEFAULT_CONFIG_PLAY_BUFFTIME;
        m_nDefaultIsInsertNullFrame = DEFAULT_CONFIG_INSERTNULLFRAME;
        m_nDefaultInputFrameMaxDelay = DEFAULT_CONFIG_INPUTFRAMEMAXDELAY;
        m_nDefaultFrameWaitTime = DEFAULT_CONFIG_FRAMEWAITTIME;
        m_nDefaultFrameDurationCalcNum = DEFAULT_CONFIG_DURATIONCALCNUM;
        m_nDefaultContiueNullInsertNum = m_nDefaultInputFrameMaxDelay/m_nDefaultFrameWaitTime;
        m_bUseFixedFrameRate = DEFAULT_CONFIG_USEFIXFRAMERATE;
        m_nSwitchFileMinSpan = DEFAULT_CONFIG_SWITCHFILEMINSPAN;
        m_nDefaultDiskOpCommandTimeout = DEFAULT_CONFIG_DISK_OP_TIMEOUT ;
        m_nDefaultPlayBuffSize = DEFAULT_CONFIG_PLAY_BUFFSIZE ;
        m_nDefaultBuffSize = DEFAULT_CONFIG_BUFFSIZE ;
        m_nDefaultTaskNum = DEFAULT_TASK_NUM ;
        m_nDefaultTaskNumPerDir = DEFAULT_TASK_NUM_PER_DIR ;	m_bDoStatis = TRUE;
        m_bMultiDelete = FALSE ;
        m_dwDelThreadNum = 25;
        m_dwMaxStreamDelay = DEFAULT_MAX_STREAM_DELAY;
    }
    s32 m_nClockRate;
    s32 m_nDefaultPlyTaskSwitchTime;
    s32 m_nDefaultRecTaskSwitchTime;
    s32 m_nDefaultCommandTimeout;
    s32 m_nDefaultDiskOpCommandTimeout;
    BOOL32 m_bVideoFromKeyFrame;
    BOOL32 m_bFrameLostWaitKeyFrame;
    s32 m_nDefaultVideoFrameDuration;
    s32 m_nDefaultAudioFrameDuration;
    s32 m_nDefaultBuffTime;
    s32	m_nDefaultPlayBuffSize ;
    s32 m_nDefaultBuffSize ;
    s32 m_nDefaultPlayBuffTime;
    s32 m_nDefaultIsInsertNullFrame;
    s32 m_nDefaultInputFrameMaxDelay;   // input frame max time delay
    s32 m_nDefaultFrameWaitTime;
    s32 m_nDefaultFrameDurationCalcNum;
    s32 m_nDefaultContiueNullInsertNum;
    BOOL32 m_bUseFixedFrameRate;
    s32 m_nSwitchFileMinSpan;
    s32	m_nDefaultTaskNum ;
    s32 m_nDefaultTaskNumPerDir ;
    BOOL32	m_bDoStatis;
    BOOL32	m_bMultiDelete;
    u32		m_dwDelThreadNum;
    u32		m_dwMaxStreamDelay;
    s8	m_pchTaskDirName[RP_SYS_MAX_DIR_NUM][256];
} TSysGlobalParam;


//下载状态,重点对有(!!!及0)的进行处理
typedef enum
{
        RCV_STATUS_START = 1,					//1开始下载
        RCV_STATUS_ADD_STREAM_ERROR,			//2写流错误
        RCV_STASTU_ADD_FRAME_ERROR,				//3写帧错误
        RCV_STATUS_SND_REQ,						//4发送下载请求
        RCV_STATUS_WAIT_STREAM_PROPERTY,		//5等待流属性
        RCV_STATUS_SND_PROPERTY_ACK,			//6发送流属性回馈
        RCV_STATUS_WAIT_FRAME_DATA,				//7等待帧数据
        RCV_STATUS_SND_FRAME_DATA_ACK,			//8发送帧回馈
        RCV_STATUS_TIMEOUT,						//!!!9超时
        RCV_STATUS_CLOSE,						//10关闭
        Rcv_STATUS_RCV_END,						//!!!11下载结束
        RCV_STATUS_REQ_INVALID,					//!!!12检查下载参数(发送方认为下载请求参数可能不合法)
        RCV_STATUS_PROBE,						//
        RCV_DATA_TYPE,
        RCV_STATUS_SERVER_REFUSE                //连接被服务器拒绝
}TRcvStatus;

//网络地址结构
typedef  struct  tagTRPNetAddr
{
    //地址
    u32  m_dwIp;
    //端口号
    u16  m_wPort;
}TNetAddr;

#define		MAX_PROXY_USER_DATA		16
//add zhx ftp udp下载有关
//下载方同时下载数(现在最好设定为1)
#define			MAX_RP_FTP_RCV_NUM			32
//ftp发送服务最大的服务数
#define			MAX_RP_FTP_SND_NUM			32
#define			MAX_FTP_RCV_USER_ID_LEN		32
//文件路径最大长度
#define	MAX_FILE_PATH_LEN						(u8)255
//文件名最大长度
#define	MAX_FILE_NAME_LEN						(u8)255

#define DEFAULT_RP_DOWNLOAD_SERVER_BUFF		(128 * 1024)
#define DEFAULT_RP_DOWNLOAD_CLIENT_BUFF		(128 * 1024)

//ftp客户端参数结构
typedef struct tagFtpUdpRcvParam
{
    s8	m_abyUserId[MAX_FTP_RCV_USER_ID_LEN+1];//用户id
    TNetAddr m_tRcvLocalAddr;			//本地地址
    TNetAddr m_tRcvRemoteAddr;			//下载服务地址
    RpFtpRcvCallBack m_pRcvCallBack;	//回调
    u32 m_dwUserData;					//上下文
    s8 m_abyLocalFilePath[MAX_FILE_PATH_LEN];			//本地存储路径
    s8 m_abyLocalFileName[MAX_FILE_NAME_LEN];			//本地存储文件名
    u32 m_dwGran;						//回调粒度
    u32 m_dwStartTime;					//下载开始时间
    u32 m_dwStopTime;					//下载结束时间
    s8 m_abyRequestFilePath[MAX_FILE_PATH_LEN];			//要下载的文件路径
    s8 m_abyRequestFileName[MAX_FILE_NAME_LEN];			//要下载的文件名
    BOOL32 m_bSmallFile;				//是否小文件
    u8	m_abyProxyUserData[MAX_PROXY_USER_DATA];//代理用户数据
    u32 m_dwProxyUserDataLen;//代理用户数据长度

    //add liu 不需要切设为0
    u32 m_dwCutFileLen; //单位为兆,MB
    u32 m_dwCutTimelen;	//单位为分钟

    RpFtpDataCallback pfCallback ;				// 盲录下载数据回调
    s32			m_dwRcvBuf;						// in bytes
    s32			m_nSpeedLimit;					// in bytes per sec, not support yet

    tagFtpUdpRcvParam()
    {
        m_dwProxyUserDataLen = 0;
        m_dwRcvBuf = DEFAULT_RP_DOWNLOAD_CLIENT_BUFF;
        m_nSpeedLimit = -1;
    }
}TFtpUdpRcvParam;


// rpctrl
typedef unsigned short (*IPCRpInit)(TRPInitParam *ptRPInitParam, TSysGlobalParam *ptRPSysParam);
typedef unsigned short (*IPCRpFtpRcvCreate)(TNetAddr& tLocalAddr, u32* pdwSsid);
typedef unsigned short (*IPCRpFtpStartRcv)(TFtpUdpRcvParam & tFtpRcvParam, u32 dwSsid, u32 dwNatIntvl);
typedef unsigned short (*IPCRpFtpStopRcv)(u32 dwSsid);


#endif // RPCTRLDLL_H

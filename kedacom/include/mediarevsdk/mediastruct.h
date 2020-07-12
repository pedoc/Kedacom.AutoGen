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
	TEncName eEncName;			// ������������
	unsigned char byPayload;				// payload
}TEncNameAndPayload, *PTEncNameAndPayload;

// ���ض˿�
typedef struct tagLocalNetParam
{
	unsigned short wRtpPort;
	unsigned short wRtcpPort;
	unsigned short wRtcpBackPort;
} TLocalNetParam, *PTLocalNetParam;

// Զ�˶˿�
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

// ���ý��ղ���
typedef struct tagSwitchParam
{
	TPlayPortInfo tPlayPortInfo;	        // ���صĶ˿�(��Ҫ) 
	TRemotePortInfo tRemotePortInfo;		// Զ�˷��Ͷ˿ڣ���Ҫ��
	TEncNameAndPayload tEncNameAndPayload;	// ����
} TSwitchParam, *PTSwitchParam;

// ����ת������
typedef struct tagSwitchSendParam
{
	TPlayPortInfo tPlaySendPortInfo;	    // ת�����صķ��Ͷ˿�
	TRemotePortInfo tRemoteSendPortInfo;	// ת��Ŀ�Ķ˵Ķ˿�
}TSwitchSendParam, *PTSwitchSendParam;


//����rtsp����
typedef struct tagRtspSwitchParam
{
	char			szAdmin[32];		// ǰ�˵��˺�
	char			szPassword[32];		// ǰ�˵�����
	char			szMediaURL[260];    // url
	bool            bAlarm;             // �Ƿ����澯
	bool            bNoStream;          // FALSE����rtsp������ TRUE������rtsp������ֻ����rtsp�澯��·
	TSwitchParam    tSwitchParam;
}TRtspSwitchParam, *PTRtspSwitchParam;

typedef struct tagMediaRawData
{
	unsigned char		*pData;       //���ݻ���
	unsigned int 		dwPreBufSize;//pData����ǰԤ���˶��ٿռ䣬���ڼ�
	unsigned int		byMediaEncode; //��kdvdef.h �ڲ�����
	unsigned int		dwDataSize;  //pDataָ���ʵ�ʻ����С�����С
	unsigned int 		dwFrameID;   //֡��ʶ�����ڽ��ն�
	unsigned int 		dwTimeStamp; //ʱ���, ���ڽ��ն�
	unsigned int 		dwSSRC;      //ͬ��Դ, ���ڽ��ն�
	unsigned long		dwRawTimeStamp;		//����ʱ�������Ƶ����ʱ�䣩
	union
	{
		struct{
			//����һ�����Ը�֮ǰ�İ汾�ṹ�壨tagFrameHdr����������������ṩ�Ľṹ�������𣬴��Ҫע����
			unsigned char    		byKeyFrame;    //Ƶ֡���ͣ�I or P��	KD_DATA_TYPE 
			unsigned char			byFrameRate; //����֡��,���ڽ��ն�
			unsigned short			wVideoWidth;  //��Ƶ֡��
			unsigned short			wVideoHeight; //��Ƶ֡��
		}tVideoParam;
		struct{
			unsigned short			wChannel;		//��Ƶͨ��
			unsigned short			wSample;	//��Ƶ������
			unsigned short			wSamplebit; //��Ƶ����λ��
		}tAudioParam;
	};
	unsigned short		wReverse[4];
}TMediaRawData,*PTMediaRawData;


#pragma pack()

#endif


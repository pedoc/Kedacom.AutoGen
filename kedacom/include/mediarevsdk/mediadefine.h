//////////////////////////////////////////////////////////////////////////
// mediadefine.h 
#ifndef MEDIADEFINE_H_
#define MEDIADEFINE_H_


#pragma pack(1)

#define MEDIARCV_SUCCESS                     (0)    // �ɹ�
#define MEDIARCV_FAIL						 (1)    // ʧ��
#define MEDIARCV_NOFUN						 (2)    // û���ҵ�SDKDLL��Ӧ�ӿ�
#define MEDIARCV_NODLL						 (3)    // û���ҵ���ӦDLL
#define MEDIARCV_INITFAILD                   (4)    // ��ʼ��ʧ��
#define MEDIARCV_RELEASE                  	 (5)    // �ͷ�ʧ��

#define MEDIARCV_ERROR_BASE                  (s32)(500)
#define MEDIARCV_ERROR_GET_RCV               (MEDIARCV_ERROR_BASE + 1)    // ��ȡ���ն���ʧ��
#define MEDIARCV_ERROR_VIDEO_CREATE_IN       (MEDIARCV_ERROR_BASE + 2)    // ��Ƶ����InIDʧ��
#define MEDIARCV_ERROR_SETOPT_TYPE_IN        (MEDIARCV_ERROR_BASE + 3)    // ������������ʧ��
#define MEDIARCV_ERROR_PLAYLOAD_IN           (MEDIARCV_ERROR_BASE + 4)    // ����playloadʧ��
#define MEDIARCV_ERROR_KEDACDM_IN            (MEDIARCV_ERROR_BASE + 5)    // ���ÿƴ�����ʧ��
#define MEDIARCV_ERROR_ALIVE_IN              (MEDIARCV_ERROR_BASE + 6)    // ���ñ���ʧ��
#define MEDIARCV_ERROR_SAMPLE_IN			 (MEDIARCV_ERROR_BASE + 7)    // ����sampleʧ��
#define MEDIARCV_ERROR_MAXFRAME_IN			 (MEDIARCV_ERROR_BASE + 8)    // �������֡ʧ��ʧ��
#define MEDIARCV_ERROR_OUTMAXFRAME_IN        (MEDIARCV_ERROR_BASE + 9)    // ������������֡ʧ��
#define MEDIARCV_ERROR_TRANSFER_IN           (MEDIARCV_ERROR_BASE + 10)   // ���ö˿�ת��ʧ��
#define MEDIARCV_ERROR_VIDEOSTART_IN         (MEDIARCV_ERROR_BASE + 11)   // ������Ƶ��ʼʧ��
#define MEDIARCV_ERROR_CREATE_OUT            (MEDIARCV_ERROR_BASE + 12)   // ����OutIDʧ��
#define MEDIARCV_ERROR_SETOPT_TYPE_OUT       (MEDIARCV_ERROR_BASE + 13)   // ������������ʧ��
#define MEDIARCV_ERROR_DATACALLBACK_OUT      (MEDIARCV_ERROR_BASE + 14)   // ���������ص�
#define MEDIARCV_ERROR_START_OUT	         (MEDIARCV_ERROR_BASE + 15)   // ��������out
#define MEDIARCV_ERROR_ADDPIPLINE	         (MEDIARCV_ERROR_BASE + 16)   // ����pipline
#define MEDIARCV_ERROR_AUDIO_CREATE_IN       (MEDIARCV_ERROR_BASE + 17)   // ��Ƶ����InIDʧ��
#define MEDIARCV_ERROR_AUDIOSTART_IN         (MEDIARCV_ERROR_BASE + 18)   // ������Ƶ��ʼʧ��
#define MEDIARCV_ERROR_REMOVEPIPELINE        (MEDIARCV_ERROR_BASE + 19)   // �Ƴ�Pipelineʧ��
#define MEDIARCV_ERROR_OUT_STOP			     (MEDIARCV_ERROR_BASE + 20)   // OUT����ֹͣ
#define MEDIARCV_ERROR_OUT_RELEASE			 (MEDIARCV_ERROR_BASE + 21)   // OUT�����ͷ�
#define MEDIARCV_ERROR_IN_STOP			     (MEDIARCV_ERROR_BASE + 22)   // IN����ֹͣ
#define MEDIARCV_ERROR_IN_RELEASE			 (MEDIARCV_ERROR_BASE + 23)   // IN�����ͷ�


/* �˿ڶ��� */
#define MEDIA_RTP_REMOTE_PORT	 (unsigned short)59000     // ǰ�˷�����Ƶ����˿�
#define MEDIA_RTP_LOCAL_PORT     (unsigned short)60000	   // ��Ƶ����˿�
#define MEDIA_LOCAL_CALL_PORT	 (unsigned short)52000	   // ��Ƶ���ж˿�
#define MEDIA_LOCAL_REC_PORT     (unsigned short)10086     // ����¼����ʼ�˿�
#define MEDIA_DOWNLOAD_PORT		 (unsigned short)10000     // ���ر��ؽ��ն˿�
#define MEDIA_DOWNLOAD_PUPORT	 (unsigned short)1730	   // ǰ�����ط��Ͷ˿�

 	/* ý���� */
#define PLAYERHANDLE unsigned long


#pragma pack()

#endif


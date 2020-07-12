#ifndef _ERROR_CODE_H_
#define _ERROR_CODE_H_  1

//����������
#define  KDPLAY_NOERROR							0	//no error
#define	 KDPLAY_PARA_OVER						1	//input parameter is invalid;
#define  KDPLAY_ORDER_ERROR						2	//The order of the function to be called is error.
#define	 KDPLAY_TIMER_ERROR						3	//Create multimedia clock failed;
#define	 KDPLAY_ALLOC_MEMORY_ERROR				6	//Allocate memory failed.
#define  KDPLAY_BUF_OVER						11	//buffer is overflow

//unidecodeģ�������

#define  KDPLAY_DEC_VIDEO_ERROR					4	//Decode video data failed.
#define  KDPLAY_DEC_AUDIO_ERROR					5	//Decode audio data failed.

#define	 KDPLAY_SET_VOLUME_ERROR				7	//Set volume failed
#define  KDPLAY_CREATE_OBJ_ERROR				8	//Create thread or event failed
#define  KDPLAY_CREATE_DDRAW_ERROR				9	//Create DirectDraw object failed.
#define  KDPLAY_CREATE_OFFSCREEN_ERROR			10	//failed when creating off-screen surface.

#define  KDPLAY_CREATE_SOUND_ERROR				12	//failed when creating audio device.	
#define  KDPLAY_OPEN_FILE_ERROR					13	//Open the file failed.
#define  KDPLAY_SUPPORT_FILE_ONLY				14	//The function only support play file.
#define  KDPLAY_SUPPORT_STREAM_ONLY				15	//The function only support play stream.
#define  KDPLAY_SYS_NOT_SUPPORT					16	//System not support.
#define  KDPLAY_FILEHEADER_UNKNOWN				17	//No file header.
#define  KDPLAY_VERSION_INCORRECT				18	//The version of decoder and encoder is not adapted.  
#define  KDPLAY_INIT_DECODER_ERROR				19	//Initialize decoder failed.
#define  KDPLAY_CHECK_FILE_ERROR				20	//The file data is unknown.
#define  KDPLAY_INIT_TIMER_ERROR				21	//Initialize multimedia clock failed.
#define	 KDPLAY_BLT_ERROR						22	//Blt failed.
#define  KDPLAY_UPDATE_ERROR					23	//Update failed.
#define  KDPLAY_OPEN_FILE_ERROR_MULTI			24  //openfile error, streamtype is multi
#define  KDPLAY_OPEN_FILE_ERROR_VIDEO			25  //openfile error, streamtype is video
#define  KDPLAY_JPEG_COMPRESS_ERROR				26  //JPEG compress error
#define  KDPLAY_EXTRACT_NOT_SUPPORT				27	//Don't support the version of this file.
#define  KDPLAY_EXTRACT_DATA_ERROR				28  //extract video data failed.
#define  KDPLAY_SECRET_KEY_ERROR				29  //Secret key is error //add 20071218
#define  KDPLAY_DECODE_KEYFRAME_ERROR			30  //
#define  KDPLAY_NEED_MORE_DATA					31  //need more data in buf
#define  KDPLAY_INVALID_PORT					32	//invalid port
#define  KDPLAY_NOT_FIND						33  //object not find
#define	 KDPLAY_OPERTION_NOTALLOWED				34  //this operation not support
#define	 KDPLAY_FILE_WRITE_ERR					35	//write file fail
#define	 KDPLAY_PARA_POINT_NULL					36	//input param is NULL
#define	 KDPLAY_NO_DECODE						37	//the video decode create
#define	 KDPLAY_NO_STREAM						38 
#define	 KDPLAY_ALREADY_EXIST					39  //the func already called
#define  KDPLAY_BUF_EMPTY                       40  //vodeo buf is empty
#define  KDPLAY_WAITFOR_KEYFRAME                41  //wait for key frame
#define  KDPLAY_DEVICE_LOST		                42  //dx device lost
#define  KDPLAY_SURFACE_LOST		            43  //dx surface lost
#define  KDPLAY_LOADDLL_FAIL		            44  //load dll fail
#define	 KDPLAY_OUTOF_VIDEO_MEMORY				45	//d3d�������Ҫ�ͷ��ڴ���Դ���ָܻ�
#define	 KDPLAY_WINDOW_SIZE_ERROR				46  //out of windows region fail
#define	 KDPLAY_ERROR_MEDIA_TYPE				47  //this mediatype not support
#define  KDPLAY_LOCK_ERR                        48  //loal harddec surface fail
#define  KDPLAY_INVALID_DEVICE                  49  //no needed device exist
#define  KDPLAY_UNDEFINED_BEHAVIOR              50  //resetex device fail or return MFX_ERR_UNDEFINED_BEHAVIOR
#define  KDPLAY_DEVICE_FAILED                   51  //create device fail
#define  KDPLAY_DEVICE_RESET                    52  //resetdevide fail
#define  KDPLAY_ERR_FRAME_TIME                  53  //time stamp error
#define  KDPLAY_ERR_VERSION_CMP                 54  //struct version not compare
#define  KDPLAY_ERR_FONT_PATH                   61  //can not find character library
#define  KDPLAY_ERR_STRUCT_SAME                 62  //video or audio dll version not compare uniplay
#define  KDPLAY_ERR_FUNCFAIL		            63  //can not get function address
#define  KDPLAY_ERR_FONT_SIZE		            64  //create font width or height error
#define  KDPLAY_ERR_DRAWHDC		                65  //ddraw or drawdib get hdc fail
#define  KDPLAY_FAIL_UNKNOWN					99  //Fail, but the reason is unknown;	



#define  KDPLAY_ERR_RETURN						0xFFFFFFFF

//��Ƶ����ģ�������
#define  KDVD_OK                  KDPLAY_NOERROR
#define  KDVD_GENERAL_ERROR       1024
#define  KDVD_ERR_PORT            1025
#define  KDVD_ERR_PARAM           KDPLAY_PARA_OVER
#define  KDVD_ERR_MALLOC          KDPLAY_ALLOC_MEMORY_ERROR
#define  KDVD_ERR_CREATE_THREAD   1028
#define  KDVD_ERR_CREATE_DECODER  1029
#define  KDVD_ERR_DEL_DECODER     1030
#define  KDVD_ERR_CREATE_TIMER    1031
#define  KDVD_ERR_IN_BUF_FULL     KDPLAY_BUF_OVER
#define  KDVD_ERR_IN_BUF_EMPTY    1033
#define  KDVD_ERR_FRAME_SIZE      1034
#define  KDVD_ERR_MODULE_UNINITED 1035
#define  KDVD_ERR_DECODE_BUFFER_FULL 1036
#define  MFX_ERROR_BASE					(s32)1050
#define  MFX_ERROR_GPU_MEDIA_TYPE		(MFX_ERROR_BASE+1)//GPU support only h264&h265
#define  MFX_ERROR_GPU_NOT_INIT			(MFX_ERROR_BASE+2)//
#define  MFX_ERROR_GPU_WND_INVALID		(MFX_ERROR_BASE+3)//
#define  MFX_ERROR_GPU_RECT_OUTREGION	(MFX_ERROR_BASE+4)//

#define  KDVD_ERR_BUF_SIZE        1100
#define  KDVD_ERROR               1101
#define  KDVD_ERR_CODEC_BUSY      1102  //codec�洢����δ�������ݡ�
#define  KDVD_ERR_CODEC_EMPTY     1103  //CODEC�����е����ݶ�������ɲ������ظ��ϲ㣬
#define  KDVD_ERR_CODEC_WAIT      1104  //CODEC�л��л�����δ�������ݣ����ҵ�ǰû�н���������ݡ�
#define  KDVD_ERR_LOOPBUF_EMPTY   1105
#define  KDVD_ERR_CODEC_NOT_SURPPORT  1106
#define  KDVD_ERR_MALLOC_CODEC    1107
#define  KDVD_ERR_NO_DISPLAY      1108
#define  KDVD_ERR_PERMISSION_DENIED 1110
#define  KDVD_ERR_CODEC_RETRY     1111
#define  KDVD_ERR_KEYFRAME_RETRY    1112
#define  KDVD_ERR_MODULE_INITED     1113

//��Ƶ����ģ�������
#define  KDAD_OK                  KDPLAY_NOERROR
#define  KDAD_ERROR               3001
#define  KDAD_ERR_PARAM           3002
#define  KDAD_ERR_NO_ID           3003
#define  KDAD_ERR_MALLOC          3004
#define  KDAD_ERR_CREATE_THREAD   3005
#define  KDAD_ERR_CREATE_DECODER  3006
#define  KDAD_ERR_DEL_DECODER     3007
#define  KDAD_ERR_DECODE_AFRAME   3008
#define  KDAD_ERR_IN_BUF_FULL     3009
#define  KDAD_ERR_IN_BUF_EMPTY    3010
#define  KDAD_ERR_FRAME_SIZE      KDVD_ERR_FRAME_SIZE
#define  KDAD_ERR_MODULE_UNINITED 3012
#define  KDAD_ERR_MODULE_INITED   3013

//��Ƶ����ģ�������
#define  KDVP_OK                             KDPLAY_NOERROR//1000
#define  KDVP_ERROR                          2201  /*��ͨ����*/
#define  KDVP_ERR_MALLOC_MEM                 KDPLAY_ALLOC_MEMORY_ERROR  /*�ڴ����ʧ��*/
#define  KDVP_ERR_FUNC_NOT_SUPPORT           KDPLAY_OPERTION_NOTALLOWED  /*�ù��ܲ��ṩ*/
#define  KDVP_ERR_MODULE_INITED              2204  /*��ģ���Ѿ�����ʼ��*/
#define  KDVP_ERR_MODULE_UNINITED            2205  /*��ģ��δ����ʼ��*/
#define  KDVP_ERR_PLYERID_INVALID            2206  /*VID PLYER ID�������ֵ*/
#define  KDVP_ERR_OSDID_INVALID              2207  /*OSD ID�������ֵ*/
#define  KDVP_ERR_SHOWRECTID_INVALID         2208  /*SHOWRECT ID�������ֵ*/
#define  KDVP_ERR_PARAM                      KDPLAY_PARA_OVER  /*��������*/
#define  KDVP_ERR_SHOWRECT_CREATED           2001  /*����ʾ�����Ѿ�����*/
#define  KDVP_ERR_SHOWRECT_UNCREATED         2002  /*����ʾ����δ����*/
#define  KDVP_ERR_GRAPHCARD_CAPS             2003  /*�Կ�������֧��*/
#define  KDVP_ERR_CREATE_TEXTURE             2004  /*����OPENGL�ڴ�����ʧ��*/
#define  KDVP_ERR_COMPILE_SHADER             2005  
#define  KDVP_ERR_LINK_SHADER                2006
#define  KDVP_ERR_FRAGMENT_LOAD              2007
#define  KDVP_ERR_CREATE_SCREEN              2008  /*������Ļʧ�ܣ������Ѿ�����*/
#define  KDVP_ERR_NO_MORE_VIDPLYER_NUM       2009  /*�Ѿ������㹻��Ĳ�������*/
#define  KDVP_ERR_PLYER_PAUSED               2010  /*�������Ѿ�����ͣ*/
#define  KDVP_ERR_CLRMODE_SETTED             2011  /*��ǰ�Ѿ��Ǹ�����ģʽ*/
#define  KDVP_ERR_SHOWRECT_DNOT_DRAW         2012  /*��Ч��ͣ����Ҫ�ػ�*/
#define  KDVP_ERR_NO_MORE_OSD_NUM            2013  /*�����ٴ���OSD����*/
#define  KDVP_ERR_OSD_SET_HIDE               2014  /*Osd��HIDE״̬�����õ�һ��*/
#define  KDVP_ERR_OPEN_DISPLAY               2015  /*XWINDOW��DISPLAYʧ��*/
#define  KDVP_ERR_CHOOSE_VISUAL              2016  /*XWINDOW choose visualʧ��*/
#define  KDVP_ERR_CREATE_CONTEXT             2017  /*����GL RENDER CONTEXTʧ��*/
#define  KDVP_ERR_MAKE_CURRENT_RC            2018  /*����OPENGL RC����ʧ��*/
#define  KDVP_ERR_WND_STYLE                  2019  /*���ڷ�񲻶�*/
#define  KDVP_ERR_CHOOSE_FORMAT              2020  /*ѡ��ƥ������ظ�ʽʧ��*/
#define  KDVP_ERR_SET_FORMAT                 2021  /*����ƥ������ظ�ʽʧ��*/
#define  KDVP_ERR_SET_RENDERTYPE             2022  /*�޷����Ĵ��ڵ���Ⱦ����*/
#define  KDVP_ERR_FOUND_VPWND_OF_VIDPLYER    2023  /*����ĳ����Ƶ��������Ĭ����ʾ����Ĵ������Դʧ�ܣ��ܿ��ܸ���Ƶ���Դ�����´��滻���ˡ�*/
#define  KDVP_ERR_HAVE_NO_OSDLAYER_OF_VPWND  2024  /*�ô������Դ��û����OSD��*/
#define  KDVP_ERR_THIS_THREAD_CREATED_PLYER  2025  /*���߳��Ѿ�����һ��PLYER��������ɾ���������ϲ㻻���߳�����ʾԭ��������PLYER*/
#define  KDVP_ERR_NO_MORE_SHOWRECT_NUM       2026  /*�޷��ٴ�����ʾ������*/
#define  KDVP_ERR_NOT_RIGHT_THREAD_ID        2027  /*����Ƶ�������ڸ��߳��д�����*/ 
#define  KDVP_ERR_GET_SWSCONTEXT             2028  /*����SWS CONTEXTʧ��*/
#define  KDVP_ERR_NO_MORE_WND                2029  /*û�и���Ĵ��ڿ��Դ���*/
#define  KDVP_ERR_MAKE_CURRENT               2030  /*ѡ��ǰRCʧ��*/
#define  KDVP_ERR_CREATE_PROGRAM             2031  /*����SHADER��PROGRAMʧ��*/
#define  KDVP_ERR_CREATE_SHADER              2032  /*����SHADERʧ��*/
#define  KDVP_ERR_ATTACH_SHADER              2033
#define  KDVP_ERR_GET_PROGRAM_SHADER         2034
#define  KDVP_ERR_SHOWRECT_DEATCH_WND        2035
#define  KDVP_ERR_CREATE_OPENGL_OBJ          2036
#define  KDVP_ERR_GET_XWINDOW_ATTRI          2037
#define  KDVP_ERR_WINDOW_SIZE                KDPLAY_WINDOW_SIZE_ERROR  /*��������Ϊ��������*/
#define  KDVP_ERR_SHOULD_DEL_PLYER           2039  /*ģ������ʼ��֮ǰ������ɾ��PLYER*/
#define  KDVP_ERR_CREATE_VPWND               2040
#define  KDVP_ERR_OPENGL_FUN_NOT_SUPPORT     2041
#define  KDVP_ERR_VP_CREATED                 2042
#define  KDVP_ERR_EARLY_INIT                 2100
#define  KDVP_ERR_ATTACH_THREAD_TO_JVM       2101
#define  KDVP_ERR_FOUND_VPGLSURFACEVIEW      2102
#define  KDVP_ERR_REG_JNI                    2103
#define  KDVP_DIDNOT_RENDER                  2104
#define  KDVP_ERR_DDRAW_EXCLUSIVEMODEALREADYSET  2142
#define  KDVP_ERR_SURFACE                        2143

//��Ƶ�ɼ�ģ�������
#define KDAC_OK                         KDPLAY_NOERROR
#define KDAC_ERROR                      4001
#define KDAC_ERR_OPEN_AC                4002
#define KDAC_ERR_CREATED                4003
#define KDAC_ERR_DEVID_INVALID          4004
#define KDAC_ERR_DEV_EXISTED            4005
#define KDAC_ERR_MALLOC                 4006
#define KDAC_ERR_NO_DEV                 4007
#define KDAC_ERR_AUD_CAP_OTHER_ERR      4008
#define KDAC_ERR_AUDDEV_PARAM           4009
#define KDAC_ERR_PARAM                  4010
#define KDAC_ERR_CREATE_DEV             4011   
#define KDAC_ERR_CREATE_THREAD          4012
#define KDAC_ERR_MODULE_UNINITED        4013
#define KDAC_ERR_MODULE_INITED          4014
#define KDAC_ERR_NEED_RESET				4015
#define KDAC_WARN_CAP_RENDER_FAILED     4100
#define KDAC_WARN_CAP_NOSURPPORT        4101 //��֧�ֵĲ����ʣ�Ҫ���û��ֶ�����Ϊ48K������16K��32K
#define KDAC_ERR_OUTBUF_EMPTY           4102

//��Ƶ����ģ�������
#define  KDAP_OK         KDPLAY_NOERROR
#define  KDAP_ERROR                  5001
#define  KDAP_ERR_PARAM              5002
#define  KDAP_ERR_MODULE_UNINITED    5003
#define  KDAP_ERR_STREAMID_INVALID   5004
#define  KDAP_ERR_NO_STREAM          5005
#define  KDAP_ERR_STREAM_FULL        5006
#define  KDAP_ERR_MALLOC_FAIL        KDPLAY_ALLOC_MEMORY_ERROR
#define  KDAP_ERR_CREATE_DEV         5008
#define  KDAP_ERR_OPEN_SND           5009
#define  KDAP_ERR_BUF_FULL           5010
#define  KDAP_ERR_IO_RESET           5011
#define  KDAP_ERR_AP_CODEC_CONTROL   5012 
#define  KDAP_ERR_FRAME_BUF_EMPTY    5013
#define  KDAP_ERR_CREATE_THREAD      5014
#define  KDAP_ERR_AUDDEV_PARAM       5015
#define  KDAP_ERR_OPEN_MIXER         5016
#define  KDAP_ERR_ATTACH_MIXER       5017
#define  KDAP_ERR_LOAD_MIXER         5018
#define  KDAP_ERR_REGISTER_MIXER     5019
#define  KDAP_ERR_FOUND_MASTER       5020
#define  KDAP_ERR_STREAM_MUTEX       5021
#define  KDAP_ERR_FRAMELEN           5022
#define  KDAP_ERR_MODULE_INITED      5023
#define  KDAP_ERR_STOP_SOUND         5024

//��Ƶ����ģ�������
#define  KDAE_OK                  KDPLAY_NOERROR
#define  KDAE_ERROR               6001
#define  KDAE_ERR_PARAM           6002
#define  KDAE_ERR_NO_ID           6003
#define  KDAE_ERR_MALLOC          6004
#define  KDAE_ERR_CREATE_THREAD   6005
#define  KDAE_ERR_CREATE_DECODER  6006
#define  KDAE_ERR_DEL_DECODER     6007
#define  KDAE_ERR_DECODE_AFRAME   6008
#define  KDAE_ERR_IN_BUF_FULL     6009
#define  KDAE_ERR_IN_BUF_EMPTY    6010
#define  KDAE_ERR_FRAME_SIZE      KDVD_ERR_FRAME_SIZE
#define  KDAE_ERR_MODULE_UNINITED 6012
#define  KDAE_ERR_MODULE_INITED   6013


//��Ƶ�ɼ�������
#define KDVC_OK                   KDPLAY_NOERROR
#define KDVC_ERROR                7001
#define KDVC_ERROR_PARAM          7002
#define KDVC_ERROR_INIT           7003
#define KDVC_ERROR_ENUM           7004
#define KDVC_ERROR_START          7005
#define KDVC_ERROR_GETPIN         7006
#define KDVC_ERROR_RENDER         7007
#define KDVC_ERROR_GETCAPBILITY   7008
#define KDVC_ERROR_SETCAPBILITY   7009
#define KDVC_ERROR_DEVICE         7010
#endif


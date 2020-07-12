#ifndef UNIPLAY_H_
#define UNIPLAY_H_
#include "kddef.h"
#include "kdvtype.h"


typedef BOOL (* KDDLL_Startup)();
typedef BOOL (* KDDLL_RegisterCompany)(const s8 *szCompany,const s8 *szGAT669AdapterPath);
typedef BOOL (* KDDLL_GetPort)(const s8 *szCompany, BOOL bHw,int *pnPort);
typedef BOOL (* KDDLL_OpenStream)(int nPort, s8* pHead,u32 nHeadLen, u32 nbufferlen);
typedef u32 (* KDDLL_GetLastError)(int nPort);
typedef BOOL (* KDDLL_OpenFile)(int nPort,const s8* szfile, int nfiletype);
typedef BOOL (* KDDLL_Play)(int nPort, void* hwnd);
typedef BOOL (* KDDLL_Stop)(int nPort);
typedef BOOL (* KDDLL_CloseFile)(int nPort);
typedef BOOL (* KDDLL_CloseStream)(int nPort);
typedef BOOL (* KDDLL_SetTSSampleRate)(int nPort,u32 u32AudioTSSampleRate,u32 u32VideoTSSampleRate);
typedef void (* KDDLL_FreePort)(int nPort);
typedef void (* KDDLL_Cleanup)();
typedef BOOL (* KDDLL_InputAudioData)(int nPort,KDTRawData *pAData);
typedef BOOL (* KDDLL_InputVideoData)(int nPort,KDTRawData *pVData);
typedef BOOL (* KDDLL_InputStreamData)(int nPort,KDTRawData *pVData);
typedef	BOOL (* KDDLL_ConvertToBmpFile)(u8 *pBuf,int nSize,int nWidth,int nHeight,long  nType,char * sFileName);
typedef	BOOL (* KDDLL_ConvertToJpegFile)(u8 *pBuf,int nSize,int nWidth,int nHeight,long  nType,char * sFileName);
typedef BOOL (* KDDLL_Snapshot)(int nPort,void *hWnd);
typedef BOOL (* KDDLL_SaveSnapshot)(int nPort,const s8 *szPicFileName, EImageType ePicType);
typedef BOOL (* KDDLL_CatchResizePic)(int nPort,const s8 *sFileName, u32 lTargetWidth, u32 lTargetHeight, EImageType ePicfomat);
typedef BOOL (* KDDLL_EnableMixerAudio)(int nPort, BOOL bEnable);
typedef BOOL (* KDDLL_OpenCaptureAudio)(int nPort,PCAPTIONCALLBACK captionCB,PKDFrameInfo pFrame,void* context);
typedef BOOL (* KDDLL_CloseCaptureAudio)(int nPort);
typedef BOOL (* KDDLL_StopLocalRecord)(int nPort);
typedef BOOL (* KDDLL_ConfigReEncode)(int nPort,PKDFrameInfo pCodecInfo,int iStreamType);
typedef u32 (* KDDLL_GetPlayTime)(int nPort);
typedef u32 (* KDDLL_GetTotalTime)(int nPort);
typedef BOOL (* KDDLL_SetFileEndCB)(int nPort,PFILEENDCALLBACK cb,void* context);
typedef BOOL (* KDDLL_SetRunTimeInfoCallBack)(int nPort, PRunTimeInfoCBFun pPRunTimeInfoCBFun, void *pContext);
typedef BOOL (* KDDLL_RefreshPlay)(int nPort,int nRegionNum);
typedef BOOL (* KDDLL_SetDisplayRegion)(int nPort,u32 nRegionNum, KDRECT* pSrcRect, void* hDestWnd, BOOL bEnable);
typedef BOOL (* KDDLL_GetPictureSize)(int nPort,u32* pHeight, u32* pWidth);
typedef BOOL (* KDDLL_SetAudioVolume)(int nPort,int wVolume);
typedef u32 (* KDDLL_GetAudioVolume)(int nPort);
typedef BOOL (* KDDLL_SetEncTypeChangeCallBack)(int nPort, PENCCALLBACK pFun,void *pParam);
typedef u32 (* KDDLL_GetVersion)();
typedef u32 (* KDDLL_GetCurrentFrameRate)(int nPort);
typedef BOOL (* KDDLL_SetStreamMode)(int nPort,int nmode);
typedef BOOL (* KDDLL_SetPlayPos)(int nPort, float fPos);
typedef u32 (* KDDLL_GetTotalFrameNum)(int nPort);
typedef float (* KDDLL_GetPlayPos)(int nPort);
typedef float (* KDDLL_GetKeyFramePos)(int nPort, int nValue, int nType, PKD_FRAME_POS pFramePos);
typedef float (* KDDLL_GetNextKeyFramePos)(int nPort , int nValue, int nType, PKD_FRAME_POS pFramePos);
typedef u32 (* KDDLL_GetPlayedFrames)(int nPort);
typedef BOOL (* KDDLL_SetAudCapMute)(int nPort, BOOL bMutex);
typedef BOOL (* KDDLL_SetAudCapVolume)(int nPort,int dwVolume);
typedef BOOL (* KDDLL_CloseCaptureAudio)(int nPort);
typedef BOOL (* KDDLL_SetAudioMutex)(int nPort, BOOL bMutex);
typedef BOOL (* KDDLL_AdjustWaveAudio)(int nPort,int nCoefficient);
typedef BOOL (* KDDLL_GetDecoderStatis)(int nPort,TDecStatis* pKdvDecStatis);
typedef BOOL (* KDDLL_SetDrawCallBack)(int nPort,PDRAWCALLBACK pFunc, void *pParam);
typedef BOOL (* KDDLL_PlaySound)(int nPort);
typedef BOOL (* KDDLL_PlaySoundEx)(int nPort, char* pszID[KD_MAX_KDAP_DEVICENUM], int nCount);
typedef BOOL (* KDDLL_StopSound)(int nPort);
typedef BOOL (* KDDLL_Fast)(int nPort);
typedef BOOL (* KDDLL_Slow)(int nPort);
typedef BOOL (* KDDLL_Pause)(int nPort, BOOL bPause);
typedef BOOL (* KDDLL_OneByOne)(int nPort);
typedef BOOL (* KDDLL_PlayOneBack)(int nPort);
typedef BOOL (* KDDLL_RevertPlay)(int nPort);
typedef BOOL (* KDDLL_SetPCMDataCallback)(int nPort,PDECCALLBACK pFun, void *pParam);
typedef BOOL (* KDDLL_SetRawDataCallback)(int nPort,PRAWDATACALLBACK pFun, void *pParam);
typedef BOOL (* KDDLL_SetYUVDataCallback)(int nPort,PDECCALLBACK pFun, void *pParam);
typedef BOOL (* KDDLL_SetYUVDataCallbackExt)(int nPort,PDECCALLBACKEXT pFun, void *pParam);
typedef BOOL (* KDDLL_SetDecInfoCallback)(int nPort,PDECCALLBACK pFun, void *pParam);
typedef BOOL (* KDDLL_SetColor)(int nPort,int nRegionNum,int nBrightness,int nContrast,int nSaturation, int nHue);
typedef BOOL (* KDDLL_GetColor)(int nPort,int nRegionNum, int* pBrightness,int* pContrast,int* pSaturation,int* pHue);
typedef BOOL (* KDDLL_GetBmp)(int nPort, char* pBitmap, int nBufSize, int* pBmpSize);
typedef BOOL (* KDDLL_VerticalSyncEnable)(int nPort,BOOL bEnable);
typedef BOOL (* KDDLL_SetRotateAngle)(int nPort, u32 nrotateType);
typedef BOOL (* KDDLL_GetDecoderStatis)(int nPort, TDecStatis* pKdvDecStatis);
typedef BOOL (* KDDLL_DenoiseFilter)(int nPort, BOOL  bEnable, int dwLevel);
typedef BOOL (* KDDLL_SetOsdParam)(int nPort, KDOsdParam* ptOsdParam, BOOL bOsd);
typedef BOOL (* KDDLL_ResetBuffer)(int nPort,int buffertype);
typedef u32 (* KDDLL_GetSourceBufferRemain)(int nPort, int iType);
typedef BOOL (* KDDLL_EnableAec)(int nPort,BOOL bEnable);
typedef BOOL (* KDDLL_StartLocalRecord)(int nPort, const s8* szRecFileName,int nRecodeType);
//typedef BOOL (CALLMETHOD* KDDLL_StartLocalRecordExt)(int nPort, const int8_t* szRecFileName,int nRecodeType,int iStreamType);
typedef BOOL (* KDDLL_SetPlayTime)(int nPort, u32 nTime);
typedef BOOL (* KDDLL_SetLogConfig)(int iTarget,int iLevel,char* pLogFile,int iFileNum,int iModule);
typedef BOOL (* KDDLL_SetDrawMode)(int nDrawMode);
typedef BOOL (* KDDLL_GetDrawMode)(int nPort, int *pDrawMode);
typedef BOOL (* KDDLL_SetDecodeDelay)(int nPort,u32 uiVideoStartDecThreshold,u32 uiVideoFastDecThreshold,u32 uiAudioStartDecThreshold, u32 uiMaxBufTimeLen);
typedef BOOL (* KDDLL_SetDecoderMode)(int nPort,int cDecoderMode);
typedef BOOL (* KDDLL_SyncToAudio)(int nPort, BOOL bSyncToAudio, int dwTsType);


BOOL		PLAYKD_Startup(int bUniplayLog);
BOOL        PLAYKD_RegisterCompany(const s8 *szCompany,const s8 *szGAT669AdapterPath);
BOOL		PLAYKD_GetPort(const s8 *szCompany,BOOL bHw,int *ppPort);
BOOL		PLAYKD_OpenStream(int nPort, s8* pHead,u32 nHeadLen,u32 nbufferlen);
u32			PLAYKD_GetLastError(int nPort);
BOOL		PLAYKD_Play(int nPort, void* hwnd);
BOOL		PLAYKD_OpenFile(int nPort,const s8* szfile, int nfiletype);
BOOL		PLAYKD_Stop(int nPort);
BOOL		PLAYKD_CloseFile(int nPort);
BOOL		PLAYKD_CloseStream(int nPort);
BOOL		PLAYKD_SetTSSampleRate(int nPort, u32 u32MediaType,u32 u32TimeStampSampleRate);
BOOL		PLAYKD_FreePort(int nPort);
BOOL		PLAYKD_Cleanup();
BOOL		PLAYKD_InputAudioData(int nPort,KDTRawData *pAData);
BOOL		PLAYKD_InputVideoData(int nPort,KDTRawData *pVData);
BOOL		PLAYKD_InputStreamData(int nPort,KDTRawData *pVData);
BOOL		PLAYKD_Snapshot(int nPort,void *hWnd);
BOOL		PLAYKD_SaveSnapshot(int nPort,const s8 *szPicFileName, EImageType ePicType);
BOOL		PLAYKD_ConvertToBmpFile(u8 *pBuf,int nSize,int nWidth,int nHeight,long  nType,char * sFileName);
BOOL		PLAYKD_ConvertToJpegFile(u8 *pBuf,int nSize,int nWidth,int nHeight,long  nType,char * sFileName);
BOOL		PLAYKD_CatchResizePic(int nPort,const s8 *sFileName, u32 lTargetWidth, u32 lTargetHeight, EImageType ePicfomat);
BOOL		PLAYKD_EnableMixerAudio(int nPort, BOOL bEnable);
BOOL		PLAYKD_OpenCaptureAudio(int nPort,PCAPTIONCALLBACK captionCB,PKDFrameInfo pFrame,void* context);
BOOL		PLAYKD_CloseCaptureAudio(int nPort);
BOOL		PLAYKD_StartLocalRecord(int nPort, const s8* szRecFileName,int nRecodeType);
BOOL        PLAYKD_StartLocalRecordExt(int nPort, const s8* szRecFileName,int nRecodeType,int iStreamType);
BOOL		PLAYKD_StopLocalRecord(int nPort);
BOOL        PLAYKD_ConfigReEncode(int nPort,PKDFrameInfo pCodecInfo,int iStreamType);
u32			PLAYKD_GetPlayTime(int nPort);
BOOL		PLAYKD_SetPlayTime(int nPort, u32 nTime);
u32			PLAYKD_GetTotalTime(int nPort);
BOOL		PLAYKD_SetFileEndCB(int nPort,PFILEENDCALLBACK cb,void* context);
BOOL		PLAYKD_SetRunTimeInfoCallBack(int nPort, PRunTimeInfoCBFun pPRunTimeInfoCBFun, void *pContext);
BOOL		PLAYKD_RefreshPlay(int nPort,int nRegionNum);
BOOL		PLAYKD_SetDisplayRegion(int nPort,u32 nRegionNum, KDRECT* pSrcRect, void* hDestWnd, BOOL bEnable);
BOOL		PLAYKD_GetPictureSize(int nPort,u32* pHeight, u32* pWidth);
BOOL		PLAYKD_SetAudioVolume(int nPort,u32 wVolume);
u32			PLAYKD_GetAudioVolume(int nPort);
BOOL		PLAYKD_SetEncTypeChangeCallBack(int nPort, PENCCALLBACK pFun,void *pParam);
u32			PLAYKD_GetVersion();
u32			PLAYKD_GetCurrentFrameRate(int nPort);
BOOL		PLAYKD_SetStreamMode(int nPort,int nmode);
BOOL		PLAYKD_SetPlayPos(int nPort, float fPos);
u32			PLAYKD_GetTotalFrameNum(int nPort);
float		PLAYKD_GetPlayPos(int nPort);
float		PLAYKD_GetKeyFramePos(int nPort, int nValue, int nType, PKD_FRAME_POS pFramePos);
float		PLAYKD_GetNextKeyFramePos(int nPort , int nValue, int nType, PKD_FRAME_POS pFramePos);
u32			PLAYKD_GetPlayedFrames(int nPort);
BOOL		PLAYKD_SetAudCapMute(int nPort, BOOL bMutex);
BOOL		PLAYKD_SetAudCapVolum(int nPort,int dwVolume);
BOOL		PLAYKD_SetAudioMutex(int nPort, BOOL bMutex);
BOOL		PLAYKD_AdjustWaveAudio(int nPort,int nCoefficient);
BOOL		PLAYKD_GetDecoderStatis(int nPort, TDecStatis* pKdvDecStatis);
BOOL		PLAYKD_SetDrawCallBack(int nPort,PDRAWCALLBACK pFunc, void *pParam);
BOOL		PLAYKD_PlaySound (int nPort);
BOOL		PLAYKD_PlaySoundEx (int nPort, char* pszID[KD_MAX_KDAP_DEVICENUM], int nCount);
BOOL		PLAYKD_StopSound (int nPort);
BOOL		PLAYKD_Fast(int nPort);
BOOL		PLAYKD_Slow(int nPort);
BOOL		PLAYKD_Pause(int nPort, BOOL bPause);
BOOL		PLAYKD_OneByOne(int nPort);
BOOL		PLAYKD_PlayOneBack(int nPort);
BOOL		PLAYKD_RevertPlay(int nPort);
BOOL		PLAYKD_SetPCMDataCallback(int nPort,PDECCALLBACK pFun, void *pParam);
BOOL		PLAYKD_SetRawDataCallback(int nPort,PRAWDATACALLBACK pFun, void *pParam);
BOOL		PLAYKD_SetYUVDataCallback(int nPort, PDECCALLBACK pFun, void *pParam);
BOOL		PLAYKD_SetYUVDataCallbackExt(int nPort, PDECCALLBACKEXT pFun, void *pParam);
BOOL		PLAYKD_SetDecInfoCallback(int nPort, PDECCALLBACK pFun, void *pParam);
BOOL		PLAYKD_SetColor(int nPort,int nRegionNum,int nBrightness,int nContrast,int nSaturation, int nHue);
BOOL		PLAYKD_GetColor(int nPort,int nRegionNum, int* pBrightness,int* pContrast,int* pSaturation,int* pHue);
BOOL        PLAYKD_GetBmp(int nPort, char* pBitmap, int nBufSize, int* pBmpSize);
BOOL		PLAYKD_VerticalSyncEnable(int nPort,BOOL bEnable);
BOOL		PLAYKD_SetRotateAngle(int nPort, u32 nrotateType);
BOOL		PLAYKD_DenoiseFilter(int nPort, BOOL  bEnable, int dwLevel);
BOOL		PLAYKD_SetOsdParam(int nPort, KDOsdParam* ptOsdParam, BOOL bOsd);
BOOL		PLAYKD_ResetBuffer(int nPort,int buffertype);
u32			PLAYKD_GetSourceBufferRemain(int nPort, int iType);
BOOL		PLAYKD_EnableAec(int nPort,BOOL bEnable);
BOOL		PLAYKD_SetLogConfig(int iTarget,int iLevel,char* pLogFile,int iFileNum,int iModule);
BOOL		PLAYKD_SetDrawMode(int nDrawMode);
BOOL        PLAYKD_GetDrawMode(int nPort, int *pDrawMode);
BOOL		PLAYKD_SetDecodeDelay(int nPort,u32 uiVideoStartDecThreshold,	u32 uiVideoFastDecThreshold,u32 uiAudioStartDecThreshold, u32 uiMaxBufTimeLen);
BOOL		PLAYKD_SetDecoderMode(int nPort,int cDecoderMode);
BOOL		PLAYKD_SyncToAudio(int nPort, BOOL bSyncToAudio, int dwTsType);

#endif //UNIPLAY_H_
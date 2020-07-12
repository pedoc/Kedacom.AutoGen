#include "uniplay_c.h"

HINSTANCE g_hUniplayDllInst = NULL;
#define PARAM 
#define PARAM1(p1)  p1
#define PARAM2(p1, p2) p1, p2
#define PARAM3(p1, p2, p3)  p1, p2, p3
#define PARAM4(p1, p2, p3, p4) p1, p2, p3, p4
#define PARAM5(p1, p2, p3, p4, p5) p1, p2, p3, p4, p5
#define PARAM6(p1, p2, p3, p4, p5, p6) p1, p2, p3, p4, p5, p6
#define PARAM7(p1, p2, p3, p4, p5, p6, p7) p1, p2, p3, p4, p5, p6, p7
#define PARAM8(p1, p2, p3, p4, p5, p6, p7, p8) p1, p2, p3, p4, p5, p6, p7, p8
#define PARAM9(p1, p2, p3, p4, p5, p6, p7, p8, p9) p1, p2, p3, p4, p5, p6, p7, p8, p9
#define PARAM10(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10) p1, p2, p3, p4, p5, p6, p7, p8, p9, p10
#define PARAM11(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11) p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11
#define PARAM12(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12) p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12
#define PARAM13(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13)  p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13

#define LOADDLLFUN(fun, funname, prm)  						       \
{										 							\
	fun _pFun = NULL;					 							\
	if (g_hUniplayDllInst != NULL)				 							\
	{																\
		_pFun = (fun)::GetProcAddress(g_hUniplayDllInst, funname);			\
	}																\
	if (_pFun == NULL)												\
	{																\
		return FALSE;												\
	}																\
																	\
return _pFun(prm);												\
}

#define LOADDLLFUN_INT(fun, funname, prm)  						       \
{										 							\
	fun _pFun = NULL;					 							\
	if (g_hUniplayDllInst != NULL)				 							\
	{																\
		_pFun = (fun)::GetProcAddress(g_hUniplayDllInst, funname);			\
	}																\
	if (_pFun == NULL)												\
		return 0;													\
																	\
	return _pFun(prm);												\
}

#define LOADDLLFUN_FLOAT(fun, funname, prm)  						       \
{										 							\
	fun _pFun = NULL;					 							\
	if (g_hUniplayDllInst != NULL)				 							\
{																\
	_pFun = (fun)::GetProcAddress(g_hUniplayDllInst, funname);			\
}																\
	if (_pFun == NULL)												\
	return -1.0;													\
	\
	return _pFun(prm);												\
}

#define LOADDLLFUN_VOID(fun, funname, prm)  						       \
{										 							\
	fun _pFun = NULL;					 							\
	if (g_hUniplayDllInst != NULL)				 							\
	{																\
		_pFun = (fun)::GetProcAddress(g_hUniplayDllInst, funname);			\
	}																\
	if (_pFun == NULL)												\
		return FALSE;													\
	\
	_pFun(prm);											\
	return TRUE;										\
}	

BOOL PLAYKD_Startup(int bUniplayLog)
{
	char szFilePath[MAX_PATH] = {0};
	GetModuleFileNameA(NULL, szFilePath, MAX_PATH);
	char* lpszEnd = strrchr(szFilePath, '\\');
	*(lpszEnd+1) = 0;
	strcat_s(szFilePath, "uniplay.dll");

	g_hUniplayDllInst = ::LoadLibraryA(szFilePath);
// 	if (NULL == g_hUniplayDllInst)
// 	{	// Web π”√
// 		HMODULE hDllHandle = GetModuleHandle("IPCWebMainFrame.dll");
// 		if (hDllHandle == NULL)
// 		{
// 			return FALSE;
// 		}
// 
// 		GetModuleFileNameA(hDllHandle, szFilePath, MAX_PATH);
// 		char* lpszEnd = strrchr(szFilePath, '\\');
// 		*(lpszEnd+1) = 0;
// 		strcat_s(szFilePath, "uniplay.dll");
// 		g_hUniplayDllInst = ::LoadLibraryA(szFilePath);
// 		if (NULL == g_hUniplayDllInst)
// 		{
// 			return FALSE;
// 		}
// 	}
	if (bUniplayLog == 1)
	{
		PLAYKD_SetLogConfig(TARGET_FILE|TARGET_LOGCAT, UNILOG_ERR|UNILOG_WARNING|UNILOG_INFO|UNILOG_DEBUG, "D:\\", 0, 0);
	}

	LOADDLLFUN(KDDLL_Startup, "PLAYKD_Startup", PARAM);
}

BOOL PLAYKD_Cleanup()
{
	LOADDLLFUN_VOID(KDDLL_Cleanup, "PLAYKD_Cleanup", PARAM);

	if (g_hUniplayDllInst != NULL)
	{
		if(::FreeLibrary(g_hUniplayDllInst) != 0)
		{	
			g_hUniplayDllInst = NULL;
		}
	}
}

BOOL PLAYKD_RegisterCompany(const s8 *szCompany,const s8 *szGAT669AdapterPath)
{
	LOADDLLFUN(KDDLL_RegisterCompany, "PLAYKD_RegisterCompany", PARAM2(szCompany, szGAT669AdapterPath));
}

BOOL PLAYKD_GetPort(const s8 *szCompany, BOOL bHw, int *ppPort)
{
	LOADDLLFUN(KDDLL_GetPort, "PLAYKD_GetPort", PARAM3(szCompany, bHw, ppPort));
}

BOOL PLAYKD_OpenStream(int nPort, s8* pHead, u32 nHeadLen, u32 nbufferlen)
{
	LOADDLLFUN(KDDLL_OpenStream, "PLAYKD_OpenStream", PARAM4(nPort, pHead, nHeadLen, nbufferlen));
}

u32	PLAYKD_GetLastError(int nPort)
{
	LOADDLLFUN_INT(KDDLL_GetLastError, "PLAYKD_GetLastError", PARAM1(nPort));
}

BOOL PLAYKD_Play(int nPort, void* hwnd)
{
	LOADDLLFUN(KDDLL_Play, "PLAYKD_Play", PARAM2(nPort, hwnd));
}

BOOL PLAYKD_OpenFile(int nPort, const s8* szfile, int nfiletype)
{
	LOADDLLFUN(KDDLL_OpenFile, "PLAYKD_OpenFile", PARAM3(nPort, szfile, nfiletype));
}

BOOL PLAYKD_Stop(int nPort)
{
	LOADDLLFUN(KDDLL_Stop, "PLAYKD_Stop", PARAM1(nPort));
}

BOOL PLAYKD_CloseFile(int nPort)
{
	LOADDLLFUN(KDDLL_CloseFile, "PLAYKD_CloseFile", PARAM1(nPort));
}

BOOL PLAYKD_CloseStream(int nPort)
{
	LOADDLLFUN(KDDLL_CloseStream, "PLAYKD_CloseStream", PARAM1(nPort));
}

BOOL PLAYKD_SetTSSampleRate(int nPort, u32 u32MediaType, u32 u32TimeStampSampleRate)
{
	LOADDLLFUN(KDDLL_SetTSSampleRate, "PLAYKD_SetTSSampleRate", PARAM3(nPort, u32MediaType, u32TimeStampSampleRate));
}

BOOL PLAYKD_FreePort(int nPort)
{
	LOADDLLFUN_VOID(KDDLL_FreePort, "PLAYKD_FreePort", PARAM1(nPort));
}

BOOL PLAYKD_InputAudioData(int nPort, KDTRawData *pAData)
{
	LOADDLLFUN(KDDLL_InputAudioData, "PLAYKD_InputAudioData", PARAM2(nPort, pAData));
}

BOOL PLAYKD_InputVideoData(int nPort, KDTRawData *pVData)
{
	LOADDLLFUN(KDDLL_InputVideoData, "PLAYKD_InputVideoData", PARAM2(nPort, pVData));
}

BOOL PLAYKD_InputStreamData(int nPort, KDTRawData *pVData)
{
	LOADDLLFUN(KDDLL_InputStreamData, "PLAYKD_InputStreamData", PARAM2(nPort, pVData));
}

BOOL PLAYKD_Snapshot(int nPort, void *hWnd)
{
	LOADDLLFUN(KDDLL_Snapshot, "PLAYKD_Snapshot", PARAM2(nPort, hWnd));
}

BOOL PLAYKD_SaveSnapshot(int nPort, const s8 *szPicFileName, EImageType ePicType)
{
	LOADDLLFUN(KDDLL_SaveSnapshot, "PLAYKD_SaveSnapshot", PARAM3(nPort, szPicFileName, ePicType));
}

BOOL PLAYKD_ConvertToBmpFile(u8 *pBuf, int nSize, int nWidth, int nHeight, long nType, char *sFileName)
{
	LOADDLLFUN(KDDLL_ConvertToBmpFile, "PLAYKD_ConvertToBmpFile", PARAM6(pBuf, nSize, nWidth, nHeight, nType, sFileName));
}

BOOL PLAYKD_ConvertToJpegFile(u8 *pBuf, int nSize, int nWidth, int nHeight, long nType, char * sFileName)
{
	LOADDLLFUN(KDDLL_ConvertToJpegFile, "PLAYKD_ConvertToJpegFile", PARAM6(pBuf, nSize, nWidth, nHeight, nType, sFileName));
}

BOOL PLAYKD_CatchResizePic(int nPort,const s8 *sFileName, u32 lTargetWidth, u32 lTargetHeight, EImageType ePicfomat)
{
	LOADDLLFUN(KDDLL_CatchResizePic, "PLAYKD_CatchResizePic", PARAM5(nPort, sFileName, lTargetWidth, lTargetHeight, ePicfomat));
}

BOOL PLAYKD_EnableMixerAudio(int nPort, BOOL bEnable)
{
	LOADDLLFUN(KDDLL_EnableMixerAudio, "PLAYKD_EnableMixerAudio", PARAM2(nPort, bEnable));
}

BOOL PLAYKD_OpenCaptureAudio(int nPort, PCAPTIONCALLBACK captionCB, PKDFrameInfo pFrame, void* context)
{
	LOADDLLFUN(KDDLL_OpenCaptureAudio, "PLAYKD_OpenCaptureAudio", PARAM4(nPort, captionCB, pFrame, context));
}

BOOL PLAYKD_CloseCaptureAudio(int nPort)
{
	LOADDLLFUN(KDDLL_CloseCaptureAudio, "PLAYKD_CloseCaptureAudio", PARAM1(nPort));
}

BOOL PLAYKD_StartLocalRecord(int nPort, const s8* szRecFileName, int nRecodeType)
{
	if (NULL == g_hUniplayDllInst)
		return FALSE;

	LOADDLLFUN(KDDLL_StartLocalRecord, "PLAYKD_StartLocalRecord", PARAM3(nPort, szRecFileName, nRecodeType));

	return TRUE;
}

// BOOL PLAYKD_StartLocalRecordExt(int nPort, const s8* szRecFileName, int nRecodeType, int iStreamType)
// {
// 	if (NULL == g_hUniplayDllInst)
// 		return FALSE;
// 
// 	LOADDLLFUN(KDDLL_StartLocalRecordExt, "PLAYKD_StartLocalRecordExt", PARAM4(nPort, szRecFileName, nRecodeType, iStreamType));
// 
// 	return TRUE;
// }

BOOL PLAYKD_StopLocalRecord(int nPort)
{
	LOADDLLFUN(KDDLL_StopLocalRecord, "PLAYKD_StopLocalRecord", PARAM1(nPort));
}

BOOL PLAYKD_ConfigReEncode(int nPort, PKDFrameInfo pCodecInfo, int iStreamType)
{
	LOADDLLFUN(KDDLL_ConfigReEncode, "PLAYKD_ConfigReEncode", PARAM3(nPort, pCodecInfo, iStreamType));
}

u32 PLAYKD_GetPlayTime(int nPort)
{
	LOADDLLFUN(KDDLL_GetPlayTime, "PLAYKD_GetPlayTime", PARAM1(nPort));
}

BOOL PLAYKD_SetPlayTime(int nPort, u32 nTime)
{
	LOADDLLFUN(KDDLL_SetPlayTime, "PLAYKD_SetPlayTime", PARAM2(nPort, nTime));
}

u32 PLAYKD_GetTotalTime(int nPort)
{
	LOADDLLFUN(KDDLL_GetTotalTime, "PLAYKD_GetTotalTime", PARAM1(nPort));
}

BOOL PLAYKD_SetFileEndCB(int nPort, PFILEENDCALLBACK cb, void* context)
{
	LOADDLLFUN(KDDLL_SetFileEndCB, "PLAYKD_SetFileEndCB", PARAM3(nPort, cb, context));
}

BOOL PLAYKD_SetRunTimeInfoCallBack(int nPort, PRunTimeInfoCBFun pPRunTimeInfoCBFun, void *pContext)
{
	LOADDLLFUN(KDDLL_SetRunTimeInfoCallBack, "PLAYKD_SetRunTimeInfoCallBack", PARAM3(nPort, pPRunTimeInfoCBFun, pContext));
}

BOOL PLAYKD_RefreshPlay(int nPort, int nRegionNum)
{
	LOADDLLFUN(KDDLL_RefreshPlay, "PLAYKD_RefreshPlay", PARAM2(nPort, nRegionNum));
}

BOOL PLAYKD_SetDisplayRegion(int nPort, u32 nRegionNum, KDRECT* pSrcRect, void* hDestWnd, BOOL bEnable)
{
	LOADDLLFUN(KDDLL_SetDisplayRegion, "PLAYKD_SetDisplayRegion", PARAM5(nPort, nRegionNum, pSrcRect, hDestWnd, bEnable));
}

BOOL PLAYKD_GetPictureSize(int nPort, u32* pHeight, u32* pWidth)
{
	LOADDLLFUN(KDDLL_GetPictureSize, "PLAYKD_GetPictureSize", PARAM3(nPort, pHeight, pWidth));
}

BOOL PLAYKD_SetAudioVolume(int nPort, u32 wVolume)
{
	LOADDLLFUN(KDDLL_SetAudioVolume, "PLAYKD_SetAudioVolume", PARAM2(nPort, wVolume));
}

u32	 PLAYKD_GetAudioVolume(int nPort)
{
	LOADDLLFUN_INT(KDDLL_GetAudioVolume, "PLAYKD_GetAudioVolume", PARAM1(nPort));
}

BOOL PLAYKD_SetEncTypeChangeCallBack(int nPort, PENCCALLBACK pFun, void *pParam)
{
	LOADDLLFUN(KDDLL_SetEncTypeChangeCallBack, "PLAYKD_SetEncTypeChangeCallBack", PARAM3(nPort, pFun, pParam));
}

u32 PLAYKD_GetVersion()
{
	LOADDLLFUN_INT(KDDLL_GetVersion, "PLAYKD_GetVersion", PARAM);
}

u32 PLAYKD_GetCurrentFrameRate(int nPort)
{
	LOADDLLFUN_INT(KDDLL_GetCurrentFrameRate, "PLAYKD_GetCurrentFrameRate", PARAM1(nPort));
}

BOOL PLAYKD_SetStreamMode(int nPort, int nmode)
{
	LOADDLLFUN(KDDLL_SetStreamMode, "PLAYKD_SetStreamMode", PARAM2(nPort, nmode));
}

BOOL PLAYKD_SetPlayPos(int nPort, float fPos)
{
	LOADDLLFUN(KDDLL_SetPlayPos, "PLAYKD_SetPlayPos", PARAM2(nPort, fPos));
}

u32 PLAYKD_GetTotalFrameNum(int nPort)
{
	LOADDLLFUN_INT(KDDLL_GetTotalFrameNum, "PLAYKD_GetTotalFrameNum", PARAM1(nPort));
}

float PLAYKD_GetPlayPos(int nPort)
{
	LOADDLLFUN(KDDLL_GetPlayPos, "PLAYKD_GetPlayPos", PARAM1(nPort));
}

float PLAYKD_GetKeyFramePos(int nPort, int nValue, int nType, PKD_FRAME_POS pFramePos)
{
	LOADDLLFUN_FLOAT(KDDLL_GetKeyFramePos, "PLAYKD_GetKeyFramePos", PARAM4(nPort, nValue, nType, pFramePos));
}

float PLAYKD_GetNextKeyFramePos(int nPort , int nValue, int nType, PKD_FRAME_POS pFramePos)
{
	LOADDLLFUN_FLOAT(KDDLL_GetNextKeyFramePos, "PLAYKD_GetNextKeyFramePos", PARAM4(nPort, nValue, nType, pFramePos));
}

u32 PLAYKD_GetPlayedFrames(int nPort)
{
	LOADDLLFUN(KDDLL_GetPlayedFrames, "PLAYKD_GetPlayedFrames", PARAM1(nPort));
}

BOOL PLAYKD_SetAudCapMute(int nPort, BOOL bMutex)
{
	LOADDLLFUN(KDDLL_SetAudCapMute, "PLAYKD_SetAudCapMute", PARAM2(nPort, bMutex));
}

BOOL PLAYKD_SetAudCapVolum(int nPort, int dwVolume)
{
	LOADDLLFUN(KDDLL_SetAudCapVolume, "PLAYKD_SetAudCapVolum", PARAM2(nPort, dwVolume));
}

BOOL PLAYKD_SetAudioMutex(int nPort, BOOL bMutex)
{
	LOADDLLFUN(KDDLL_SetAudioMutex, "PLAYKD_SetAudioMutex", PARAM2(nPort, bMutex));
}

BOOL PLAYKD_AdjustWaveAudio(int nPort,int nCoefficient)
{
	LOADDLLFUN(KDDLL_AdjustWaveAudio, "PLAYKD_AdjustWaveAudio", PARAM2(nPort, nCoefficient));
}

BOOL PLAYKD_GetDecoderStatis(int nPort, TDecStatis* pKdvDecStatis)
{
	LOADDLLFUN(KDDLL_GetDecoderStatis, "PLAYKD_GetDecoderStatis", PARAM2(nPort, pKdvDecStatis));
}

BOOL PLAYKD_SetDrawCallBack(int nPort,PDRAWCALLBACK pFunc, void *pParam)
{
	LOADDLLFUN(KDDLL_SetDrawCallBack, "PLAYKD_SetDrawCallBack", PARAM3(nPort, pFunc, pParam));
}

BOOL PLAYKD_PlaySound (int nPort)
{
	LOADDLLFUN(KDDLL_PlaySound, "PLAYKD_PlaySound", PARAM1(nPort));
}

BOOL PLAYKD_PlaySoundEx (int nPort, char* pszID[KD_MAX_KDAP_DEVICENUM], int nCount)
{
	LOADDLLFUN(KDDLL_PlaySoundEx, "PLAYKD_PlaySound", PARAM3(nPort, pszID, nCount));
}

BOOL PLAYKD_StopSound (int nPort)
{
	LOADDLLFUN(KDDLL_StopSound, "PLAYKD_StopSound", PARAM1(nPort));
}

BOOL PLAYKD_Fast(int nPort)
{
	LOADDLLFUN(KDDLL_Fast, "PLAYKD_Fast", PARAM1(nPort));
}

BOOL PLAYKD_Slow(int nPort)
{
	LOADDLLFUN(KDDLL_Slow, "PLAYKD_Slow", PARAM1(nPort));
}

BOOL PLAYKD_Pause(int nPort, BOOL bPause)
{
	//LOADDLLFUN(KDDLL_Pause, "PLAYKD_Pause", PARAM2(nPort, bPause));
	KDDLL_Pause _pFun = NULL;					 							
	if (g_hUniplayDllInst != NULL)				 							
	{																
		_pFun = (KDDLL_Pause)::GetProcAddress(g_hUniplayDllInst, "PLAYKD_Pause");			
	}																
	if (_pFun == NULL)												
		return FALSE;												

	return _pFun(nPort, bPause);				
}

BOOL PLAYKD_OneByOne(int nPort)
{
	LOADDLLFUN(KDDLL_OneByOne, "PLAYKD_OneByOne", PARAM1(nPort));
}

BOOL PLAYKD_PlayOneBack(int nPort)
{
	LOADDLLFUN(KDDLL_PlayOneBack, "PLAYKD_PlayOneBack", PARAM1(nPort));
}

BOOL PLAYKD_RevertPlay(int nPort)
{
	LOADDLLFUN(KDDLL_RevertPlay, "PLAYKD_RevertPlay", PARAM1(nPort));
}

BOOL PLAYKD_SetPCMDataCallback(int nPort, PDECCALLBACK pFun, void *pParam)
{
	LOADDLLFUN(KDDLL_SetPCMDataCallback, "PLAYKD_SetPCMDataCallback", PARAM3(nPort, pFun, pParam));
}

BOOL PLAYKD_SetRawDataCallback(int nPort, PRAWDATACALLBACK pFun, void *pParam)
{
	LOADDLLFUN(KDDLL_SetRawDataCallback, "PLAYKD_SetRawDataCallback", PARAM3(nPort, pFun, pParam));
}

BOOL PLAYKD_SetYUVDataCallback(int nPort, PDECCALLBACK pFun, void *pParam)
{
	LOADDLLFUN(KDDLL_SetYUVDataCallback, "PLAYKD_SetYUVDataCallback", PARAM3(nPort, pFun, pParam));
}

BOOL PLAYKD_SetYUVDataCallbackExt(int nPort, PDECCALLBACKEXT pFun, void *pParam)
{
	LOADDLLFUN(KDDLL_SetYUVDataCallbackExt, "PLAYKD_SetYUVDataCallbackExt", PARAM3(nPort, pFun, pParam));
}

BOOL PLAYKD_SetDecInfoCallback(int nPort, PDECCALLBACK pFun, void *pParam)
{
	LOADDLLFUN(KDDLL_SetDecInfoCallback, "PLAYKD_SetDecInfoCallback", PARAM3(nPort, pFun, pParam));
}

BOOL PLAYKD_SetColor(int nPort, int nRegionNum, int nBrightness, int nContrast, int nSaturation, int nHue)
{
	LOADDLLFUN(KDDLL_SetColor, "PLAYKD_SetColor", PARAM6(nPort, nRegionNum, nBrightness, nContrast, nSaturation, nHue));
}

BOOL PLAYKD_GetColor(int nPort, int nRegionNum, int* pBrightness, int* pContrast, int* pSaturation, int* pHue)
{
	LOADDLLFUN(KDDLL_GetColor, "PLAYKD_GetColor", PARAM6(nPort, nRegionNum, pBrightness, pContrast, pSaturation, pHue));
}

BOOL PLAYKD_GetBmp(int nPort, char* pBitmap, int nBufSize, int* pBmpSize)
{
	LOADDLLFUN(KDDLL_GetBmp, "PLAYKD_GetBmp", PARAM4(nPort, pBitmap, nBufSize, pBmpSize));
}

BOOL PLAYKD_VerticalSyncEnable(int nPort, BOOL bEnable)
{
	LOADDLLFUN(KDDLL_VerticalSyncEnable, "PLAYKD_VerticalSyncEnable", PARAM2(nPort, bEnable));
}

BOOL PLAYKD_SetRotateAngle(int nPort, u32 nrotateType)
{
	LOADDLLFUN(KDDLL_SetRotateAngle, "PLAYKD_SetRotateAngle", PARAM2(nPort, nrotateType));
}

BOOL PLAYKD_DenoiseFilter(int nPort, BOOL  bEnable, int dwLevel)
{
	LOADDLLFUN(KDDLL_DenoiseFilter, "PLAYKD_DenoiseFilter", PARAM3(nPort, bEnable, dwLevel));
}

BOOL PLAYKD_SetOsdParam(int nPort, KDOsdParam* ptOsdParam, BOOL bOsd)
{
	LOADDLLFUN(KDDLL_SetOsdParam, "PLAYKD_SetOsdParam", PARAM3(nPort, ptOsdParam, bOsd));
}

BOOL PLAYKD_ResetBuffer(int nPort,int buffertype)
{
	LOADDLLFUN(KDDLL_ResetBuffer, "PLAYKD_ResetBuffer", PARAM2(nPort, buffertype));
}

u32 PLAYKD_GetSourceBufferRemain(int nPort, int iType)
{
	LOADDLLFUN(KDDLL_GetSourceBufferRemain, "PLAYKD_GetSourceBufferRemain", PARAM2(nPort, iType));
}

BOOL PLAYKD_EnableAec(int nPort, BOOL bEnable)
{
	LOADDLLFUN(KDDLL_EnableAec, "PLAYKD_EnableAec", PARAM2(nPort, bEnable));
}

BOOL PLAYKD_SetLogConfig(int iTarget, int iLevel, char* pLogFile, int iFileNum, int iModule)
{
	LOADDLLFUN(KDDLL_SetLogConfig, "PLAYKD_SetLogConfig", PARAM5(iTarget, iLevel, pLogFile, iFileNum, iModule));
}

BOOL PLAYKD_SetDrawMode(int nDrawMode)
{
	LOADDLLFUN(KDDLL_SetDrawMode, "PLAYKD_SetDrawMode", PARAM1(nDrawMode));
}

BOOL PLAYKD_GetDrawMode(int nPort, int *pDrawMode)
{
	LOADDLLFUN(KDDLL_GetDrawMode, "PLAYKD_GetDrawMode", PARAM2(nPort, pDrawMode));
}

BOOL PLAYKD_SetDecodeDelay(int nPort, u32 uiVideoStartDecThreshold,	 u32 uiVideoFastDecThreshold, u32 uiAudioStartDecThreshold, u32 uiMaxBufTimeLen)
{
	LOADDLLFUN(KDDLL_SetDecodeDelay, "PLAYKD_SetDecodeDelay", PARAM5(nPort, uiVideoStartDecThreshold, uiVideoFastDecThreshold, uiAudioStartDecThreshold, uiMaxBufTimeLen));
}

BOOL PLAYKD_SetDecoderMode(int nPort, int cDecoderMode)
{
	LOADDLLFUN(KDDLL_SetDecoderMode, "PLAYKD_SetDecoderMode", PARAM2(nPort, cDecoderMode));
}

BOOL PLAYKD_SyncToAudio(int nPort, BOOL bSyncToAudio, int dwTsType)
{
	LOADDLLFUN(KDDLL_SyncToAudio, "PLAYKD_SyncToAudio", PARAM3(nPort, bSyncToAudio, dwTsType));
}
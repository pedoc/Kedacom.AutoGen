using System;
using System.Runtime.InteropServices;

namespace Kedacom.AutoGen
{
    public unsafe struct tagHandleParam
    {
        public ulong @dwIpAddr;
        public ushort @wPort;
        public byte_array64 @szUserNmae;
        public byte_array64 @szUserPassword;
        public uint @dwReserved;
    }
    
    public unsafe struct tagNetParam
    {
        public ulong @dwIpAddr;
        public ushort @wPort;
    }
    
    public unsafe struct tagPlayVideoInfo
    {
        public ushort @wRtcpVideoPort;
        public ushort @wRtcpAudioPort;
    }
    
    public unsafe struct tagPlayVideoParam
    {
        public byte @byVideoSouce;
        public byte_array17 @szStreamType;
        public byte_array17 @szTransType;
        public byte @byStreamChn;
        public byte_array32 @szAdmin;
        public byte_array32 @szPassword;
        public uint @dwSrcIP;
        public ushort @wRtspPort;
        public ushort @wRtpVideoPort;
        public ushort @wRtcpVideoPort;
        public ushort @wRtpAudioPort;
        public ushort @wRtcpAudioPort;
        public ushort @wRtpAudioPort2;
        public ushort @wRtcpAudioPort2;
        public byte_array260 @szMediaURL;
        public uint @hPlayWnd;
    }
    
    public unsafe struct tagRTCPCallStateInfo
    {
        public bool @bCallState;
    }
    
    public unsafe struct tagRTCPPrepareCallInfo
    {
        public uint @dwID;
        public ushort @wRtpPort;
        public ushort @wRtcpPort;
        public byte_array17 @szStreamType;
    }
    
    public unsafe struct tagRTSPParam
    {
        public byte @byVideoSource;
        public ushort @wVideoChanID;
    }
    
    public unsafe struct tagRTSPRecParam
    {
        public byte @byVideoSource;
        public ushort @wVideoChanID;
        public uint @nPlayID;
        public uint @nID;
        public byte_array32 @szStartTime;
        public byte_array32 @szEndTime;
        public byte_array32 @szSeekTime;
    }
    
    public unsafe struct tagRTSPInfo
    {
        public byte_array260 @szurl;
        public ushort @wRtspPort;
        public bool @bDoubleAudio;
    }
    
    public unsafe struct tagRTCPVideoVolumeInfo
    {
        public bool @bAudioEnable;
        public byte @byVolume;
    }
    
    public unsafe struct tagMultiVideoModeInfo
    {
        public byte_array17 @szMode;
    }
    
    public unsafe struct tagMultiVideoModeParam
    {
        public byte @byVideoSource;
        public tagMultiVideoModeInfo @tMultiVideoInfo;
    }
    
    public unsafe struct tagVideoFrameCapList
    {
        public byte_array64 @szFrameRateCap;
        public byte @byMin;
        public byte @byMax;
        public byte @byDef;
    }
    
    public unsafe struct tagVideoCapList
    {
        public byte @byStreamTypeCap;
        public byte @byStreamIdCap;
        public byte_array128 @szResolutionCap;
        public byte_array64 @szEncoderComplexityCap;
        public tagVideoFrameCapList_array32 @tVideoCapList;
    }
    
    public unsafe struct tagVideoEnc
    {
        public byte_array17 @szResolution;
        public byte_array17 @szDataRateType;
        public ushort @wMaxDataRate;
        public byte_array17 @szQuality;
        public byte @byFrameRate;
        public byte_array17 @szVideoType;
        public byte_array17 @szEncoderComplexity;
        public ushort @wIFrameSpeed;
    }
    
    public unsafe struct tagVideoEncInfo
    {
        public tagVideoCapList_array15 @tVideoCapList;
        public tagVideoEnc @tVideoEnc;
    }
    
    public unsafe struct tagVideoEncParam
    {
        public byte @byVideoSource;
        public byte @byStreamId;
        public byte @byStreamType;
        public tagVideoEnc @tVideoEnc;
    }
    
    public unsafe struct tagAudioEncInfo
    {
        public byte @byVolume;
        public bool @bAec;
        public byte_array17 @szType;
        public byte_array17 @szInputMode;
        public byte_array17 @szSampling;
    }
    
    public unsafe struct tagAudioEncParam
    {
        public byte @byVideoSource;
        public byte @byStreamId;
        public tagAudioEncInfo @tAudioEncInfo;
    }
    
    public unsafe struct tagAudioDecInfo
    {
        public byte @byVolume;
        public bool @bMixerRec;
        public bool @bModeEnable;
        public byte_array64 @szTypeList;
        public byte_array17 @szOutputType;
    }
    
    public unsafe struct tagAudioDecParam
    {
        public byte @byVideoSource;
        public byte @byStreamId;
        public tagAudioDecInfo @tAudioDecInfo;
    }
    
    public unsafe struct tagShieldArea
    {
        public byte_array17 @szName;
        public byte_array17 @szColor;
        public byte_array17 @szType;
        public byte @byPointNum;
        public ushort_array8 @x;
        public ushort_array8 @y;
    }
    
    public unsafe struct tagVideoShield
    {
        public bool @bEnable;
        public ushort @wVgaWidth;
        public ushort @wVgaHeight;
        public ushort @wMinWidth;
        public ushort @wMinHeight;
        public byte_array17 @szAllColor;
        public byte @byAreaNum;
    }
    
    public unsafe struct tagVideoShieldInfo
    {
        public tagVideoShield @tVideoShield;
        public tagShieldArea_array4 @tShieldArea;
    }
    
    public unsafe struct tagVideoShieldParam
    {
        public byte @byVideoSource;
        public tagVideoShield @tVideoShield;
        public tagShieldArea_array4 @tShieldArea;
    }
    
    public unsafe struct tagVideoRoi
    {
        public bool @bEnable;
        public ushort @wVgaWidth;
        public ushort @wVgaHeight;
        public ushort @wMinWidth;
        public ushort @wMinHeight;
        public byte_array17 @szCodeLevel;
    }
    
    public unsafe struct tagRoiArea
    {
        public byte_array17 @szType;
        public byte @byPointNum;
        public ushort_array4 @x;
        public ushort_array4 @y;
    }
    
    public unsafe struct tagVideoRoiInfo
    {
        public tagVideoRoi @tVideoRoi;
        public tagRoiArea @tRoiArea;
    }
    
    public unsafe struct tagVideoRoiParam
    {
        public byte @byVideoSource;
        public tagVideoRoi @tVideoRoi;
        public tagRoiArea @tRoiArea;
    }
    
    public unsafe struct tagVideoEncCut
    {
        public bool @bEnable;
        public ushort @wVgaWidth;
        public ushort @wVgaHeight;
        public ushort @wMinWidth;
        public ushort @wMinHeight;
    }
    
    public unsafe struct tagEncCutArea
    {
        public ushort @wX;
        public ushort @wY;
        public ushort @wWidth;
        public ushort @wHeight;
    }
    
    public unsafe struct tagVideoEncCutInfo
    {
        public tagVideoEncCut @tVideoEncCut;
        public tagEncCutArea @tEncCutArea;
    }
    
    public unsafe struct tagVideoEncCutParam
    {
        public byte @byVideoSource;
        public tagVideoEncCut @tVideoEncCut;
        public tagEncCutArea @tEncCutArea;
    }
    
    public unsafe struct tagOsdStateInfo
    {
        public byte_array17 @szState;
        public byte @byProcess;
    }
    
    public unsafe struct tagOsdPrepareParam
    {
        public byte @byVideoSource;
        public byte_array17 @szPicId;
        public bool @bIsAlarm;
        public byte @byPicSn;
        public ushort @wFileLen;
        public ushort @wSendLenMax;
    }
    
    public unsafe struct tagOsdCapInfo
    {
        public byte_array33 @szTimeFormat;
        public byte_array33 @szFontName;
        public byte_array33 @szFontColor;
        public byte_array17 @szFontBkColor;
        public byte_array65 @szOsdType;
    }
    
    public unsafe struct tagOsdUploadFileParam
    {
        public byte @byVideoSource;
        public ushort @wStartPos;
        public ushort @wDataLen;
        public byte* @pData;
    }
    
    public unsafe struct tagOsdList
    {
        public byte_array17 @szOsdType;
        public bool @bVisiable;
        public byte @bySn;
        public ushort @wOsdX;
        public ushort @wOsdY;
        public ushort @wOsdWidth;
        public ushort @wOsdHeight;
        public byte @bynindex;
        public byte_array65 @szContext;
    }
    
    public unsafe struct tagOsdListInfo
    {
        public tagOsdList_array16 @tOsdList;
    }
    
    public unsafe struct tagSmartOsd
    {
        public byte_array32 @szType;
        public uint @dwX;
        public uint @dwY;
        public uint @dwWidth;
        public uint @dwHeight;
    }
    
    public unsafe struct tagSmartOsdInfo
    {
        public tagSmartOsd_array24 @tSmartOsd;
    }
    
    public unsafe struct tagSmartOsdParam
    {
        public byte @byVideoSource;
        public byte @bySmartOsdNum;
        public tagSmartOsd_array24 @tOsdSmartList;
    }
    
    public unsafe struct tagOsdListParam
    {
        public byte @byVideoSource;
        public byte @byOsdNum;
        public tagOsdList_array16 @tOsdList;
    }
    
    public unsafe struct tagOsdInfo
    {
        public bool @bUploadOsdPic;
        public ushort @wResolutionWidth;
        public ushort @wResolutionHeight;
        public byte_array33 @szTimeFormat;
        public bool @bTimeSingleRow;
        public byte_array17 @szFontName;
        public byte_array17 @szFontColor;
        public byte_array17 @szFontBkColor;
        public bool @bFontTransparent;
        public bool @bFontEdge;
        public byte @byBackGuageTop;
        public byte @byBackGuageBotton;
        public byte @byBackGuageLeft;
        public byte @byBackGuageRight;
    }
    
    public unsafe struct tagOsdParam
    {
        public byte @byVideoSource;
        public byte_array33 @szTimeFormat;
        public bool @bTimeSingleRow;
        public byte_array17 @szFontName;
        public byte_array17 @szFontColor;
        public byte_array17 @szFontBkColor;
        public bool @bFontTransparent;
        public bool @bFontEdge;
        public byte @byBackGuageTop;
        public byte @byBackGuageBotton;
        public byte @byBackGuageLeft;
        public byte @byBackGuageRight;
    }
    
    public unsafe struct tagImgDefParam
    {
        public byte @byVideoSource;
        public byte_array17 @szcolorrecov;
    }
    
    public unsafe struct tagColorInfo
    {
        public byte @byBrightnessLevel;
        public byte @bycContrastLevel;
        public byte @bySaturationLevel;
        public byte @byHueLevel;
    }
    
    public unsafe struct tagColorParam
    {
        public byte @byVideoSource;
        public tagColorInfo @tColorInfo;
    }
    
    public unsafe struct tagFocusInfo
    {
        public byte_array17 @szFocusStyle;
        public byte_array17 @szFocusMin;
        public byte_array17 @szFocusMax;
    }
    
    public unsafe struct tagFocusParam
    {
        public byte @byVideoSource;
        public tagFocusInfo @tFocusInfo;
    }
    
    public unsafe struct tagWhiteBlanceInfo
    {
        public byte_array17 @szWhiteBlaneceStyle;
        public byte @byBlanceRed;
        public byte @byBlanceBlue;
    }
    
    public unsafe struct tagWhiteBlanceParam
    {
        public byte @byVideoSource;
        public tagWhiteBlanceInfo @tWhiteBlanceInfo;
    }
    
    public unsafe struct tagIrcutFixTime
    {
        public byte_array17 @szstarttime;
        public byte_array17 @szendtime;
        public bool @bEnable;
    }
    
    public unsafe struct tagIrcutWeekTime
    {
        public tagIrcutFixTime_array7 @tIrcutWeekdayTime;
    }
    
    public unsafe struct tagIrcutFilterInfo
    {
        public byte_array17 @szircutfiltertype;
        public byte_array17 @sztrigger;
        public byte_array17 @szdaytonightlevel;
        public byte_array17 @szdaytonighttime;
        public byte @byPhotoLevel;
        public tagIrcutFixTime @tIrcutTimeAll;
        public tagIrcutWeekTime @tIrcutTimeWeekDay;
    }
    
    public unsafe struct tagIrcutFilterParam
    {
        public byte @byVideoSource;
        public tagIrcutFilterInfo @tImageIrcutFilterInfo;
    }
    
    public unsafe struct tagIrisInfo
    {
        public byte_array17 @szIrisMode;
        public byte @byIrisSize;
        public byte @byIrisLevel;
    }
    
    public unsafe struct tagIrisParam
    {
        public byte @byVideoSource;
        public tagIrisInfo @tIrisInfo;
    }
    
    public unsafe struct tagShutterInfo
    {
        public byte_array17 @szshutermode;
        public byte_array17 @szshutermin;
        public byte_array17 @szshuterlevel;
    }
    
    public unsafe struct tagShutterParam
    {
        public byte @byVideoSource;
        public tagShutterInfo @tShutterInfo;
    }
    
    public unsafe struct tagGainInfo
    {
        public byte_array17 @szgainmode;
        public byte @byGainMax;
        public byte @byGainLevel;
    }
    
    public unsafe struct tagGainParam
    {
        public byte @byVideoSource;
        public tagGainInfo @tGainInfo;
    }
    
    public unsafe struct tagInfraredInfo
    {
        public byte_array17 @szControlMode;
        public byte @byInfraredLevel;
    }
    
    public unsafe struct tagInfraredParam
    {
        public byte @byVideoSource;
        public tagInfraredInfo @tInfraredInfo;
    }
    
    public unsafe struct tagLaserInfo
    {
        public byte_array17 @szControlMode;
        public byte @byLaserLevel;
        public byte_array17 @szSpotMode;
    }
    
    public unsafe struct tagLaserParam
    {
        public byte @byVideoSource;
        public tagLaserInfo @tLaserInfo;
    }
    
    public unsafe struct tagCorridoModeInfo
    {
        public byte_array17 @szCorridoMode;
    }
    
    public unsafe struct tagCorridoModeParam
    {
        public byte @byVideoSource;
        public tagCorridoModeInfo @tCorridoModeInfo;
    }
    
    public unsafe struct tagImageModeInfo
    {
        public byte_array17 @szImageMode;
    }
    
    public unsafe struct tagImageModeParam
    {
        public byte @byVideoSource;
        public tagImageModeInfo @tImageModeInfo;
    }
    
    public unsafe struct tag2DNoise
    {
        public byte_array17 @szNoiseReduce2DMode;
        public byte @byNoiseReduce2DLevel;
    }
    
    public unsafe struct tag2DNoiseParam
    {
        public byte @byVideoSource;
        public tag2DNoise @tNoiseReduceInfo;
    }
    
    public unsafe struct tagNoiseReduce3DInfo
    {
        public byte_array17 @szNoiseReduce3DMode;
        public byte @byNoiseReduce3DLevel;
    }
    
    public unsafe struct tagNoiseReduce3DParam
    {
        public byte @byVideoSource;
        public tagNoiseReduce3DInfo @tNoiseReduceInfo;
    }
    
    public unsafe struct tagLocalEchoInfo
    {
        public byte_array17 @szLocalEchoMode;
    }
    
    public unsafe struct tagLocalEchoParam
    {
        public byte @byVideoSource;
        public tagLocalEchoInfo @tLocalEchoInfo;
    }
    
    public unsafe struct tagPowerLineFrequencyInfo
    {
        public byte_array17 @szPowerLineFrequencyMode;
    }
    
    public unsafe struct tagPowerLineFrequencyParam
    {
        public byte @byVideoSource;
        public tagPowerLineFrequencyInfo @tPowerLineFrequencyInfo;
    }
    
    public unsafe struct tagDynamicArea
    {
        public byte_array17 @szType;
        public byte @byPointNum;
        public ushort_array16 @x;
        public ushort_array16 @y;
    }
    
    public unsafe struct tagDynamicModeInfo
    {
        public byte_array17 @szMode;
        public byte @nLevel;
        public byte_array17 @szPosition;
        public ushort @wMinWidth;
        public ushort @wMinHeight;
        public ushort @wVGAWidth;
        public ushort @wVGAHeight;
        public tagDynamicArea @tDynamicArea;
    }
    
    public unsafe struct tagDynamicModeParam
    {
        public byte @byVideoSource;
        public tagDynamicModeInfo @tDynamicModeInfo;
    }
    
    public unsafe struct tagFillLight
    {
        public byte_array7 @szMode;
        public ushort @wBrightness;
        public ushort @wThreshold;
    }
    
    public unsafe struct tagDynPlugin
    {
        public bool @bEnable;
    }
    
    public unsafe struct tagDeviceInfo
    {
        public byte_array65 @szDevName;
        public byte_array65 @szDevType;
        public byte_array65 @szSerial;
        public byte_array65 @szVerHard;
        public byte_array65 @szVerSoft;
        public byte_array65 @szSeriesName;
        public byte @byNumVideo;
        public byte @byCardNum;
        public byte @bySlotNum;
        public byte @byCaseNum;
    }
    
    public unsafe struct tagEepromInfo
    {
        public int @nMsgType;
        public byte @byChanID;
        public byte_array128 @szDevName;
        public byte_array128 @szPid;
        public byte_array128 @szHid;
        public uint @dwHwVer;
        public uint @deHwSubVer;
    }
    
    public unsafe struct tagUserDef
    {
        public byte_array65 @szTitle;
        public byte_array129 @szContent;
    }
    
    public unsafe struct tagCheckPoint
    {
        public byte_array65 @szName;
        public byte_array65 @szDevnum;
        public tagUserDef_array10 @tUserdeflist;
        public byte @byUserdefNum;
    }
    
    public unsafe struct tagCheckPointInfo
    {
        public int @dwCurindex;
        public tagCheckPoint_array10 @tCheckpointlist;
        public bool @bIsshowname;
        public bool @bIsshowplateno;
        public bool @bIsshowdevnum;
        public bool @bIsshowtime;
        public bool @bIsshowuserdef;
        public byte @byCheckPointNum;
    }
    
    public unsafe struct tagCheckPointParam
    {
        public byte @byVideoSource;
        public int @dwCurindex;
        public tagCheckPoint_array10 @tCheckpointlist;
        public bool @bIsshowname;
        public bool @bIsshowplateno;
        public bool @bIsshowdevnum;
        public bool @bIsshowtime;
        public bool @bIsshowuserdef;
        public byte @byCheckPointNum;
    }
    
    public unsafe struct tagManualSnap
    {
        public int @dwIndex;
        public bool @bEnable;
        public byte_array65 @szSnaptype;
        public uint @dwSnapnum;
        public int @dwSnapinterval;
        public bool @bVidrecenable;
        public int @dwVidrectime;
        public byte_array9 @szSavePathType;
    }
    
    public unsafe struct tagManualSnapInfo
    {
        public tagManualSnap_array6 @snapInfo;
        public byte @byManualSnapNum;
    }
    
    public unsafe struct tagDevSeqInfo
    {
        public int @typeID;
        public int @byChanID;
        public byte_array128 @devseq;
    }
    
    public unsafe struct tagTToolInfo
    {
        public byte_array16 @toolType;
        public int @toolValue;
    }
    
    public unsafe struct tagSysTimeInfo
    {
        public byte_array8 @szTimeZone;
        public uint @dwYear;
        public uint @dwMonth;
        public uint @dwDay;
        public uint @dwHour;
        public uint @dwMinute;
        public uint @dwSecond;
    }
    
    public unsafe struct tagTimeAutoInfo
    {
        public bool @bAuto;
        public byte @byMode;
        public byte_array260 @szNtpUrl;
        public ushort @wNtpPort;
        public ushort @wNtpTimeSpeed;
    }
    
    public unsafe struct tagAutoAdaptInfo
    {
        public bool @bCheck;
        public byte_array10 @szMode;
    }
    
    public unsafe struct tagTimeAutoInfoEx
    {
        public bool @bAuto;
        public unMode @unModeInfo;
        public tagAutoAdaptInfo_array4 @autoAdaptInfo;
        public bool @bNtpEnable;
        public ushort @wAdaptlocktime;
        public byte_array260 @szNtpUrl;
        public ushort @wNtpPort;
        public ushort @wNtpTimeSpeed;
    }
    
    public unsafe struct unMode
    {
        public byte @byMode;
        public byte_array10 @szMode;
    }
    
    public unsafe struct tagDSTInfo
    {
        public bool @bEnable;
        public byte @byStartMonth;
        public byte @byStartWeek;
        public byte @byStartDay;
        public byte @byStartHour;
        public byte @byEndMonth;
        public byte @byEndWeek;
        public byte @byEndDay;
        public byte @byEndHour;
        public byte @byOffMinute;
    }
    
    public unsafe struct tagRSInfo
    {
        public byte_array33 @szType;
        public uint @dwBaudrate;
        public uint @dwDataBit;
        public uint @dwStopBit;
        public byte @byAddressNum;
        public byte_array17 @szParityBit;
        public byte_array17 @szStreamControl;
        public byte_array33 @szControlProtocol;
    }
    
    public unsafe struct tagLedInfo
    {
        public bool @bOpen;
        public byte* @szTime;
    }
    
    public unsafe struct tagUserActiveInfo
    {
        public byte_array64 @szUserNmae;
        public byte_array64 @szUserPassword;
        public byte_array128 @szMailAddr;
    }
    
    public unsafe struct tagUploadInfo
    {
        public uint @nLenFile;
        public uint @nMaxLen_Send;
        public byte_array260 @szFilePath;
    }
    
    public unsafe struct tagDownloadInfo
    {
        public uint @nLenFile;
        public uint @nMaxLen_Send;
        public byte_array260 @szFilePath;
    }
    
    public unsafe struct tagDdnsInfo
    {
        public bool @bDdnsEnable;
        public byte_array8 @szDdnsType;
        public byte_array260 @szDevurl;
        public byte_array65 @szUserName;
        public byte_array65 @szPassWord;
    }
    
    public unsafe struct tagUploadState
    {
        public byte_array17 @szState;
        public uint @nProgress;
    }
    
    public unsafe struct tagPowerInfo
    {
        public byte_array17 @szType;
        public bool @bView;
        public bool @bRecanPic;
        public bool @bPtz;
        public bool @bParamSet;
        public bool @bMemory;
        public bool @bReboot;
        public bool @bSystem;
    }
    
    public unsafe struct tagUserInfo
    {
        public byte_array65 @szUserName;
        public byte_array65 @szOldUserName;
        public byte_array65 @szUserPassword;
        public byte_array65 @szOldUserPassword;
        public byte_array17 @szUserType;
        public bool @bView;
        public bool @bRecanPic;
        public bool @bPtz;
        public bool @bParamSet;
        public bool @bMemory;
        public bool @bReboot;
        public bool @bSystem;
    }
    
    public unsafe struct tagUserDelInfo
    {
        public byte_array65 @szUserName;
        public byte_array65 @szUserPassword;
        public byte_array17 @szUserType;
    }
    
    public unsafe struct tagUserUpdateInfo
    {
        public byte_array65 @szUserName_Old;
        public byte_array65 @szUserPassword_Old;
        public byte_array65 @szUserName_New;
        public byte_array65 @szUserPassword_New;
        public byte_array17 @szUserType;
        public bool @bView;
        public bool @bRecanPic;
        public bool @bPtz;
        public bool @bParamSet;
        public bool @bMemory;
        public bool @bReboot;
        public bool @bSystem;
    }
    
    public unsafe struct tagAdvancedInfo
    {
        public byte_array33 @szKVispTimeStamp;
        public byte_array33 @szKVispKeepLive;
        public byte_array33 @szOnvifKeepLive;
        public byte_array33 @szGB28181KeepLive;
        public byte_array33 @szCGIKeepLive;
        public byte_array33 @szKVispOSDPicSource;
        public byte_array33 @szKVispOSDFontName;
        public bool @bTCControl;
        public byte_array33 @szMTCFMode;
        public byte_array33 @szAccMode;
    }
    
    public unsafe struct tagDdnsState
    {
        public byte_array10 @szDdnsState;
    }
    
    public unsafe struct tagTCPIPv6Info
    {
        public byte @byIpMode;
        public bool @bDnsAutoEnable;
        public uint @dwSubNetMask;
        public uint @dwDefGateway;
        public byte_array260 @szIpAddr;
        public byte_array260 @szMultCastAddr;
        public byte_array260 @szDNSFirst;
        public byte_array260 @szDNSAlter;
    }
    
    public unsafe struct tagTCPIPv4Info
    {
        public byte @byAddrType;
        public bool @bDnsAutoEnable;
        public uint @dwSubNetMask;
        public uint @dwDefGateway;
        public uint @dwIP;
        public byte_array260 @szMultCastAddr;
        public byte_array260 @szDNSFirst;
        public byte_array260 @szDNSAlter;
    }
    
    public unsafe struct tagIPInfo
    {
        public byte_array18 @szMac;
        public uint @dwMtu;
        public tagTCPIPv4Info @tIpv4Info;
        public tagTCPIPv6Info @tIpv6Info;
    }
    
    public unsafe struct tagPortInfo
    {
        public ushort @wHttpPort;
        public ushort @wHttpsPort;
        public ushort @wRtspPort;
        public ushort @wMulticastPort;
    }
    
    public unsafe struct tagWlanInfo
    {
        public byte_array5 @szMode;
        public byte_array33 @szSSid;
        public byte_array5 @szSecurity;
        public byte_array5 @szEncrypt;
        public byte_array17 @szPassword;
        public ushort @wChannel;
        public byte_array5 @szApband;
    }
    
    public unsafe struct tagUPnPInfo
    {
        public bool @bEnable;
        public byte_array64 @szAlias;
        public byte_array17 @szPortMapMode;
    }
    
    public unsafe struct tagUPnPPortMap
    {
        public bool @bCheck;
        public byte_array17 @szProtocolName;
        public byte_array17 @szState;
        public byte_array5 @szMode;
        public ushort @wPort;
        public uint @dwIp;
    }
    
    public unsafe struct tagPPPoEInfo
    {
        public bool @bEnable;
        public uint @dwDynamicIp;
        public byte_array65 @szUserName;
        public byte_array65 @szPassWord;
    }
    
    public unsafe struct tagKSnmpInfo
    {
        public ushort @wSvrPort;
        public uint @dwSvrIP;
        public uint @dwCpuVpt;
        public uint @dwMemeryVPT;
        public uint @dwLostVPT;
        public byte_array33 @szDevAdress;
    }
    
    public unsafe struct tag8021xInfo
    {
        public bool @bEnable;
        public byte_array17 @szProtocoltype;
        public byte_array17 @szEapolVersion;
        public byte_array65 @szUserName;
        public byte_array65 @szPassWord;
    }
    
    public unsafe struct tagQosInfo
    {
        public bool @bEnable;
        public uint @dwVideoDscpValue;
        public uint @dwManagerDscpValue;
    }
    
    public unsafe struct tagKVispInfo
    {
        public bool @bEnable;
        public bool @bSendNatPac;
        public bool @bSelfNetWork;
        public byte @byAddrtype;
        public ushort @wIpPort;
        public ushort @wLinkCheckTimeSpeed;
        public uint @dwIpv4;
        public byte_array33 @szUuid;
        public byte_array33 @szNetPassWord;
        public byte_array260 @szUrl;
        public byte_array260 @szIpv6;
    }
    
    public unsafe struct tagONVIFInfo
    {
        public bool @byOnvifEnable;
        public byte_array260 @szUrl;
    }
    
    public unsafe struct tagAuthModeInfo
    {
        public byte_array8 @szAuthtication;
    }
    
    public unsafe struct tagGBEncChnInfo
    {
        public uint @dwIndex;
        public byte @byStramChn;
        public byte_array33 @szId;
        public byte_array33 @szName;
    }
    
    public unsafe struct tagGBAlarmChnInfo
    {
        public uint @dwIndex;
        public byte_array33 @szId;
        public byte_array33 @szName;
    }
    
    public unsafe struct tagGB28181Info
    {
        public bool @bEnable;
        public ushort @wLocalPort;
        public ushort @wPlatPort;
        public uint @dwReletTime;
        public uint @dwHeartBeat;
        public uint @dwIpv4;
        public byte_array33 @szPlatId;
        public byte_array33 @szNetid;
        public byte_array33 @szDevOwner;
        public byte_array33 @szCivilCode;
        public byte_array33 @szPoliceRgn;
        public byte_array33 @szSetupAddress;
        public byte_array1024 @szExpand;
        public byte_array260 @szIpv6;
        public byte_array64 @szDevName;
        public byte_array64 @szUserName;
        public byte_array64 @szPassWord;
    }
    
    public unsafe struct tagDpssInfo
    {
        public bool @bEnable;
        public ushort @wIpPort;
        public uint @dwIpv4;
        public byte_array35 @szUuid;
        public byte_array260 @szIpv6;
    }
    
    public unsafe struct tagMobilenetwork
    {
        public bool @bEnable;
        public bool @bUseDefaultApn;
        public byte_array33 @szApn;
        public byte_array33 @szNum;
        public byte_array64 @szUser;
        public byte_array64 @szPassword;
        public byte_array16 @szCarrieroperator;
        public byte_array16 @szAuthentication;
        public byte_array16 @szNetworksystem;
        public byte_array16 @szNetworkstatus;
        public byte_array16 @szSigstatus;
        public byte_array16 @szImei;
        public byte_array16 @szIpaddress;
        public byte_array16 @szSubnetmask;
        public byte_array16 @szDefaultgateway;
        public byte_array16 @szDns1;
        public byte_array16 @szDns2;
        public byte_array16 @szSimCard;
    }
    
    public unsafe struct tagPubsec
    {
        public bool @bEnable;
        public byte_array33 @szNetid;
        public byte_array64 @szUser;
        public byte_array64 @szPassword;
        public byte_array260 @szSetupaddress;
        public byte_array260 @szCivilcode;
        public byte_array16 @szPlatAddr;
        public ushort @wPort;
        public ushort @wHeartbeat;
    }
    
    public unsafe struct tagStorageState
    {
        public byte_array33 @szState;
    }
    
    public unsafe struct tagDiskInfo
    {
        public byte @bySN;
        public uint @dwDiskCapacity;
        public uint @dwRisidual;
        public byte_array17 @szState;
        public byte_array17 @szDiskType;
        public byte_array17 @szAttribute;
    }
    
    public unsafe struct tagStorageManager
    {
        public byte_array17 @szFullMode;
        public int @nDiskMun;
        public tagDiskInfo_array5 @tDiskInfo;
    }
    
    public unsafe struct tagStorageFomat
    {
        public byte @byDiskSn;
    }
    
    public unsafe struct tagFomatState
    {
        public bool @bFomating;
        public ushort @wProgress;
    }
    
    public unsafe struct tagRecSchedule
    {
        public bool @bEnable;
        public byte_array9 @szPrepareTime;
        public byte_array9 @szDelayTime;
        public byte_array7 @szRecType;
        public byte_array17 @szESPS;
    }
    
    public unsafe struct tagSnapPicConfig
    {
        public byte_array9 @szPicType;
        public byte_array10 @szPicResolution;
        public byte_array17 @szPicQuality;
    }
    
    public unsafe struct tagSnapTime
    {
        public bool @bEnable;
        public byte_array5 @szSnapType;
        public ushort @wSnapSpeed;
        public ushort @wSnapNum;
    }
    
    public unsafe struct tagSnapEvent
    {
        public bool @bEnable;
        public ushort @wSnapSpeed;
        public ushort @wSnapNum;
    }
    
    public unsafe struct tagLinkMode
    {
        public bool @bLinkUploadCenter;
        public bool @bLinkShowOsd;
        public bool @bLinkAudioOut;
        public bool @bLinkRec;
        public bool @bLinkSnap;
        public bool @bLinkSmtp;
        public bool @bLinkPtzEnb;
        public byte @byLinkPtzPreset;
    }
    
    public unsafe struct tagA1List
    {
        public bool @bEnable;
        public ushort @wIndex;
    }
    
    public unsafe struct tagOtherLinkMode
    {
        public tagA1List_array5 @tA1List;
        public uint @dwA1Num;
        public bool @bPtz;
        public byte @byPreset;
    }
    
    public unsafe struct tagDetectPoint
    {
        public uint_array4 @x;
        public uint_array4 @y;
    }
    
    public unsafe struct tagDetectInfo
    {
        public bool @bEnable;
        public uint @dwVgaWidth;
        public uint @dwVgaHeight;
        public byte @byLevel;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagAlarmInfo
    {
        public bool @bEnable;
        public uint @dwVgaWidth;
        public uint @dwVgaHeight;
        public byte @byLevel;
        public byte @byAreaLevel;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagWarningLineParam
    {
        public ushort @wIndex;
        public uint @dwLevel;
        public uint @dwRatio;
        public uint @dwRatioLeftPtX;
        public uint @dwRatioLeftPtY;
        public uint @dwRatioRightPtX;
        public uint @dwRatioRightPtY;
        public byte_array5 @szDirectionType;
        public bool @bMediaMode;
        public byte_array5 @szMediaMode;
        public uint @dwLineLeftPtX;
        public uint @dwLineLeftPtY;
        public uint @dwLineRightPtX;
        public uint @dwLineRightPtY;
        public uint @dwPtAX;
        public uint @dwPtAY;
        public uint @dwPtBX;
        public uint @dwPtBY;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagWarningLineInfo
    {
        public bool @bEnable;
        public uint @dwVgaWidth;
        public uint @dwVgaHeight;
        public uint @dwLevelMax;
        public uint @dwLevelMin;
        public uint @dwRatioMax;
        public uint @dwRatioMin;
        public uint @dwSelected;
        public tagWarningLineParam_array4 @tWarningLine;
    }
    
    public unsafe struct tagAreaPointList
    {
        public uint @dwPtX;
        public uint @dwPtY;
    }
    
    public unsafe struct tagAreaDetectParam
    {
        public ushort @wIndex;
        public uint @dwLevel;
        public uint @dwRatio;
        public uint @dwThreshold;
        public uint @dwRatioLeftPtX;
        public uint @dwRatioLeftPtY;
        public uint @dwRatioRightPtX;
        public uint @dwRatioRightPtY;
        public bool @bMediaMode;
        public byte_array5 @szMediaMode;
        public uint @dwPiontNum;
        public tagAreaPointList_array6 @tPtList;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagAreaDetectInfo
    {
        public bool @bEnable;
        public uint @dwVgaWidth;
        public uint @dwVgaHeight;
        public uint @dwLevelMax;
        public uint @dwLevelMin;
        public uint @dwRatioMax;
        public uint @dwRatioMin;
        public uint @dwThresholdMax;
        public uint @dwThresholdMin;
        public uint @dwSelected;
        public tagAreaDetectParam_array4 @tAreaDetect;
    }
    
    public unsafe struct tagObjectDetectParam
    {
        public ushort @wIndex;
        public uint @dwLevel;
        public uint @dwRatio;
        public uint @dwThreshold;
        public uint @dwRatioLeftPtX;
        public uint @dwRatioLeftPtY;
        public uint @dwRatioRightPtX;
        public uint @dwRatioRightPtY;
        public uint @dwPiontNum;
        public tagAreaPointList_array6 @tPtList;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagObjectDetectInfo
    {
        public bool @bEnable;
        public uint @dwVgaWidth;
        public uint @dwVgaHeight;
        public uint @dwLevelMax;
        public uint @dwLevelMin;
        public uint @dwRatioMax;
        public uint @dwRatioMin;
        public uint @dwThresholdMax;
        public uint @dwThresholdMin;
        public uint @dwSelected;
        public tagObjectDetectParam_array4 @tObjectDetect;
    }
    
    public unsafe struct tagPersontDetectParam
    {
        public ushort @wIndex;
        public uint @dwRatio;
        public uint @dwPiontNum;
        public tagAreaPointList_array6 @tPtList;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagPersonDetectInfo
    {
        public bool @bEnable;
        public uint @dwVgaWidth;
        public uint @dwVgaHeight;
        public uint @dwRatioMax;
        public uint @dwRatioMin;
        public uint @dwSelected;
        public tagPersontDetectParam_array4 @tPersonDetect;
    }
    
    public unsafe struct tagVirtualFocusInfo
    {
        public bool @bEnable;
        public uint @dwLevelMax;
        public uint @dwLevelMin;
        public uint @dwLevel;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagSightChangeInfo
    {
        public bool @bEnable;
        public uint @dwLevelMax;
        public uint @dwLevelMin;
        public uint @dwLevel;
        public byte_array16 @szChkMode;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagAudioExceptInfo
    {
        public bool @bEnable;
        public uint @dwThresholdMax;
        public uint @dwThresholdMin;
        public uint @dwThreshold;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagFaceDetectInfo
    {
        public bool @bEnable;
    }
    
    public unsafe struct tagAlarmInInfo
    {
        public bool @bEnable;
        public uint @dwAlarmNum;
        public byte_array33 @szAlarmName;
        public byte_array17 @szAlarmType;
        public byte_array4 @szCopyToAlarm;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagAlarmOutInfo
    {
        public byte_array4 @szType;
        public byte_array17 @szDelyTime;
    }
    
    public unsafe struct tagExceptType
    {
        public byte_array32 @szType;
    }
    
    public unsafe struct tagExceptInfo
    {
        public bool @bEnable;
        public byte_array32 @szType;
        public tagLinkMode @tLinkMode;
        public tagOtherLinkMode @tOtherLinkMode;
    }
    
    public unsafe struct tagPtzMove
    {
        public byte_array17 @szType;
        public int @nSpeed;
        public int @nTilSpeed;
    }
    
    public unsafe struct tagPtzAquillaPtMove
    {
        public uint @dwHorizontal;
        public int @nVertical;
        public byte @bymutiple;
        public int @nPanSpeed;
        public int @nTilSpeed;
        public uint @dwTime;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzAquillaPtzAngle
    {
        public uint @dwHorizontal;
        public int @nVertical;
        public uint @dwRatio;
        public byte @bymutiple;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzDevCheckRlt
    {
        public byte_array65 @szMac;
        public uint @nHvalue;
        public uint @nVvalue;
        public bool @bFinish;
    }
    
    public unsafe struct tagPtzScan
    {
        public byte_array17 @szType;
        public byte_array17 @szMode;
    }
    
    public unsafe struct tagPtzZoneZoom
    {
        public byte_array17 @szType;
        public uint @dwWidth;
        public uint @dwHeight;
        public uint @dwX;
        public uint @dwY;
    }
    
    public unsafe struct tagPtzGotoPoint
    {
        public byte_array17 @szType;
        public byte @byX;
        public byte @byY;
    }
    
    public unsafe struct tagPtzWiper
    {
        public bool @bEnable;
    }
    
    public unsafe struct tagPtzPreset
    {
        public ushort @wSn;
        public bool @bEnable;
        public byte_array33 @szName;
        public byte_array33 @szEvtType;
    }
    
    public unsafe struct tagPtzPresetAll
    {
        public tagPtzPreset_array256 @tPtzPreset;
    }
    
    public unsafe struct tagPtzBase
    {
        public byte_array32 @szPtzVer;
        public ushort @wScanRate;
        public bool @bEnableDepth;
    }
    
    public unsafe struct tagPtzMainTain
    {
        public bool @bEnableOutage;
        public byte_array7 @szOutageMemery;
        public ushort @wOutageTime;
        public ushort @wPreSet;
    }
    
    public unsafe struct tagPtzRefactory
    {
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzWatchOn
    {
        public bool @bEnable;
        public byte_array16 @szWatchmode;
        public uint @dwWaitTime;
        public ushort @wPreset;
        public byte @byPathCruise;
        public byte @bySyncScan;
    }
    
    public unsafe struct tagPtzLimit
    {
        public bool @bKeyLimit;
        public bool @bScanLimit;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzPathCruise
    {
        public int @nIndex;
        public int @nResvePos;
        public ushort @wStayTime;
        public bool @bEnable;
        public byte_array33 @szName;
    }
    
    public unsafe struct tagPtzPathCruiseEvt
    {
        public int @nIndex;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagTimeTask
    {
        public bool @bEnable;
        public uint @dwWaitTime;
    }
    
    public unsafe struct tagTimeTaskList
    {
        public byte @byWeekDay;
        public byte @byTimeIndex;
        public bool @bEnable;
        public byte_array32 @szStartTime;
        public byte_array32 @szEndTime;
        public byte_array16 @szCruiseMode;
        public ushort @wPreset;
        public byte @byPathCruise;
        public byte @bySyncScan;
        public byte_array17 @szAssParam1;
    }
    
    public unsafe struct tagPtzCoorDinate
    {
        public uint @dwHorizontal;
        public int @nVertical;
        public byte @bymutiple;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzRatio
    {
        public uint @dwRatio;
        public int @nRatioMin;
        public int @nRatioMax;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzCoorDinateEx
    {
        public uint @dwHorizontal;
        public int @nVertical;
        public uint @dwRatio;
        public byte @bymutiple;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagPtzHVangle
    {
        public uint @dwX;
        public uint @dwY;
        public int @nHangleMin;
        public int @nHangleMax;
        public int @nVangleMin;
        public int @nVangleMax;
    }
    
    public unsafe struct tagPtzWsInfo
    {
        public byte_array32 @szIP;
        public ushort @wPort;
        public byte_array260 @szUrl;
    }
    
    public unsafe struct tagPtzPatternsInfo
    {
        public byte_array10 @szPatternState;
        public ushort @wIndex;
        public bool_array4 @patternslist;
    }
    
    public unsafe struct tagPtzPatternEvt
    {
        public byte @byPatternPath;
        public byte_array32 @szEvtType;
    }
    
    public unsafe struct tagEventTime
    {
        public byte @byWeekDay;
        public byte @byTimeIndex;
        public bool @bEnable;
        public ushort @wStartTime_Year;
        public ushort @wStartTime_Month;
        public ushort @wStartTime_Day;
        public byte_array32 @szStartTime;
        public ushort @wEndTime_Year;
        public ushort @wEndTime_Month;
        public ushort @wEndTime_Day;
        public byte_array32 @szEndTime;
        public byte_array17 @szAssParam1;
    }
    
    public unsafe struct tagTimeEx
    {
        public byte_array32 @szTime;
    }
    
    public unsafe struct tagRecMonthInfo
    {
        public bool_array32 @byHadRec;
    }
    
    public unsafe struct tagRecParam
    {
        public uint_array12 @dwRecType;
        public tagTimeEx @tStartTime;
        public tagTimeEx @tEndTime;
    }
    
    public unsafe struct tagRecData
    {
        public uint @dwIndex;
        public uint @dwRecId;
        public uint @dwRecType;
        public tagTimeEx @tStartTime;
        public tagTimeEx @tEndTime;
    }
    
    public unsafe struct tagRecStartPlayParam
    {
        public uint @dwStartID;
        public uint @dwRcvIp;
        public ushort @wRtpVideoPort;
        public ushort @wRtcpVideoPort;
        public ushort @wRtpAudioPort;
        public ushort @wRtcpAudioPort;
        public ushort @wRtpAudioPort2;
        public ushort @wRtcpAudioPort2;
        public tagTimeEx @tStartTime;
        public tagTimeEx @tEndTime;
        public tagTimeEx @tPlayTime;
    }
    
    public unsafe struct tagRecStartPlayInfo
    {
        public uint @dwPlayID;
        public ushort @wRtcpVideoPort;
        public ushort @wRtcpAudioPort;
        public ushort @wRtcpAudioPort2;
    }
    
    public unsafe struct tagRecPlayStateInfo
    {
        public byte_array10 @szState;
        public tagTimeEx @tPlayTime;
        public uint @dwTimeStamp;
    }
    
    public unsafe struct KedaTeleZoomAlgoParam
    {
        public uint @dwTeleZoomInRatio;
        public uint @dwTeleCurvLevel;
        public uint @dwTeleMultVal;
        public uint @dwWideRatio;
        public uint @dwMidWidth;
        public uint @dwMidHeight;
        public uint @dwAdjHeight;
        public float @f32WidthScale;
    }
    
    public unsafe struct tagTeleZoomParam
    {
        public byte @bOpen;
        public byte @bLevel;
        public KedaTeleZoomAlgoParam @tTeleZoom;
    }
    
    public unsafe struct tagMalfAlgoParam
    {
        public byte @bOpen;
        public uint @dwMalfParam1;
        public uint @dwMalfParam2;
    }
    
    public unsafe struct tagMtcfInfoParam
    {
        public byte @bMtcf;
    }
    
    public unsafe struct tagBatStatusInfo
    {
        public ushort @wBatteryStatus;
    }
    
    public unsafe struct tagWifiProbeInfo
    {
        public bool @bEnable;
        public bool @bReportPlatform;
        public bool @bDisable;
        public bool @bMacEnable;
        public bool @bSignalEnable;
        public bool @bTimeEnable;
        public int @nLongitude;
        public int @nLongitudeMax;
        public int @nLongitudeMin;
        public int @nLatitude;
        public int @nLatitudeMax;
        public int @nLatitudeMin;
        public byte_array260 @szProvinceCode;
        public byte_array260 @szCityCode;
        public byte_array260 @szAreaCode;
        public byte_array260 @szAddress;
        public int @dwDeviceNum;
    }
    
    public unsafe struct tagWifiProbeListInfo
    {
        public byte_array260 @szMac;
        public byte_array260 @szSignal;
        public byte_array260 @szTime;
    }
    
    public unsafe struct tagColorSize
    {
        public byte_array64 @szColor;
    }
    
    public unsafe struct tagHotState
    {
        public byte_array64 @szState;
    }
    
    public unsafe struct tagPositionInfo
    {
        public bool @bEnable;
        public byte_array32 @szPosmode;
        public int @nRtpInterval;
        public byte_array32 @szEWindicador;
        public byte_array32 @szNSindicador;
        public byte_array8 @szSpdUnit;
        public byte_array32 @szLocation;
        public int @nSpeedMile;
        public int @nSpeedKm;
    }
    
    public unsafe struct tagBasicPosInfo
    {
        public int @nHpos;
        public int @nVpos;
        public int @nZoomValue;
    }
    
    public unsafe struct tagLoginInfo
    {
        public uint @dwIP;
        public ushort @wPort;
        public byte_array64 @szUser;
        public byte_array64 @szPasswd;
        public ushort @wTime;
    }
    
    public unsafe struct tagDeployPicUploadParam
    {
        public byte_array128 @szPicName;
        public uint @dwPicSize;
        public byte* @szPicData;
    }
    
}

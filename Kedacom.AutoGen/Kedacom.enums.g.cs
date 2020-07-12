using System;
using System.Runtime.InteropServices;

namespace Kedacom.AutoGen
{
    public enum EAUTOTIMEMODE : int
    {
        @em_autotime_ntp = 0,
        @em_autotime_inputprotocol = 1,
    }
    
    public enum emConnectState : int
    {
        @em_connect_ok = 0,
        @em_connect_no = 1,
    }
    
    public enum emIPAddressType : int
    {
        @em_ipaddrtype_ip = 0,
        @em_ipaddrtype_url = 1,
    }
    
    public enum emIpAddrType : int
    {
        @em_ipaddr_static = 0,
        @em_ipaddr_dymatic = 1,
    }
    
    public enum emLocalRecType : int
    {
        @em_localrectype_asf = 0,
    }
    
    public enum emPictureType : int
    {
        @em_picture_jpeg = 0,
        @em_picture_bmp = 1,
    }
    
    public enum emPlayVideoType : int
    {
        @type_udp = 0,
        @type_tcp = 1,
        @type_unknow = 2,
    }
    
    public enum emRecPlayRate : int
    {
        @em_recplay_rate1 = 0,
        @em_recplay_rate2 = 1,
        @em_recplay_rate4 = 2,
        @em_recplay_rate8 = 3,
        @em_recplay_rate16 = 4,
        @em_recplay_rate1_2 = 5,
        @em_recplay_rate1_4 = 6,
        @em_recplay_rate1_8 = 7,
    }
    
    public enum emRecType : int
    {
        @em_record_alarm = 0,
        @em_record_time = 1,
        @em_record_manual = 2,
    }
    
    public enum emStreamType : int
    {
        @em_streamtype_vedio = 0,
        @em_streamtype_audio = 1,
        @em_streamtype_both = 2,
        @em_streamtype_ps = 3,
    }
    
    public enum emTransType : int
    {
        @em_transtype_rtp_udp = 0,
        @em_transtype_rtp_tcp = 1,
        @em_transtype_rtsp_tcp = 2,
        @em_transtype_rtsp_udp = 3,
    }
    
    /// <summary>********************************升级状态t***********************************</summary>
    public enum emUploadState : int
    {
        @em_uploadstate_idle = 0,
        @em_uploadstate_checkdata = 1,
        @em_uploadstate_pre = 2,
        @em_uploadstate_uploading = 3,
    }
    
    /// <summary>*********************************enum***********************************</summary>
    public enum ERESOLUTION : int
    {
        @ERESOLUTION_1024_768 = 0,
        @ERESOLUTION_1920_1280 = 1,
    }
    
}

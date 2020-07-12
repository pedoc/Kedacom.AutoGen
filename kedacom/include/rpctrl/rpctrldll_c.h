#ifndef RPCTRLDLL_C_H
#define RPCTRLDLL_C_H

#include "rpctrldll.h"

/*=================================================================
函数名称: IPC_RpInit
功    能: 录像模块的初始化
参数说明: TRPInitParam[in] --录像模块的初始化参数，详见demo
		  TSysGlobalParam[in] --录像模块的初始化参数, 详见demo
返 回 值: 成功返回0, 失败返回错误码
=================================================================*/
u16  IPC_RpInit(TRPInitParam *ptRPInitParam, TSysGlobalParam *ptRPSysParam);

/*=================================================================
函数名称: IPC_RpFtpRcvCreate
功    能: ftp客户端启动下载接口
参数说明: tlocaladdr: 本地绑定网络地址
		  pdwssid：标识号
返 回 值: 成功返回0, 失败返回错误码
=================================================================*/
u16  IPC_RpFtpRcvCreate(TNetAddr& tLocalAddr, u32* pdwSsid);

/*=================================================================
函数名称: IPC_RpFtpStartRcv
功    能: ftp客户端启动下载接口
参数说明: TNetAddr: 下载参数
		  pdwSsid: 下载ssid标示号
		  dwNatIntvl: 发送探测包的频率(以s为单位)，0时为不穿nat，〉0时为穿nat
返 回 值: 成功返回0, 失败返回错误码
=================================================================*/
u16  IPC_RpFtpStartRcv(TFtpUdpRcvParam & tFtpRcvParam, u32 dwSsid, u32 dwNatIntvl);

/*=================================================================
函数名称: IPC_RpFtpStopRcv
功    能: ftp客户端结束下载接口
参数说明: pdwssid：标识号
返 回 值: 成功返回0, 失败返回错误码
=================================================================*/
u16  IPC_RpFtpStopRcv(u32 dwSsid);


#endif // RPCTRLDLL_C_H

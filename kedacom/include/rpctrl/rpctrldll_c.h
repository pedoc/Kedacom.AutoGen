#ifndef RPCTRLDLL_C_H
#define RPCTRLDLL_C_H

#include "rpctrldll.h"

/*=================================================================
��������: IPC_RpInit
��    ��: ¼��ģ��ĳ�ʼ��
����˵��: TRPInitParam[in] --¼��ģ��ĳ�ʼ�����������demo
		  TSysGlobalParam[in] --¼��ģ��ĳ�ʼ������, ���demo
�� �� ֵ: �ɹ�����0, ʧ�ܷ��ش�����
=================================================================*/
u16  IPC_RpInit(TRPInitParam *ptRPInitParam, TSysGlobalParam *ptRPSysParam);

/*=================================================================
��������: IPC_RpFtpRcvCreate
��    ��: ftp�ͻ����������ؽӿ�
����˵��: tlocaladdr: ���ذ������ַ
		  pdwssid����ʶ��
�� �� ֵ: �ɹ�����0, ʧ�ܷ��ش�����
=================================================================*/
u16  IPC_RpFtpRcvCreate(TNetAddr& tLocalAddr, u32* pdwSsid);

/*=================================================================
��������: IPC_RpFtpStartRcv
��    ��: ftp�ͻ����������ؽӿ�
����˵��: TNetAddr: ���ز���
		  pdwSsid: ����ssid��ʾ��
		  dwNatIntvl: ����̽�����Ƶ��(��sΪ��λ)��0ʱΪ����nat����0ʱΪ��nat
�� �� ֵ: �ɹ�����0, ʧ�ܷ��ش�����
=================================================================*/
u16  IPC_RpFtpStartRcv(TFtpUdpRcvParam & tFtpRcvParam, u32 dwSsid, u32 dwNatIntvl);

/*=================================================================
��������: IPC_RpFtpStopRcv
��    ��: ftp�ͻ��˽������ؽӿ�
����˵��: pdwssid����ʶ��
�� �� ֵ: �ɹ�����0, ʧ�ܷ��ش�����
=================================================================*/
u16  IPC_RpFtpStopRcv(u32 dwSsid);


#endif // RPCTRLDLL_C_H

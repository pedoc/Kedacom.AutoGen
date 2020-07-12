/*****************************************************************************
   ģ����      : KDV type
   �ļ���      : kdvtype.h
   ����ļ�    :
   �ļ�ʵ�ֹ���: KDV�궨��
   ����        : κ�α�
   �汾        : V3.0  Copyright(C) 2001-2002 KDC, All rights reserved.
-----------------------------------------------------------------------------
   �޸ļ�¼:
   ��  ��      �汾        �޸���      �޸�����
   2004/02/17  3.0         κ�α�        ����
   2013/08/09  4.0         ���          ��չ֧��64λ
******************************************************************************/
#ifndef _KDV_TYPE_H_
#define _KDV_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
      /* Type definition */
/*-----------------------------------------------------------------------------
ϵͳ�����ļ���������Ա�Ͻ��޸�
------------------------------------------------------------------------------*/
//��������
typedef char     s8;
typedef unsigned char   u8;
typedef short           s16;
typedef unsigned short  u16;
typedef int    s32;


#ifdef _MSC_VER
    typedef __int64            s64;
    typedef unsigned __int64 u64;
#else
    typedef long long        s64;
    typedef unsigned long long u64;
#endif

	//����32���� u32 ����
#if defined(_WIN64) || defined(WIN64) ||defined (__LP64__) || defined (__64BIT__) || defined (_LP64) || (__WORDSIZE == 64)
	typedef unsigned int    u32;
    #define KD_PTR          void*
#else
	typedef unsigned long    u32;
    #define KD_PTR           u32
#endif

#ifndef BOOLTYPE
#define BOOLTYPE
typedef s32 		    BOOL;
typedef s32             BOOL32;
#endif
#ifndef TRUE
#define TRUE    1
#endif
#ifndef FALSE
#define FALSE   0
#endif

#ifndef _MSC_VER
#ifndef LPSTR
#define LPSTR   char *
#endif
#ifndef LPCSTR
#define LPCSTR  const char *
#endif
#endif


#ifdef __cplusplus
}
#endif  /* __cplusplus */

#endif /* _KDV_def_H_ */

/* end of file kdvdef.h */


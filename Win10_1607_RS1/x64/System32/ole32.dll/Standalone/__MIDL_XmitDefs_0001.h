typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct __MIDL_XmitDefs_0001
{
  /* 0x0000 */ struct _GUID asyncOperationId;
  /* 0x0010 */ unsigned __int64 oxidClientProcessNA;
  /* 0x0018 */ struct _GUID originalClientLogicalThreadId;
  /* 0x0028 */ unsigned __int64 uClientCausalityTraceId;
} _MIDL_XmitDefs_0001, *P_MIDL_XmitDefs_0001; /* size: 0x0030 */


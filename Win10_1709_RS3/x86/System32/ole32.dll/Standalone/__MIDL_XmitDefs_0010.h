typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct __MIDL_XmitDefs_0010
{
  /* 0x0000 */ unsigned long asyncStatus;
  /* 0x0004 */ unsigned long reserved1;
  /* 0x0008 */ unsigned __int64 uServerCausalityTraceId;
  /* 0x0010 */ struct _GUID completionTraceActivity;
  /* 0x0020 */ unsigned long reserved2;
  /* 0x0024 */ struct __MIDL_XmitDefs_0008* pOutcomeDetails;
} _MIDL_XmitDefs_0010, *P_MIDL_XmitDefs_0010; /* size: 0x0028 */


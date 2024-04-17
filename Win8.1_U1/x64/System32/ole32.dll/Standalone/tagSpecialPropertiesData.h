typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSpecialPropertiesData
{
  /* 0x0000 */ unsigned long dwSessionId;
  /* 0x0004 */ int fRemoteThisSessionId;
  /* 0x0008 */ int fClientImpersonating;
  /* 0x000c */ int fPartitionIDPresent;
  /* 0x0010 */ unsigned long dwDefaultAuthnLvl;
  /* 0x0014 */ struct _GUID guidPartition;
  /* 0x0024 */ unsigned long dwPRTFlags;
  /* 0x0028 */ unsigned long dwOrigClsctx;
  /* 0x002c */ unsigned long dwFlags;
  /* 0x0030 */ unsigned long dwPid;
  /* 0x0038 */ unsigned __int64 hwnd;
  /* 0x0040 */ unsigned long ulServiceId;
  /* 0x0044 */ unsigned long dwReserved[4];
  /* 0x0054 */ long __PADDING__[1];
}; /* size: 0x0058 */


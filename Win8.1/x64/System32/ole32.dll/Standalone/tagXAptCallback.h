typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagXAptCallback
{
  /* 0x0000 */ __int64 pfnCallback;
  /* 0x0008 */ __int64 pParam;
  /* 0x0010 */ __int64 pServerCtx;
  /* 0x0018 */ __int64 pUnk;
  /* 0x0020 */ struct _GUID iid;
  /* 0x0030 */ int iMethod;
  /* 0x0034 */ struct _GUID guidProcessSecret;
  /* 0x0044 */ long __PADDING__[1];
}; /* size: 0x0048 */


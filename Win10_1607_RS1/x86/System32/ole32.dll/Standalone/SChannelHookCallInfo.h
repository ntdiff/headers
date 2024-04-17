typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct SChannelHookCallInfo
{
  /* 0x0000 */ struct _GUID iid;
  /* 0x0010 */ unsigned long cbSize;
  /* 0x0014 */ struct _GUID uCausality;
  /* 0x0024 */ unsigned long dwServerPid;
  /* 0x0028 */ unsigned long iMethod;
  /* 0x002c */ void* pObject;
}; /* size: 0x0030 */


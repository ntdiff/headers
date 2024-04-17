struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagOXID_INFO
{
  /* 0x0000 */ unsigned long dwTid;
  /* 0x0004 */ unsigned long dwPid;
  /* 0x0008 */ unsigned long dwAuthnHint;
  /* 0x000c */ struct tagCOMVERSION version;
  /* 0x0010 */ struct _GUID ipidRemUnknown;
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ struct tagDUALSTRINGARRAY* psa;
}; /* size: 0x0028 */

struct tagCustomPrivResolverInfo
{
  /* 0x0000 */ unsigned __int64 OxidServer;
  /* 0x0008 */ struct tagDUALSTRINGARRAY* pServerORBindings;
  /* 0x000c */ struct tagOXID_INFO OxidInfo;
  /* 0x0038 */ unsigned __int64 LocalMidOfRemote;
  /* 0x0040 */ unsigned long DllServerModel;
  /* 0x0044 */ unsigned short* pwszDllServer;
  /* 0x0048 */ int FoundInROT;
  /* 0x004c */ long __PADDING__[1];
}; /* size: 0x0050 */


typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

struct tagInstantiationInfoData
{
  /* 0x0000 */ struct _GUID classId;
  /* 0x0010 */ unsigned long classCtx;
  /* 0x0014 */ unsigned long actvflags;
  /* 0x0018 */ int fIsSurrogate;
  /* 0x001c */ unsigned long cIID;
  /* 0x0020 */ unsigned long instFlag;
  /* 0x0028 */ struct _GUID* pIID;
  /* 0x0030 */ unsigned long thisSize;
  /* 0x0034 */ struct tagCOMVERSION clientCOMVersion;
}; /* size: 0x0038 */

class InstantiationInfo
{
  /* 0x0020 */ struct tagInstantiationInfoData _instantiationInfoData;
  /* 0x0058 */ struct _GUID _pIIDs[10];
}; /* size: 0x00f8 */


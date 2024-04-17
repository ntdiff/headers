typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class ClassRegistration
{
  /* 0x0000 */ struct _GUID clsid;
  /* 0x0010 */ unsigned long serverType;
  /* 0x0018 */ struct HINSTANCE__* hModule;
  /* 0x0020 */ const wchar_t* className;
  /* 0x0028 */ const wchar_t* progID;
  /* 0x0030 */ const wchar_t* versionIndependentProgID;
  /* 0x0038 */ const wchar_t* threadingModel;
  /* 0x0040 */ struct _GUID appid;
  /* 0x0050 */ struct _GUID moduleid;
  /* 0x0060 */ int fCreateService;
}; /* size: 0x0068 */


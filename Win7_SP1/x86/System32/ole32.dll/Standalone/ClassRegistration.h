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
  /* 0x0014 */ struct HINSTANCE__* hModule;
  /* 0x0018 */ const wchar_t* className;
  /* 0x001c */ const wchar_t* progID;
  /* 0x0020 */ const wchar_t* versionIndependentProgID;
  /* 0x0024 */ const wchar_t* threadingModel;
  /* 0x0028 */ struct _GUID appid;
  /* 0x0038 */ struct _GUID moduleid;
  /* 0x0048 */ int fCreateService;
}; /* size: 0x004c */


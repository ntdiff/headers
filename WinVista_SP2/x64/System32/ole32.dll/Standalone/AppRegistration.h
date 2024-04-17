typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class AppRegistration
{
  /* 0x0000 */ struct _GUID appid;
  /* 0x0010 */ const wchar_t* appName;
  /* 0x0018 */ int dllSurrogate;
  /* 0x0020 */ struct HINSTANCE__* hModuleSurrogate;
}; /* size: 0x0028 */


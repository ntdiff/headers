typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct ACTIVATION_PROPERTIES
{
  /* 0x0000 */ const struct _GUID& _rclsid;
  /* 0x0008 */ struct _GUID _partition;
  /* 0x0018 */ const struct _GUID& _riid;
  /* 0x0020 */ unsigned long _dwFlags;
  /* 0x0024 */ unsigned long _dwActvFlags;
  /* 0x0028 */ unsigned long _dwContext;
  /* 0x002c */ unsigned long _dwDllServerType;
  /* 0x0030 */ wchar_t* _pwszDllServer;
  /* 0x0038 */ struct IUnknown** _ppUnk;
  /* 0x0040 */ struct IComClassInfo* _pCI;
}; /* size: 0x0048 */


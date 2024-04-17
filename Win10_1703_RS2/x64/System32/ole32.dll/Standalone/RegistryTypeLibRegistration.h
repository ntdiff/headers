typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class Microsoft::WRL::ComPtr<ReferencedRegistryKey>
{
  /* 0x0000 */ class ReferencedRegistryKey* ptr_;
}; /* size: 0x0008 */

class RegistryKey
{
  union
  {
    /* 0x0000 */ const HRESULT NotFound;
    /* 0x0000 */ const HRESULT InsufficientBuffer;
    /* 0x0000 */ const HRESULT InvalidData;
    /* 0x0000 */ const HRESULT UnsupportedType;
    /* 0x0000 */ const HRESULT NoMoreItems;
    /* 0x0000 */ const HRESULT NameCollision;
    /* 0x0000 */ const HRESULT ErrorMoreData;
    /* 0x0000 */ struct HKEY__* volatile _hkey;
  }; /* size: 0x0008 */
}; /* size: 0x0008 */

class RegistryTypeLibRegistration
{
  /* 0x0028 */ struct _GUID _typeLibId;
  /* 0x0038 */ wchar_t _version[256];
  /* 0x0238 */ unsigned long _localeId;
  /* 0x0240 */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _versionKey;
  /* 0x0248 */ class RegistryKey _localeKey;
}; /* size: 0x0250 */


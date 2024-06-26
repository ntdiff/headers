class Microsoft::WRL::Wrappers::HString
{
  /* 0x0000 */ struct HSTRING__* hstr_;
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

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

class RegistryInsertableCandidate
{
  /* 0x0010 */ class Microsoft::WRL::Wrappers::HString _progId;
  /* 0x0018 */ struct _GUID _classId;
  /* 0x0028 */ class RegistryKey _progIdKey;
  /* 0x0030 */ class RegistryKey _clsidKey;
}; /* size: 0x0038 */


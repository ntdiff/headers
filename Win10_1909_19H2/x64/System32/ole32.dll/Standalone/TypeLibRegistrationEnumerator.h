class Microsoft::WRL::ComPtr<ReferencedRegistryKey>
{
  /* 0x0000 */ class ReferencedRegistryKey* ptr_;
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class Microsoft::WRL::ComPtr<ITypeLibCatalogInternal>
{
  /* 0x0000 */ struct ITypeLibCatalogInternal* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<ITypeLibRegistrationIterator>
{
  /* 0x0000 */ struct ITypeLibRegistrationIterator* ptr_;
}; /* size: 0x0008 */

typedef struct _RTL_SRWLOCK
{
  /* 0x0000 */ void* Ptr;
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0008 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0008 */

class TypeLibRegistrationEnumerator
{
  /* 0x0030 */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryTypeLibParentKey;
  /* 0x0038 */ unsigned long _registryTypeLibIndex;
  /* 0x0040 */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryTypeLibKey;
  /* 0x0048 */ unsigned long _registryVersionIndex;
  /* 0x0050 */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryVersionKey;
  /* 0x0058 */ unsigned long _registryLocaleIndex;
  /* 0x005c */ struct _GUID _registryTypeLibId;
  /* 0x006c */ wchar_t _registryVersion[256];
  /* 0x0270 */ class Microsoft::WRL::ComPtr<ITypeLibCatalogInternal> _packagedComTypeLibCatalog;
  /* 0x0278 */ class Microsoft::WRL::ComPtr<ITypeLibRegistrationIterator> _packagedComTypeLibIterator;
  /* 0x0280 */ BOOL _finishedRegistryEnumeration;
  /* 0x0288 */ class Microsoft::WRL::Wrappers::SRWLock _enumeratorLock;
}; /* size: 0x0290 */


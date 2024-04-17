class Microsoft::WRL::ComPtr<ReferencedRegistryKey>
{
  /* 0x0000 */ class ReferencedRegistryKey* ptr_;
}; /* size: 0x0004 */

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
}; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<ITypeLibRegistrationIterator>
{
  /* 0x0000 */ struct ITypeLibRegistrationIterator* ptr_;
}; /* size: 0x0004 */

typedef struct _RTL_SRWLOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} RTL_SRWLOCK, *PRTL_SRWLOCK; /* size: 0x0004 */

class Microsoft::WRL::Wrappers::SRWLock
{
  /* 0x0000 */ struct _RTL_SRWLOCK SRWLock_;
}; /* size: 0x0004 */

class TypeLibRegistrationEnumerator
{
  /* 0x001c */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryTypeLibParentKey;
  /* 0x0020 */ unsigned long _registryTypeLibIndex;
  /* 0x0024 */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryTypeLibKey;
  /* 0x0028 */ unsigned long _registryVersionIndex;
  /* 0x002c */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryVersionKey;
  /* 0x0030 */ unsigned long _registryLocaleIndex;
  /* 0x0034 */ struct _GUID _registryTypeLibId;
  /* 0x0044 */ wchar_t _registryVersion[256];
  /* 0x0244 */ class Microsoft::WRL::ComPtr<ITypeLibCatalogInternal> _packagedComTypeLibCatalog;
  /* 0x0248 */ class Microsoft::WRL::ComPtr<ITypeLibRegistrationIterator> _packagedComTypeLibIterator;
  /* 0x024c */ BOOL _finishedRegistryEnumeration;
  /* 0x0250 */ class Microsoft::WRL::Wrappers::SRWLock _enumeratorLock;
}; /* size: 0x0254 */


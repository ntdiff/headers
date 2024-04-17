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

class Microsoft::WRL::ComPtr<IComCatalogSCM>
{
  /* 0x0000 */ struct IComCatalogSCM* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IPackagedComProgIdIterator>
{
  /* 0x0000 */ struct IPackagedComProgIdIterator* ptr_;
}; /* size: 0x0008 */

class ComProgIdIterator
{
  /* 0x0010 */ class RegistryKey _registryClassesRootKey;
  /* 0x0018 */ unsigned long _registryClassesRootIndex;
  /* 0x0020 */ class Microsoft::WRL::ComPtr<IComCatalogSCM> _comCatalog;
  /* 0x0028 */ class Microsoft::WRL::ComPtr<IPackagedComProgIdIterator> _packagedComProgIdIterator;
}; /* size: 0x0030 */


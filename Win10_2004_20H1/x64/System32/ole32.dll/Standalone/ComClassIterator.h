class Microsoft::WRL::ComPtr<ReferencedRegistryKey>
{
  /* 0x0000 */ class ReferencedRegistryKey* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IComCatalogSCM>
{
  /* 0x0000 */ struct IComCatalogSCM* ptr_;
}; /* size: 0x0008 */

class Microsoft::WRL::ComPtr<IPackagedComClassIdIterator>
{
  /* 0x0000 */ struct IPackagedComClassIdIterator* ptr_;
}; /* size: 0x0008 */

class ComClassIterator
{
  /* 0x0010 */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryClsidParentKey;
  /* 0x0018 */ unsigned long _registryClsidIndex;
  /* 0x0020 */ class Microsoft::WRL::ComPtr<IComCatalogSCM> _comCatalog;
  /* 0x0028 */ class Microsoft::WRL::ComPtr<IPackagedComClassIdIterator> _packagedComClassIdIterator;
}; /* size: 0x0030 */


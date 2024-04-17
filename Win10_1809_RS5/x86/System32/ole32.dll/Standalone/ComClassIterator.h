class Microsoft::WRL::ComPtr<ReferencedRegistryKey>
{
  /* 0x0000 */ class ReferencedRegistryKey* ptr_;
}; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<IComCatalogSCM>
{
  /* 0x0000 */ struct IComCatalogSCM* ptr_;
}; /* size: 0x0004 */

class Microsoft::WRL::ComPtr<IPackagedComClassIdIterator>
{
  /* 0x0000 */ struct IPackagedComClassIdIterator* ptr_;
}; /* size: 0x0004 */

class ComClassIterator
{
  /* 0x000c */ class Microsoft::WRL::ComPtr<ReferencedRegistryKey> _registryClsidParentKey;
  /* 0x0010 */ unsigned long _registryClsidIndex;
  /* 0x0014 */ class Microsoft::WRL::ComPtr<IComCatalogSCM> _comCatalog;
  /* 0x0018 */ class Microsoft::WRL::ComPtr<IPackagedComClassIdIterator> _packagedComClassIdIterator;
}; /* size: 0x001c */


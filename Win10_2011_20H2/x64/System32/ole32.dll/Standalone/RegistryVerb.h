class Microsoft::WRL::ComPtr<RegistryVerbIterator>
{
  /* 0x0000 */ class RegistryVerbIterator* ptr_;
}; /* size: 0x0008 */

class RegistryVerb
{
  /* 0x0010 */ wchar_t _id[256];
  /* 0x0210 */ struct HKEY__* _verbsKey;
  /* 0x0218 */ class Microsoft::WRL::ComPtr<RegistryVerbIterator> _verbsKeyOwner;
}; /* size: 0x0220 */


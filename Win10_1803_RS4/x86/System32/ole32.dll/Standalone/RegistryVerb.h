class Microsoft::WRL::ComPtr<RegistryVerbIterator>
{
  /* 0x0000 */ class RegistryVerbIterator* ptr_;
}; /* size: 0x0004 */

class RegistryVerb
{
  /* 0x000c */ wchar_t _id[256];
  /* 0x020c */ struct HKEY__* _verbsKey;
  /* 0x0210 */ class Microsoft::WRL::ComPtr<RegistryVerbIterator> _verbsKeyOwner;
}; /* size: 0x0214 */


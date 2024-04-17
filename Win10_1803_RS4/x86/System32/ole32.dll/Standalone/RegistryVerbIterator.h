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
    /* 0x0000 */ const HRESULT KeyDeleted;
    /* 0x0000 */ struct HKEY__* volatile _hkey;
  }; /* size: 0x0004 */
}; /* size: 0x0004 */

class RegistryVerbIterator
{
  /* 0x000c */ class RegistryKey _verbsKey;
  /* 0x0010 */ unsigned long _verbsIndex;
}; /* size: 0x0014 */


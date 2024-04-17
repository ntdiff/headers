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


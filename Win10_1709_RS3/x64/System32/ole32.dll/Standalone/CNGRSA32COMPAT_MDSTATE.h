struct CNGRSA32COMPAT_MDSTATE
{
  /* 0x0000 */ void* hMDHash;
  /* 0x0008 */ unsigned char digest[16];
  /* 0x0018 */ unsigned char* pbHashObject;
  /* 0x0020 */ unsigned long cbHashObject;
  /* 0x0024 */ long __PADDING__[1];
}; /* size: 0x0028 */


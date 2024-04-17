typedef struct _SL_APPX_CACHE_VALUE_DESCRIPTOR
{
  /* 0x0000 */ unsigned char HashedName[32];
  /* 0x0020 */ unsigned __int64 Expiration;
  /* 0x0028 */ unsigned long DataSize;
  /* 0x002c */ unsigned char Data[1];
  /* 0x002d */ char __PADDING__[3];
} SL_APPX_CACHE_VALUE_DESCRIPTOR, *PSL_APPX_CACHE_VALUE_DESCRIPTOR; /* size: 0x0030 */


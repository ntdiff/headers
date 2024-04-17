typedef struct _BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwInfoVersion;
  /* 0x0008 */ unsigned char* pbNonce;
  /* 0x000c */ unsigned long cbNonce;
  /* 0x0010 */ unsigned char* pbAuthData;
  /* 0x0014 */ unsigned long cbAuthData;
  /* 0x0018 */ unsigned char* pbTag;
  /* 0x001c */ unsigned long cbTag;
  /* 0x0020 */ unsigned char* pbMacContext;
  /* 0x0024 */ unsigned long cbMacContext;
  /* 0x0028 */ unsigned long cbAAD;
  /* 0x0030 */ unsigned __int64 cbData;
  /* 0x0038 */ unsigned long dwFlags;
  /* 0x003c */ long __PADDING__[1];
} BCRYPT_AUTHENTICATED_CIPHER_MODE_INFO, *PBCRYPT_AUTHENTICATED_CIPHER_MODE_INFO; /* size: 0x0040 */


typedef struct _NCRYPT_CIPHER_PADDING_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned char* pbIV;
  /* 0x0010 */ unsigned long cbIV;
  /* 0x0018 */ unsigned char* pbOtherInfo;
  /* 0x0020 */ unsigned long cbOtherInfo;
  /* 0x0024 */ long __PADDING__[1];
} NCRYPT_CIPHER_PADDING_INFO, *PNCRYPT_CIPHER_PADDING_INFO; /* size: 0x0028 */


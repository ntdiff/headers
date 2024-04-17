typedef struct _NCRYPT_CIPHER_PADDING_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwFlags;
  /* 0x0008 */ unsigned char* pbIV;
  /* 0x000c */ unsigned long cbIV;
  /* 0x0010 */ unsigned char* pbOtherInfo;
  /* 0x0014 */ unsigned long cbOtherInfo;
} NCRYPT_CIPHER_PADDING_INFO, *PNCRYPT_CIPHER_PADDING_INFO; /* size: 0x0018 */


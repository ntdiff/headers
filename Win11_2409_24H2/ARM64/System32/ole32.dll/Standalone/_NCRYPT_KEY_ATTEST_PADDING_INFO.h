typedef struct _NCRYPT_KEY_ATTEST_PADDING_INFO
{
  /* 0x0000 */ unsigned long magic;
  /* 0x0008 */ unsigned char* pbKeyBlob;
  /* 0x0010 */ unsigned long cbKeyBlob;
  /* 0x0018 */ unsigned char* pbKeyAuth;
  /* 0x0020 */ unsigned long cbKeyAuth;
  /* 0x0024 */ long __PADDING__[1];
} NCRYPT_KEY_ATTEST_PADDING_INFO, *PNCRYPT_KEY_ATTEST_PADDING_INFO; /* size: 0x0028 */


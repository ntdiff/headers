typedef struct _NCRYPT_KEY_ATTEST_PADDING_INFO
{
  /* 0x0000 */ unsigned long magic;
  /* 0x0004 */ unsigned char* pbKeyBlob;
  /* 0x0008 */ unsigned long cbKeyBlob;
  /* 0x000c */ unsigned char* pbKeyAuth;
  /* 0x0010 */ unsigned long cbKeyAuth;
} NCRYPT_KEY_ATTEST_PADDING_INFO, *PNCRYPT_KEY_ATTEST_PADDING_INFO; /* size: 0x0014 */


typedef struct _CRYPT_BIT_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
  /* 0x0010 */ unsigned long cUnusedBits;
  /* 0x0014 */ long __PADDING__[1];
} CRYPT_BIT_BLOB, *PCRYPT_BIT_BLOB; /* size: 0x0018 */

typedef struct _CERT_X942_DH_VALIDATION_PARAMS
{
  /* 0x0000 */ struct _CRYPT_BIT_BLOB seed;
  /* 0x0018 */ unsigned long pgenCounter;
  /* 0x001c */ long __PADDING__[1];
} CERT_X942_DH_VALIDATION_PARAMS, *PCERT_X942_DH_VALIDATION_PARAMS; /* size: 0x0020 */


typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_X942_DH_PARAMETERS
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB p;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB g;
  /* 0x0020 */ struct _CRYPTOAPI_BLOB q;
  /* 0x0030 */ struct _CRYPTOAPI_BLOB j;
  /* 0x0040 */ struct _CERT_X942_DH_VALIDATION_PARAMS* pValidationParams;
} CERT_X942_DH_PARAMETERS, *PCERT_X942_DH_PARAMETERS; /* size: 0x0048 */


typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_DSS_PARAMETERS
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB p;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB q;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB g;
} CERT_DSS_PARAMETERS, *PCERT_DSS_PARAMETERS; /* size: 0x0018 */


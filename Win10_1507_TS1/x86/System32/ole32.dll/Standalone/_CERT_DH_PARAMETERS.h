typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_DH_PARAMETERS
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB p;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB g;
} CERT_DH_PARAMETERS, *PCERT_DH_PARAMETERS; /* size: 0x0010 */


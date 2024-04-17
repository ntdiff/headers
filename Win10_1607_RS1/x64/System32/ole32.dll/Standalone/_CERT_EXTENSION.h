typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_EXTENSION
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ int fCritical;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB Value;
} CERT_EXTENSION, *PCERT_EXTENSION; /* size: 0x0020 */


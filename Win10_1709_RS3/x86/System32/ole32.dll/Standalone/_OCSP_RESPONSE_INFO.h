typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _OCSP_RESPONSE_INFO
{
  /* 0x0000 */ unsigned long dwStatus;
  /* 0x0004 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Value;
} OCSP_RESPONSE_INFO, *POCSP_RESPONSE_INFO; /* size: 0x0010 */


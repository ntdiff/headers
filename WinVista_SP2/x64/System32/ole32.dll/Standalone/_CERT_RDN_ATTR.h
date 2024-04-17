typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_RDN_ATTR
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0008 */ unsigned long dwValueType;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB Value;
} CERT_RDN_ATTR, *PCERT_RDN_ATTR; /* size: 0x0020 */


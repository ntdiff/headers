typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CERT_PHYSICAL_STORE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ char* pszOpenStoreProvider;
  /* 0x0010 */ unsigned long dwOpenEncodingType;
  /* 0x0014 */ unsigned long dwOpenFlags;
  /* 0x0018 */ struct _CRYPTOAPI_BLOB OpenParameters;
  /* 0x0028 */ unsigned long dwFlags;
  /* 0x002c */ unsigned long dwPriority;
} CERT_PHYSICAL_STORE_INFO, *PCERT_PHYSICAL_STORE_INFO; /* size: 0x0030 */


typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CERT_PHYSICAL_STORE_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ char* pszOpenStoreProvider;
  /* 0x0008 */ unsigned long dwOpenEncodingType;
  /* 0x000c */ unsigned long dwOpenFlags;
  /* 0x0010 */ struct _CRYPTOAPI_BLOB OpenParameters;
  /* 0x0018 */ unsigned long dwFlags;
  /* 0x001c */ unsigned long dwPriority;
} CERT_PHYSICAL_STORE_INFO, *PCERT_PHYSICAL_STORE_INFO; /* size: 0x0020 */


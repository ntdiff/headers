typedef struct _CPS_URLS
{
  /* 0x0000 */ wchar_t* pszURL;
  /* 0x0004 */ struct _CRYPT_ALGORITHM_IDENTIFIER* pAlgorithm;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB* pDigest;
} CPS_URLS, *PCPS_URLS; /* size: 0x000c */


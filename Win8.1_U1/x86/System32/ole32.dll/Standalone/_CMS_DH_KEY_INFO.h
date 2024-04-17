typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CMS_DH_KEY_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned int Algid;
  /* 0x0008 */ char* pszContentEncObjId;
  /* 0x000c */ struct _CRYPTOAPI_BLOB PubInfo;
  /* 0x0014 */ void* pReserved;
} CMS_DH_KEY_INFO, *PCMS_DH_KEY_INFO; /* size: 0x0018 */


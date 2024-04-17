typedef struct _CRYPT_PKCS8_EXPORT_PARAMS
{
  /* 0x0000 */ unsigned __int64 hCryptProv;
  /* 0x0008 */ unsigned long dwKeySpec;
  /* 0x0010 */ char* pszPrivateKeyObjId;
  /* 0x0018 */ void* pEncryptPrivateKeyFunc /* function */;
  /* 0x0020 */ void* pVoidEncryptFunc;
} CRYPT_PKCS8_EXPORT_PARAMS, *PCRYPT_PKCS8_EXPORT_PARAMS; /* size: 0x0028 */


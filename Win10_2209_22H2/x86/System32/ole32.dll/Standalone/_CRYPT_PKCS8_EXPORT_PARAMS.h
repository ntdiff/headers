typedef struct _CRYPT_PKCS8_EXPORT_PARAMS
{
  /* 0x0000 */ unsigned long hCryptProv;
  /* 0x0004 */ unsigned long dwKeySpec;
  /* 0x0008 */ char* pszPrivateKeyObjId;
  /* 0x000c */ void* pEncryptPrivateKeyFunc /* function */;
  /* 0x0010 */ void* pVoidEncryptFunc;
} CRYPT_PKCS8_EXPORT_PARAMS, *PCRYPT_PKCS8_EXPORT_PARAMS; /* size: 0x0014 */


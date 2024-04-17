typedef struct _CRYPT_ATTRIBUTE
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ unsigned long cValue;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB* rgValue;
} CRYPT_ATTRIBUTE, *PCRYPT_ATTRIBUTE; /* size: 0x000c */


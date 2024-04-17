typedef struct _CRYPT_ATTRIBUTE
{
  /* 0x0000 */ char* pszObjId;
  /* 0x0004 */ unsigned long cValue;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB* rgValue;
} CRYPT_ATTRIBUTE, *PCRYPT_ATTRIBUTE; /* size: 0x000c */

typedef struct _CMC_TAGGED_ATTRIBUTE
{
  /* 0x0000 */ unsigned long dwBodyPartID;
  /* 0x0004 */ struct _CRYPT_ATTRIBUTE Attribute;
} CMC_TAGGED_ATTRIBUTE, *PCMC_TAGGED_ATTRIBUTE; /* size: 0x0010 */


typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CMC_TAGGED_OTHER_MSG
{
  /* 0x0000 */ unsigned long dwBodyPartID;
  /* 0x0004 */ char* pszObjId;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB Value;
} CMC_TAGGED_OTHER_MSG, *PCMC_TAGGED_OTHER_MSG; /* size: 0x0010 */


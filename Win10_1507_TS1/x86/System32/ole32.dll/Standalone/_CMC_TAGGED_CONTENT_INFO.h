typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CMC_TAGGED_CONTENT_INFO
{
  /* 0x0000 */ unsigned long dwBodyPartID;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB EncodedContentInfo;
} CMC_TAGGED_CONTENT_INFO, *PCMC_TAGGED_CONTENT_INFO; /* size: 0x000c */


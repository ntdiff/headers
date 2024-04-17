typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _SEALING_TIMESTAMP_ATTRIBUTE
{
  /* 0x0000 */ unsigned long version;
  /* 0x0004 */ unsigned long signerIndex;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB sealTimeStampToken;
} SEALING_TIMESTAMP_ATTRIBUTE, *PSEALING_TIMESTAMP_ATTRIBUTE; /* size: 0x0018 */


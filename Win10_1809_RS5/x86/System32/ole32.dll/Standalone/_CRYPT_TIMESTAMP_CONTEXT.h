typedef struct _CRYPT_TIMESTAMP_CONTEXT
{
  /* 0x0000 */ unsigned long cbEncoded;
  /* 0x0004 */ unsigned char* pbEncoded;
  /* 0x0008 */ struct _CRYPT_TIMESTAMP_INFO* pTimeStamp;
} CRYPT_TIMESTAMP_CONTEXT, *PCRYPT_TIMESTAMP_CONTEXT; /* size: 0x000c */


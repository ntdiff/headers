typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _CMC_PEND_INFO
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB PendToken;
  /* 0x0008 */ struct _FILETIME PendTime;
} CMC_PEND_INFO, *PCMC_PEND_INFO; /* size: 0x0010 */


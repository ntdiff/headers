typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _OCSP_BASIC_RESPONSE_INFO
{
  /* 0x0000 */ unsigned long dwVersion;
  /* 0x0004 */ unsigned long dwResponderIdChoice;
  union
  {
    /* 0x0008 */ struct _CRYPTOAPI_BLOB ByNameResponderId;
    /* 0x0008 */ struct _CRYPTOAPI_BLOB ByKeyResponderId;
  }; /* size: 0x0010 */
  /* 0x0018 */ struct _FILETIME ProducedAt;
  /* 0x0020 */ unsigned long cResponseEntry;
  /* 0x0028 */ struct _OCSP_BASIC_RESPONSE_ENTRY* rgResponseEntry;
  /* 0x0030 */ unsigned long cExtension;
  /* 0x0038 */ struct _CERT_EXTENSION* rgExtension;
} OCSP_BASIC_RESPONSE_INFO, *POCSP_BASIC_RESPONSE_INFO; /* size: 0x0040 */


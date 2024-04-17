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

typedef struct _CRL_ENTRY
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB SerialNumber;
  /* 0x0008 */ struct _FILETIME RevocationDate;
  /* 0x0010 */ unsigned long cExtension;
  /* 0x0014 */ struct _CERT_EXTENSION* rgExtension;
} CRL_ENTRY, *PCRL_ENTRY; /* size: 0x0018 */


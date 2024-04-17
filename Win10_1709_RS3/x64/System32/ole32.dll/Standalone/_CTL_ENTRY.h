typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CTL_ENTRY
{
  /* 0x0000 */ struct _CRYPTOAPI_BLOB SubjectIdentifier;
  /* 0x0010 */ unsigned long cAttribute;
  /* 0x0018 */ struct _CRYPT_ATTRIBUTE* rgAttribute;
} CTL_ENTRY, *PCTL_ENTRY; /* size: 0x0020 */


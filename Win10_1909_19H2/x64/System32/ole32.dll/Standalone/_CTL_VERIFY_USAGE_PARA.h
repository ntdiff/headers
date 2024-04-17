typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0010 */

typedef struct _CTL_VERIFY_USAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CRYPTOAPI_BLOB ListIdentifier;
  /* 0x0018 */ unsigned long cCtlStore;
  /* 0x0020 */ void** rghCtlStore;
  /* 0x0028 */ unsigned long cSignerStore;
  /* 0x0030 */ void** rghSignerStore;
} CTL_VERIFY_USAGE_PARA, *PCTL_VERIFY_USAGE_PARA; /* size: 0x0038 */


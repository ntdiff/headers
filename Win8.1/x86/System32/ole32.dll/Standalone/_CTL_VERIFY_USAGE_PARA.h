typedef struct _CRYPTOAPI_BLOB
{
  /* 0x0000 */ unsigned long cbData;
  /* 0x0004 */ unsigned char* pbData;
} CRYPTOAPI_BLOB, *PCRYPTOAPI_BLOB; /* size: 0x0008 */

typedef struct _CTL_VERIFY_USAGE_PARA
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ struct _CRYPTOAPI_BLOB ListIdentifier;
  /* 0x000c */ unsigned long cCtlStore;
  /* 0x0010 */ void** rghCtlStore;
  /* 0x0014 */ unsigned long cSignerStore;
  /* 0x0018 */ void** rghSignerStore;
} CTL_VERIFY_USAGE_PARA, *PCTL_VERIFY_USAGE_PARA; /* size: 0x001c */


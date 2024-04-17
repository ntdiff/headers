typedef struct _CTL_VERIFY_USAGE_STATUS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwError;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x000c */ const struct _CTL_CONTEXT** ppCtl;
  /* 0x0010 */ unsigned long dwCtlEntryIndex;
  /* 0x0014 */ const struct _CERT_CONTEXT** ppSigner;
  /* 0x0018 */ unsigned long dwSignerIndex;
} CTL_VERIFY_USAGE_STATUS, *PCTL_VERIFY_USAGE_STATUS; /* size: 0x001c */


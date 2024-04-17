typedef struct _CTL_VERIFY_USAGE_STATUS
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0004 */ unsigned long dwError;
  /* 0x0008 */ unsigned long dwFlags;
  /* 0x0010 */ const struct _CTL_CONTEXT** ppCtl;
  /* 0x0018 */ unsigned long dwCtlEntryIndex;
  /* 0x0020 */ const struct _CERT_CONTEXT** ppSigner;
  /* 0x0028 */ unsigned long dwSignerIndex;
  /* 0x002c */ long __PADDING__[1];
} CTL_VERIFY_USAGE_STATUS, *PCTL_VERIFY_USAGE_STATUS; /* size: 0x0030 */


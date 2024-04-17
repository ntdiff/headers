typedef struct _CERT_TRUST_LIST_INFO
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ struct _CTL_ENTRY* pCtlEntry;
  /* 0x0010 */ const struct _CTL_CONTEXT* pCtlContext;
} CERT_TRUST_LIST_INFO, *PCERT_TRUST_LIST_INFO; /* size: 0x0018 */


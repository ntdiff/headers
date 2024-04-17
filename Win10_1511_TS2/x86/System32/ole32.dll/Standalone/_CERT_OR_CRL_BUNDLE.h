typedef struct _CERT_OR_CRL_BUNDLE
{
  /* 0x0000 */ unsigned long cItem;
  /* 0x0004 */ struct _CERT_OR_CRL_BLOB* rgItem;
} CERT_OR_CRL_BUNDLE, *PCERT_OR_CRL_BUNDLE; /* size: 0x0008 */


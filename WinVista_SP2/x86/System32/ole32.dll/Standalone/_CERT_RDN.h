typedef struct _CERT_RDN
{
  /* 0x0000 */ unsigned long cRDNAttr;
  /* 0x0004 */ struct _CERT_RDN_ATTR* rgRDNAttr;
} CERT_RDN, *PCERT_RDN; /* size: 0x0008 */


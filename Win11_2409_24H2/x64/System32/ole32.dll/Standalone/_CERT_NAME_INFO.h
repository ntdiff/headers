typedef struct _CERT_NAME_INFO
{
  /* 0x0000 */ unsigned long cRDN;
  /* 0x0008 */ struct _CERT_RDN* rgRDN;
} CERT_NAME_INFO, *PCERT_NAME_INFO; /* size: 0x0010 */


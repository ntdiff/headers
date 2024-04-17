typedef struct _CERT_AUTHORITY_INFO_ACCESS
{
  /* 0x0000 */ unsigned long cAccDescr;
  /* 0x0008 */ struct _CERT_ACCESS_DESCRIPTION* rgAccDescr;
} CERT_AUTHORITY_INFO_ACCESS, *PCERT_AUTHORITY_INFO_ACCESS; /* size: 0x0010 */


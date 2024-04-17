typedef struct _CERT_FORTEZZA_DATA_PROP
{
  /* 0x0000 */ unsigned char SerialNumber[8];
  /* 0x0008 */ int CertIndex;
  /* 0x000c */ unsigned char CertLabel[36];
} CERT_FORTEZZA_DATA_PROP, *PCERT_FORTEZZA_DATA_PROP; /* size: 0x0030 */


typedef struct _CERTIFICATE_BLOB
{
  /* 0x0000 */ unsigned long dwCertEncodingType;
  /* 0x0004 */ unsigned long cbData;
  /* 0x0008 */ unsigned char* pbData;
} CERTIFICATE_BLOB, *PCERTIFICATE_BLOB; /* size: 0x000c */


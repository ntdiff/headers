typedef struct _CERT_OR_CRL_BLOB
{
  /* 0x0000 */ unsigned long dwChoice;
  /* 0x0004 */ unsigned long cbEncoded;
  /* 0x0008 */ unsigned char* pbEncoded;
} CERT_OR_CRL_BLOB, *PCERT_OR_CRL_BLOB; /* size: 0x000c */


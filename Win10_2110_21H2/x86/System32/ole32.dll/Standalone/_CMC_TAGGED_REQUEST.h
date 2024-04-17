typedef struct _CMC_TAGGED_REQUEST
{
  /* 0x0000 */ unsigned long dwTaggedRequestChoice;
  /* 0x0004 */ struct _CMC_TAGGED_CERT_REQUEST* pTaggedCertRequest;
} CMC_TAGGED_REQUEST, *PCMC_TAGGED_REQUEST; /* size: 0x0008 */


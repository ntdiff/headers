typedef struct _NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long pcrAlg;
  /* 0x000c */ unsigned long cbSignature;
  /* 0x0010 */ unsigned long cbQuote;
  /* 0x0014 */ unsigned long cbPcrs;
} NCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT, *PNCRYPT_TPM_PLATFORM_ATTESTATION_STATEMENT; /* size: 0x0018 */


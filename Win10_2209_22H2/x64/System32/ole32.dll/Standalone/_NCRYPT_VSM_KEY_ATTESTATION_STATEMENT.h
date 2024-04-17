typedef struct _NCRYPT_VSM_KEY_ATTESTATION_STATEMENT
{
  /* 0x0000 */ unsigned long Magic;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long cbSignature;
  /* 0x000c */ unsigned long cbReport;
  /* 0x0010 */ unsigned long cbAttributes;
} NCRYPT_VSM_KEY_ATTESTATION_STATEMENT, *PNCRYPT_VSM_KEY_ATTESTATION_STATEMENT; /* size: 0x0014 */


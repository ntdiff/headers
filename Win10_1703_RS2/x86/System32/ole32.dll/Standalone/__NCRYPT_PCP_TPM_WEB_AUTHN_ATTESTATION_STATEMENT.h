typedef struct __NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT
{
  /* 0x0000 */ unsigned int Magic;
  /* 0x0004 */ unsigned int Version;
  /* 0x0008 */ unsigned int HeaderSize;
  /* 0x000c */ unsigned int cbCertifyInfo;
  /* 0x0010 */ unsigned int cbSignature;
  /* 0x0014 */ unsigned int cbTpmPublic;
} _NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT, *P_NCRYPT_PCP_TPM_WEB_AUTHN_ATTESTATION_STATEMENT; /* size: 0x0018 */


typedef struct _BCRYPT_INTERFACE_VERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
} BCRYPT_INTERFACE_VERSION, *PBCRYPT_INTERFACE_VERSION; /* size: 0x0004 */

typedef struct _BCRYPT_SECRET_AGREEMENT_FUNCTION_TABLE
{
  /* 0x0000 */ struct _BCRYPT_INTERFACE_VERSION Version;
  /* 0x0004 */ void* OpenAlgorithmProvider /* function */;
  /* 0x0008 */ void* GetProperty /* function */;
  /* 0x000c */ void* SetProperty /* function */;
  /* 0x0010 */ void* CloseAlgorithmProvider /* function */;
  /* 0x0014 */ void* SecretAgreement /* function */;
  /* 0x0018 */ void* DeriveKey /* function */;
  /* 0x001c */ void* DestroySecret /* function */;
  /* 0x0020 */ void* GenerateKeyPair /* function */;
  /* 0x0024 */ void* FinalizeKeyPair /* function */;
  /* 0x0028 */ void* ImportKeyPair /* function */;
  /* 0x002c */ void* ExportKey /* function */;
  /* 0x0030 */ void* DestroyKey /* function */;
} BCRYPT_SECRET_AGREEMENT_FUNCTION_TABLE, *PBCRYPT_SECRET_AGREEMENT_FUNCTION_TABLE; /* size: 0x0034 */


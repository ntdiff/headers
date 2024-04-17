typedef struct _BCRYPT_INTERFACE_VERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
} BCRYPT_INTERFACE_VERSION, *PBCRYPT_INTERFACE_VERSION; /* size: 0x0004 */

typedef struct _BCRYPT_SECRET_AGREEMENT_FUNCTION_TABLE
{
  /* 0x0000 */ struct _BCRYPT_INTERFACE_VERSION Version;
  /* 0x0008 */ void* OpenAlgorithmProvider /* function */;
  /* 0x0010 */ void* GetProperty /* function */;
  /* 0x0018 */ void* SetProperty /* function */;
  /* 0x0020 */ void* CloseAlgorithmProvider /* function */;
  /* 0x0028 */ void* SecretAgreement /* function */;
  /* 0x0030 */ void* DeriveKey /* function */;
  /* 0x0038 */ void* DestroySecret /* function */;
  /* 0x0040 */ void* GenerateKeyPair /* function */;
  /* 0x0048 */ void* FinalizeKeyPair /* function */;
  /* 0x0050 */ void* ImportKeyPair /* function */;
  /* 0x0058 */ void* ExportKey /* function */;
  /* 0x0060 */ void* DestroyKey /* function */;
} BCRYPT_SECRET_AGREEMENT_FUNCTION_TABLE, *PBCRYPT_SECRET_AGREEMENT_FUNCTION_TABLE; /* size: 0x0068 */


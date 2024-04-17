typedef struct _BCRYPT_INTERFACE_VERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
} BCRYPT_INTERFACE_VERSION, *PBCRYPT_INTERFACE_VERSION; /* size: 0x0004 */

typedef struct _NCRYPT_KEY_STORAGE_FUNCTION_TABLE
{
  /* 0x0000 */ struct _BCRYPT_INTERFACE_VERSION Version;
  /* 0x0008 */ void* OpenProvider /* function */;
  /* 0x0010 */ void* OpenKey /* function */;
  /* 0x0018 */ void* CreatePersistedKey /* function */;
  /* 0x0020 */ void* GetProviderProperty /* function */;
  /* 0x0028 */ void* GetKeyProperty /* function */;
  /* 0x0030 */ void* SetProviderProperty /* function */;
  /* 0x0038 */ void* SetKeyProperty /* function */;
  /* 0x0040 */ void* FinalizeKey /* function */;
  /* 0x0048 */ void* DeleteKey /* function */;
  /* 0x0050 */ void* FreeProvider /* function */;
  /* 0x0058 */ void* FreeKey /* function */;
  /* 0x0060 */ void* FreeBuffer /* function */;
  /* 0x0068 */ void* Encrypt /* function */;
  /* 0x0070 */ void* Decrypt /* function */;
  /* 0x0078 */ void* IsAlgSupported /* function */;
  /* 0x0080 */ void* EnumAlgorithms /* function */;
  /* 0x0088 */ void* EnumKeys /* function */;
  /* 0x0090 */ void* ImportKey /* function */;
  /* 0x0098 */ void* ExportKey /* function */;
  /* 0x00a0 */ void* SignHash /* function */;
  /* 0x00a8 */ void* VerifySignature /* function */;
  /* 0x00b0 */ void* PromptUser /* function */;
  /* 0x00b8 */ void* NotifyChangeKey /* function */;
  /* 0x00c0 */ void* SecretAgreement /* function */;
  /* 0x00c8 */ void* DeriveKey /* function */;
  /* 0x00d0 */ void* FreeSecret /* function */;
} NCRYPT_KEY_STORAGE_FUNCTION_TABLE, *PNCRYPT_KEY_STORAGE_FUNCTION_TABLE; /* size: 0x00d8 */


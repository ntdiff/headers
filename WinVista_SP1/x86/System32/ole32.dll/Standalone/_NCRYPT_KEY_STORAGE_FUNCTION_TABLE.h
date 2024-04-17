typedef struct _BCRYPT_INTERFACE_VERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
} BCRYPT_INTERFACE_VERSION, *PBCRYPT_INTERFACE_VERSION; /* size: 0x0004 */

typedef struct _NCRYPT_KEY_STORAGE_FUNCTION_TABLE
{
  /* 0x0000 */ struct _BCRYPT_INTERFACE_VERSION Version;
  /* 0x0004 */ void* OpenProvider /* function */;
  /* 0x0008 */ void* OpenKey /* function */;
  /* 0x000c */ void* CreatePersistedKey /* function */;
  /* 0x0010 */ void* GetProviderProperty /* function */;
  /* 0x0014 */ void* GetKeyProperty /* function */;
  /* 0x0018 */ void* SetProviderProperty /* function */;
  /* 0x001c */ void* SetKeyProperty /* function */;
  /* 0x0020 */ void* FinalizeKey /* function */;
  /* 0x0024 */ void* DeleteKey /* function */;
  /* 0x0028 */ void* FreeProvider /* function */;
  /* 0x002c */ void* FreeKey /* function */;
  /* 0x0030 */ void* FreeBuffer /* function */;
  /* 0x0034 */ void* Encrypt /* function */;
  /* 0x0038 */ void* Decrypt /* function */;
  /* 0x003c */ void* IsAlgSupported /* function */;
  /* 0x0040 */ void* EnumAlgorithms /* function */;
  /* 0x0044 */ void* EnumKeys /* function */;
  /* 0x0048 */ void* ImportKey /* function */;
  /* 0x004c */ void* ExportKey /* function */;
  /* 0x0050 */ void* SignHash /* function */;
  /* 0x0054 */ void* VerifySignature /* function */;
  /* 0x0058 */ void* PromptUser /* function */;
  /* 0x005c */ void* NotifyChangeKey /* function */;
  /* 0x0060 */ void* SecretAgreement /* function */;
  /* 0x0064 */ void* DeriveKey /* function */;
  /* 0x0068 */ void* FreeSecret /* function */;
} NCRYPT_KEY_STORAGE_FUNCTION_TABLE, *PNCRYPT_KEY_STORAGE_FUNCTION_TABLE; /* size: 0x006c */


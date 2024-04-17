typedef struct _BCRYPT_INTERFACE_VERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
} BCRYPT_INTERFACE_VERSION, *PBCRYPT_INTERFACE_VERSION; /* size: 0x0004 */

typedef struct _BCRYPT_HASH_FUNCTION_TABLE
{
  /* 0x0000 */ struct _BCRYPT_INTERFACE_VERSION Version;
  /* 0x0004 */ void* OpenAlgorithmProvider /* function */;
  /* 0x0008 */ void* GetProperty /* function */;
  /* 0x000c */ void* SetProperty /* function */;
  /* 0x0010 */ void* CloseAlgorithmProvider /* function */;
  /* 0x0014 */ void* CreateHash /* function */;
  /* 0x0018 */ void* HashData /* function */;
  /* 0x001c */ void* FinishHash /* function */;
  /* 0x0020 */ void* DuplicateHash /* function */;
  /* 0x0024 */ void* DestroyHash /* function */;
} BCRYPT_HASH_FUNCTION_TABLE, *PBCRYPT_HASH_FUNCTION_TABLE; /* size: 0x0028 */


typedef struct _CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE
{
  /* 0x0000 */ unsigned long cbSize;
  /* 0x0008 */ void* pfnGet /* function */;
  /* 0x0010 */ void* pfnRelease /* function */;
  /* 0x0018 */ void* pfnFreePassword /* function */;
  /* 0x0020 */ void* pfnFree /* function */;
  /* 0x0028 */ void* pfnFreeIdentifier /* function */;
} CRYPT_OBJECT_LOCATOR_PROVIDER_TABLE, *PCRYPT_OBJECT_LOCATOR_PROVIDER_TABLE; /* size: 0x0030 */


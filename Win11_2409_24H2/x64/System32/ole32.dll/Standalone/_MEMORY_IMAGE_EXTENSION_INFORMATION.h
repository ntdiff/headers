typedef enum _MEMORY_IMAGE_EXTENSION_TYPE
{
  MemoryImageExtensionCfgScp = 0,
  MemoryImageExtensionCfgEmulatedScp = 1,
  MemoryImageExtensionTypeMax = 2,
} MEMORY_IMAGE_EXTENSION_TYPE, *PMEMORY_IMAGE_EXTENSION_TYPE;

typedef struct _MEMORY_IMAGE_EXTENSION_INFORMATION
{
  /* 0x0000 */ enum _MEMORY_IMAGE_EXTENSION_TYPE ExtensionType;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 ExtensionImageBaseRva;
  /* 0x0010 */ unsigned __int64 ExtensionSize;
} MEMORY_IMAGE_EXTENSION_INFORMATION, *PMEMORY_IMAGE_EXTENSION_INFORMATION; /* size: 0x0018 */


typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EFI_FIRMWARE_INFORMATION
{
  /* 0x0000 */ unsigned long FirmwareVersion;
  /* 0x0008 */ struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;
  /* 0x0010 */ long SetVirtualAddressMapStatus;
  /* 0x0014 */ unsigned long MissedMappingsCount;
  /* 0x0018 */ struct _LIST_ENTRY FirmwareResourceList;
  /* 0x0028 */ void* EfiMemoryMap;
  /* 0x0030 */ unsigned long EfiMemoryMapSize;
  /* 0x0034 */ unsigned long EfiMemoryMapDescriptorSize;
} EFI_FIRMWARE_INFORMATION, *PEFI_FIRMWARE_INFORMATION; /* size: 0x0038 */


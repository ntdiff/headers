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

typedef struct _PCAT_FIRMWARE_INFORMATION
{
  /* 0x0000 */ unsigned long PlaceHolder;
} PCAT_FIRMWARE_INFORMATION, *PPCAT_FIRMWARE_INFORMATION; /* size: 0x0004 */

typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long FirmwareTypeUefi : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long EfiRuntimeUseIum : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long EfiRuntimePageProtectionSupported : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
  }; /* bitfield */
  union
  {
    union
    {
      /* 0x0008 */ struct _EFI_FIRMWARE_INFORMATION EfiInformation;
      /* 0x0008 */ struct _PCAT_FIRMWARE_INFORMATION PcatInformation;
    }; /* size: 0x0038 */
  } /* size: 0x0038 */ u;
} FIRMWARE_INFORMATION_LOADER_BLOCK, *PFIRMWARE_INFORMATION_LOADER_BLOCK; /* size: 0x0040 */


typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _I386_LOADER_BLOCK
{
  /* 0x0000 */ void* CommonDataArea;
  /* 0x0004 */ unsigned long MachineType;
  /* 0x0008 */ unsigned long VirtualBias;
} I386_LOADER_BLOCK, *PI386_LOADER_BLOCK; /* size: 0x000c */

typedef struct _IA64_LOADER_BLOCK
{
  /* 0x0000 */ unsigned long PlaceHolder;
} IA64_LOADER_BLOCK, *PIA64_LOADER_BLOCK; /* size: 0x0004 */

typedef struct _EFI_FIRMWARE_INFORMATION
{
  /* 0x0000 */ unsigned long FirmwareVersion;
  /* 0x0004 */ struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;
  /* 0x0008 */ long SetVirtualAddressMapStatus;
  /* 0x000c */ unsigned long MissedMappingsCount;
} EFI_FIRMWARE_INFORMATION, *PEFI_FIRMWARE_INFORMATION; /* size: 0x0010 */

typedef struct _PCAT_FIRMWARE_INFORMATION
{
  /* 0x0000 */ unsigned long PlaceHolder;
} PCAT_FIRMWARE_INFORMATION, *PPCAT_FIRMWARE_INFORMATION; /* size: 0x0004 */

typedef struct _FIRMWARE_INFORMATION_LOADER_BLOCK
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long FirmwareTypeEfi : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
  union
  {
    union
    {
      /* 0x0004 */ struct _EFI_FIRMWARE_INFORMATION EfiInformation;
      /* 0x0004 */ struct _PCAT_FIRMWARE_INFORMATION PcatInformation;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
} FIRMWARE_INFORMATION_LOADER_BLOCK, *PFIRMWARE_INFORMATION_LOADER_BLOCK; /* size: 0x0014 */

typedef struct _LOADER_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned long OsMajorVersion;
  /* 0x0004 */ unsigned long OsMinorVersion;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ struct _LIST_ENTRY LoadOrderListHead;
  /* 0x0018 */ struct _LIST_ENTRY MemoryDescriptorListHead;
  /* 0x0020 */ struct _LIST_ENTRY BootDriverListHead;
  /* 0x0028 */ unsigned long KernelStack;
  /* 0x002c */ unsigned long Prcb;
  /* 0x0030 */ unsigned long Process;
  /* 0x0034 */ unsigned long Thread;
  /* 0x0038 */ unsigned long RegistryLength;
  /* 0x003c */ void* RegistryBase;
  /* 0x0040 */ struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;
  /* 0x0044 */ char* ArcBootDeviceName;
  /* 0x0048 */ char* ArcHalDeviceName;
  /* 0x004c */ char* NtBootPathName;
  /* 0x0050 */ char* NtHalPathName;
  /* 0x0054 */ char* LoadOptions;
  /* 0x0058 */ struct _NLS_DATA_BLOCK* NlsData;
  /* 0x005c */ struct _ARC_DISK_INFORMATION* ArcDiskInformation;
  /* 0x0060 */ void* OemFontFile;
  /* 0x0064 */ struct _LOADER_PARAMETER_EXTENSION* Extension;
  union
  {
    union
    {
      /* 0x0068 */ struct _I386_LOADER_BLOCK I386;
      /* 0x0068 */ struct _IA64_LOADER_BLOCK Ia64;
    }; /* size: 0x000c */
  } /* size: 0x000c */ u;
  /* 0x0074 */ struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;
} LOADER_PARAMETER_BLOCK, *PLOADER_PARAMETER_BLOCK; /* size: 0x0088 */


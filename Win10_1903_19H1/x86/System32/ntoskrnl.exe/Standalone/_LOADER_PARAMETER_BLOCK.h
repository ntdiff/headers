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

typedef struct _ARM_LOADER_BLOCK
{
  /* 0x0000 */ unsigned long PlaceHolder;
} ARM_LOADER_BLOCK, *PARM_LOADER_BLOCK; /* size: 0x0004 */

typedef struct _EFI_FIRMWARE_INFORMATION
{
  /* 0x0000 */ unsigned long FirmwareVersion;
  /* 0x0004 */ struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;
  /* 0x0008 */ long SetVirtualAddressMapStatus;
  /* 0x000c */ unsigned long MissedMappingsCount;
  /* 0x0010 */ struct _LIST_ENTRY FirmwareResourceList;
  /* 0x0018 */ void* EfiMemoryMap;
  /* 0x001c */ unsigned long EfiMemoryMapSize;
  /* 0x0020 */ unsigned long EfiMemoryMapDescriptorSize;
} EFI_FIRMWARE_INFORMATION, *PEFI_FIRMWARE_INFORMATION; /* size: 0x0024 */

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
      /* 0x0004 */ struct _EFI_FIRMWARE_INFORMATION EfiInformation;
      /* 0x0004 */ struct _PCAT_FIRMWARE_INFORMATION PcatInformation;
    }; /* size: 0x0024 */
  } /* size: 0x0024 */ u;
} FIRMWARE_INFORMATION_LOADER_BLOCK, *PFIRMWARE_INFORMATION_LOADER_BLOCK; /* size: 0x0028 */

typedef struct _LOADER_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned long OsMajorVersion;
  /* 0x0004 */ unsigned long OsMinorVersion;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long OsLoaderSecurityVersion;
  /* 0x0010 */ struct _LIST_ENTRY LoadOrderListHead;
  /* 0x0018 */ struct _LIST_ENTRY MemoryDescriptorListHead;
  /* 0x0020 */ struct _LIST_ENTRY BootDriverListHead;
  /* 0x0028 */ struct _LIST_ENTRY EarlyLaunchListHead;
  /* 0x0030 */ struct _LIST_ENTRY CoreDriverListHead;
  /* 0x0038 */ struct _LIST_ENTRY CoreExtensionsDriverListHead;
  /* 0x0040 */ struct _LIST_ENTRY TpmCoreDriverListHead;
  /* 0x0048 */ unsigned long KernelStack;
  /* 0x004c */ unsigned long Prcb;
  /* 0x0050 */ unsigned long Process;
  /* 0x0054 */ unsigned long Thread;
  /* 0x0058 */ unsigned long KernelStackSize;
  /* 0x005c */ unsigned long RegistryLength;
  /* 0x0060 */ void* RegistryBase;
  /* 0x0064 */ struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;
  /* 0x0068 */ char* ArcBootDeviceName;
  /* 0x006c */ char* ArcHalDeviceName;
  /* 0x0070 */ char* NtBootPathName;
  /* 0x0074 */ char* NtHalPathName;
  /* 0x0078 */ char* LoadOptions;
  /* 0x007c */ struct _NLS_DATA_BLOCK* NlsData;
  /* 0x0080 */ struct _ARC_DISK_INFORMATION* ArcDiskInformation;
  /* 0x0084 */ struct _LOADER_PARAMETER_EXTENSION* Extension;
  union
  {
    union
    {
      /* 0x0088 */ struct _I386_LOADER_BLOCK I386;
      /* 0x0088 */ struct _ARM_LOADER_BLOCK Arm;
    }; /* size: 0x000c */
  } /* size: 0x000c */ u;
  /* 0x0094 */ struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;
  /* 0x00bc */ char* OsBootstatPathName;
  /* 0x00c0 */ char* ArcOSDataDeviceName;
  /* 0x00c4 */ char* ArcWindowsSysPartName;
} LOADER_PARAMETER_BLOCK, *PLOADER_PARAMETER_BLOCK; /* size: 0x00c8 */


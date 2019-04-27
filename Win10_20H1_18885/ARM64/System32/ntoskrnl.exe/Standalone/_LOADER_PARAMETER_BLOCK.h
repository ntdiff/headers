typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _I386_LOADER_BLOCK
{
  /* 0x0000 */ unsigned long PlaceHolder;
} I386_LOADER_BLOCK, *PI386_LOADER_BLOCK; /* size: 0x0004 */

typedef struct _ARM_LOADER_BLOCK
{
  /* 0x0000 */ unsigned __int64 VirtualBias;
  /* 0x0008 */ void* KdCpuBuffer;
} ARM_LOADER_BLOCK, *PARM_LOADER_BLOCK; /* size: 0x0010 */

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
    /* 0x0000 */ unsigned long FirmwareStartedInEL2 : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long Reserved : 27; /* bit position: 4 */
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

typedef struct _LOADER_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned long OsMajorVersion;
  /* 0x0004 */ unsigned long OsMinorVersion;
  /* 0x0008 */ unsigned long Size;
  /* 0x000c */ unsigned long OsLoaderSecurityVersion;
  /* 0x0010 */ struct _LIST_ENTRY LoadOrderListHead;
  /* 0x0020 */ struct _LIST_ENTRY MemoryDescriptorListHead;
  /* 0x0030 */ struct _LIST_ENTRY BootDriverListHead;
  /* 0x0040 */ struct _LIST_ENTRY EarlyLaunchListHead;
  /* 0x0050 */ struct _LIST_ENTRY CoreDriverListHead;
  /* 0x0060 */ struct _LIST_ENTRY CoreExtensionsDriverListHead;
  /* 0x0070 */ struct _LIST_ENTRY TpmCoreDriverListHead;
  /* 0x0080 */ unsigned __int64 KernelStack;
  /* 0x0088 */ unsigned __int64 Prcb;
  /* 0x0090 */ unsigned __int64 Process;
  /* 0x0098 */ unsigned __int64 Thread;
  /* 0x00a0 */ unsigned long KernelStackSize;
  /* 0x00a4 */ unsigned long RegistryLength;
  /* 0x00a8 */ void* RegistryBase;
  /* 0x00b0 */ struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;
  /* 0x00b8 */ char* ArcBootDeviceName;
  /* 0x00c0 */ char* ArcHalDeviceName;
  /* 0x00c8 */ char* NtBootPathName;
  /* 0x00d0 */ char* NtHalPathName;
  /* 0x00d8 */ char* LoadOptions;
  /* 0x00e0 */ struct _NLS_DATA_BLOCK* NlsData;
  /* 0x00e8 */ struct _ARC_DISK_INFORMATION* ArcDiskInformation;
  /* 0x00f0 */ struct _LOADER_PARAMETER_EXTENSION* Extension;
  union
  {
    union
    {
      /* 0x00f8 */ struct _I386_LOADER_BLOCK I386;
      /* 0x00f8 */ struct _ARM_LOADER_BLOCK Arm;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
  /* 0x0108 */ struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;
  /* 0x0148 */ char* OsBootstatPathName;
  /* 0x0150 */ char* ArcOSDataDeviceName;
  /* 0x0158 */ char* ArcWindowsSysPartName;
} LOADER_PARAMETER_BLOCK, *PLOADER_PARAMETER_BLOCK; /* size: 0x0160 */


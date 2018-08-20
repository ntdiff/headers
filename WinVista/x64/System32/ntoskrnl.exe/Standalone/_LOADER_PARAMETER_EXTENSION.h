typedef struct _PROFILE_PARAMETER_BLOCK
{
  /* 0x0000 */ unsigned short Status;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned short DockingState;
  /* 0x0006 */ unsigned short Capabilities;
  /* 0x0008 */ unsigned long DockID;
  /* 0x000c */ unsigned long SerialNumber;
} PROFILE_PARAMETER_BLOCK, *PPROFILE_PARAMETER_BLOCK; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _LOADER_PARAMETER_EXTENSION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ struct _PROFILE_PARAMETER_BLOCK Profile;
  /* 0x0014 */ unsigned long MajorVersion;
  /* 0x0018 */ unsigned long MinorVersion;
  /* 0x0020 */ void* EmInfFileImage;
  /* 0x0028 */ unsigned long EmInfFileSize;
  /* 0x0030 */ void* TriageDumpBlock;
  /* 0x0038 */ unsigned long LoaderPagesSpanned;
  /* 0x0040 */ struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;
  /* 0x0048 */ struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;
  /* 0x0050 */ void* DrvDBImage;
  /* 0x0058 */ unsigned long DrvDBSize;
  /* 0x0060 */ struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;
  /* 0x0068 */ struct _LIST_ENTRY FirmwareDescriptorListHead;
  /* 0x0078 */ void* AcpiTable;
  /* 0x0080 */ unsigned long AcpiTableSize;
  struct /* bitfield */
  {
    /* 0x0084 */ unsigned long BootViaWinload : 1; /* bit position: 0 */
    /* 0x0084 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0088 */ struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;
  /* 0x0090 */ struct _LIST_ENTRY BootApplicationPersistentData;
  /* 0x00a0 */ void* WmdTestResult;
  /* 0x00a8 */ struct _GUID BootIdentifier;
} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION; /* size: 0x00b8 */


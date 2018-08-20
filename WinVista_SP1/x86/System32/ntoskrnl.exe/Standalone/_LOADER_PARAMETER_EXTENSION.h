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
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
  /* 0x001c */ void* EmInfFileImage;
  /* 0x0020 */ unsigned long EmInfFileSize;
  /* 0x0024 */ void* TriageDumpBlock;
  /* 0x0028 */ unsigned long LoaderPagesSpanned;
  /* 0x002c */ struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;
  /* 0x0030 */ struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;
  /* 0x0034 */ void* DrvDBImage;
  /* 0x0038 */ unsigned long DrvDBSize;
  /* 0x003c */ struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;
  /* 0x0040 */ unsigned char* HalpIRQLToTPR;
  /* 0x0044 */ unsigned char* HalpVectorToIRQL;
  /* 0x0048 */ struct _LIST_ENTRY FirmwareDescriptorListHead;
  /* 0x0050 */ void* AcpiTable;
  /* 0x0054 */ unsigned long AcpiTableSize;
  struct /* bitfield */
  {
    /* 0x0058 */ unsigned long BootViaWinload : 1; /* bit position: 0 */
    /* 0x0058 */ unsigned long Reserved : 31; /* bit position: 1 */
  }; /* bitfield */
  /* 0x005c */ struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;
  /* 0x0060 */ struct _LIST_ENTRY BootApplicationPersistentData;
  /* 0x0068 */ void* WmdTestResult;
  /* 0x006c */ struct _GUID BootIdentifier;
  /* 0x007c */ unsigned long ResumePages;
  /* 0x0080 */ void* DumpHeader;
} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION; /* size: 0x0084 */


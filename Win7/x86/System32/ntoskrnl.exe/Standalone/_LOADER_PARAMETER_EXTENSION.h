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

typedef enum _TPM_BOOT_ENTROPY_RESULT_CODE
{
  TpmBootEntropyStructureUninitialized = 0,
  TpmBootEntropyDisabledByPolicy = 1,
  TpmBootEntropyNoTpmFound = 2,
  TpmBootEntropyTpmError = 3,
  TpmBootEntropySuccess = 4,
} TPM_BOOT_ENTROPY_RESULT_CODE, *PTPM_BOOT_ENTROPY_RESULT_CODE;

typedef struct _TPM_BOOT_ENTROPY_LDR_RESULT
{
  /* 0x0000 */ unsigned __int64 Policy;
  /* 0x0008 */ enum _TPM_BOOT_ENTROPY_RESULT_CODE ResultCode;
  /* 0x000c */ long ResultStatus;
  /* 0x0010 */ unsigned __int64 Time;
  /* 0x0018 */ unsigned long EntropyLength;
  /* 0x001c */ unsigned char EntropyData[40];
  /* 0x0044 */ long __PADDING__[1];
} TPM_BOOT_ENTROPY_LDR_RESULT, *PTPM_BOOT_ENTROPY_LDR_RESULT; /* size: 0x0048 */

typedef struct _LOADER_PARAMETER_EXTENSION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ struct _PROFILE_PARAMETER_BLOCK Profile;
  /* 0x0014 */ void* EmInfFileImage;
  /* 0x0018 */ unsigned long EmInfFileSize;
  /* 0x001c */ void* TriageDumpBlock;
  /* 0x0020 */ unsigned long LoaderPagesSpanned;
  /* 0x0024 */ struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;
  /* 0x0028 */ struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;
  /* 0x002c */ void* DrvDBImage;
  /* 0x0030 */ unsigned long DrvDBSize;
  /* 0x0034 */ struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;
  /* 0x0038 */ unsigned char* HalpIRQLToTPR;
  /* 0x003c */ unsigned char* HalpVectorToIRQL;
  /* 0x0040 */ struct _LIST_ENTRY FirmwareDescriptorListHead;
  /* 0x0048 */ void* AcpiTable;
  /* 0x004c */ unsigned long AcpiTableSize;
  struct /* bitfield */
  {
    /* 0x0050 */ unsigned long LastBootSucceeded : 1; /* bit position: 0 */
    /* 0x0050 */ unsigned long LastBootShutdown : 1; /* bit position: 1 */
    /* 0x0050 */ unsigned long IoPortAccessSupported : 1; /* bit position: 2 */
    /* 0x0050 */ unsigned long Reserved : 29; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0054 */ struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;
  /* 0x0058 */ struct _LIST_ENTRY BootApplicationPersistentData;
  /* 0x0060 */ void* WmdTestResult;
  /* 0x0064 */ struct _GUID BootIdentifier;
  /* 0x0074 */ unsigned long ResumePages;
  /* 0x0078 */ void* DumpHeader;
  /* 0x007c */ void* BgContext;
  /* 0x0080 */ void* NumaLocalityInfo;
  /* 0x0084 */ void* NumaGroupAssignment;
  /* 0x0088 */ struct _LIST_ENTRY AttachedHives;
  /* 0x0090 */ unsigned long MemoryCachingRequirementsCount;
  /* 0x0094 */ void* MemoryCachingRequirements;
  /* 0x0098 */ struct _TPM_BOOT_ENTROPY_LDR_RESULT TpmBootEntropyResult;
  /* 0x00e0 */ unsigned __int64 ProcessorCounterFrequency;
} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION; /* size: 0x00e8 */


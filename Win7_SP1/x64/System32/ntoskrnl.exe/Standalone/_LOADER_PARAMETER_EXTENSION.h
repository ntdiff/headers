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
  /* 0x0018 */ void* EmInfFileImage;
  /* 0x0020 */ unsigned long EmInfFileSize;
  /* 0x0028 */ void* TriageDumpBlock;
  /* 0x0030 */ unsigned __int64 LoaderPagesSpanned;
  /* 0x0038 */ struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;
  /* 0x0040 */ struct _SMBIOS_TABLE_HEADER* SMBiosEPSHeader;
  /* 0x0048 */ void* DrvDBImage;
  /* 0x0050 */ unsigned long DrvDBSize;
  /* 0x0058 */ struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;
  /* 0x0060 */ struct _LIST_ENTRY FirmwareDescriptorListHead;
  /* 0x0070 */ void* AcpiTable;
  /* 0x0078 */ unsigned long AcpiTableSize;
  struct /* bitfield */
  {
    /* 0x007c */ unsigned long LastBootSucceeded : 1; /* bit position: 0 */
    /* 0x007c */ unsigned long LastBootShutdown : 1; /* bit position: 1 */
    /* 0x007c */ unsigned long IoPortAccessSupported : 1; /* bit position: 2 */
    /* 0x007c */ unsigned long Reserved : 29; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0080 */ struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;
  /* 0x0088 */ struct _LIST_ENTRY BootApplicationPersistentData;
  /* 0x0098 */ void* WmdTestResult;
  /* 0x00a0 */ struct _GUID BootIdentifier;
  /* 0x00b0 */ unsigned long ResumePages;
  /* 0x00b8 */ void* DumpHeader;
  /* 0x00c0 */ void* BgContext;
  /* 0x00c8 */ void* NumaLocalityInfo;
  /* 0x00d0 */ void* NumaGroupAssignment;
  /* 0x00d8 */ struct _LIST_ENTRY AttachedHives;
  /* 0x00e8 */ unsigned long MemoryCachingRequirementsCount;
  /* 0x00f0 */ void* MemoryCachingRequirements;
  /* 0x00f8 */ struct _TPM_BOOT_ENTROPY_LDR_RESULT TpmBootEntropyResult;
  /* 0x0140 */ unsigned __int64 ProcessorCounterFrequency;
} LOADER_PARAMETER_EXTENSION, *PLOADER_PARAMETER_EXTENSION; /* size: 0x0148 */


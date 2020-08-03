typedef enum _BOOT_ENTROPY_SOURCE_ID
{
  BootEntropySourceNone = 0,
  BootEntropySourceSeedfile = 1,
  BootEntropySourceExternal = 2,
  BootEntropySourceTpm = 3,
  BootEntropySourceRdrand = 4,
  BootEntropySourceTime = 5,
  BootEntropySourceAcpiOem0 = 6,
  BootEntropySourceUefi = 7,
  BootEntropySourceCng = 8,
  BootEntropySourceTcbTpm = 9,
  BootEntropySourceTcbRdrand = 10,
  BootMaxEntropySources = 10,
} BOOT_ENTROPY_SOURCE_ID, *PBOOT_ENTROPY_SOURCE_ID;

typedef enum _BOOT_ENTROPY_SOURCE_RESULT_CODE
{
  BootEntropySourceStructureUninitialized = 0,
  BootEntropySourceDisabledByPolicy = 1,
  BootEntropySourceNotPresent = 2,
  BootEntropySourceError = 3,
  BootEntropySourceSuccess = 4,
} BOOT_ENTROPY_SOURCE_RESULT_CODE, *PBOOT_ENTROPY_SOURCE_RESULT_CODE;

typedef struct _BOOT_ENTROPY_SOURCE_LDR_RESULT
{
  /* 0x0000 */ enum _BOOT_ENTROPY_SOURCE_ID SourceId;
  /* 0x0008 */ unsigned __int64 Policy;
  /* 0x0010 */ enum _BOOT_ENTROPY_SOURCE_RESULT_CODE ResultCode;
  /* 0x0014 */ long ResultStatus;
  /* 0x0018 */ unsigned __int64 Time;
  /* 0x0020 */ unsigned long EntropyLength;
  /* 0x0024 */ unsigned char EntropyData[64];
  /* 0x0064 */ long __PADDING__[1];
} BOOT_ENTROPY_SOURCE_LDR_RESULT, *PBOOT_ENTROPY_SOURCE_LDR_RESULT; /* size: 0x0068 */

typedef struct _BOOT_ENTROPY_LDR_RESULT
{
  /* 0x0000 */ unsigned long maxEntropySources;
  /* 0x0008 */ struct _BOOT_ENTROPY_SOURCE_LDR_RESULT EntropySourceResult[10];
  /* 0x0418 */ unsigned char SeedBytesForCng[48];
  /* 0x0448 */ unsigned char RngBytesForNtoskrnl[1024];
  /* 0x0848 */ unsigned char KdEntropy[32];
} BOOT_ENTROPY_LDR_RESULT, *PBOOT_ENTROPY_LDR_RESULT; /* size: 0x0868 */


typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _HAL_EXTENSION_ENVIRONMENT
{
  HalExtEnvironmentNative = 0,
  HalExtEnvironmentVirtualRoot = 1,
  HalExtEnvironmentVirtualMachine = 2,
  HalExtEnvironmentHypervisor = 3,
  HalExtEnvironmentSK = 4,
} HAL_EXTENSION_ENVIRONMENT, *PHAL_EXTENSION_ENVIRONMENT;

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _GIC3_PERSISTED_DATA_INFO
{
  /* 0x0000 */ struct _GIC3_SOFT_REBOOT_DATA* PersistedGicData;
  /* 0x0008 */ unsigned __int64 PersistedGicDataSize;
  /* 0x0010 */ unsigned char PersistedGicDataVersion;
  /* 0x0011 */ char __PADDING__[7];
} GIC3_PERSISTED_DATA_INFO, *PGIC3_PERSISTED_DATA_INFO; /* size: 0x0018 */

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef struct _GIC3_LOCALUNIT_INFO
{
  /* 0x0000 */ unsigned __int64 MPIDR;
  /* 0x0008 */ unsigned long LocalUnitIdentifier;
  /* 0x000c */ unsigned long PerformanceGSIV;
  /* 0x0010 */ unsigned long MaintenanceGSIV;
  /* 0x0018 */ union _LARGE_INTEGER RedistributorBase;
  /* 0x0020 */ void* Redistributor;
  /* 0x0028 */ union _LARGE_INTEGER PendingTableBase;
  /* 0x0030 */ void* PendingTable;
  /* 0x0038 */ unsigned long PendingTableSize;
  /* 0x003c */ unsigned char Initialized;
  /* 0x0040 */ enum _KINTERRUPT_MODE PerformanceTriggerMode;
  /* 0x0044 */ enum _KINTERRUPT_MODE MaintenanceTriggerMode;
} GIC3_LOCALUNIT_INFO, *PGIC3_LOCALUNIT_INFO; /* size: 0x0048 */

typedef struct _GIC3_DATA
{
  /* 0x0000 */ union _LARGE_INTEGER IoUnitBase;
  /* 0x0008 */ void* IoUnit;
  /* 0x0010 */ union _LARGE_INTEGER LpiConfigBase;
  /* 0x0018 */ union _LPI_CONFIG_TABLE_ENTRY* LpiConfig;
  /* 0x0020 */ unsigned long LpiConfigSize;
  /* 0x0024 */ unsigned char Version;
  /* 0x0025 */ unsigned char Initialized;
  /* 0x0028 */ enum _HAL_EXTENSION_ENVIRONMENT Mode;
  /* 0x002c */ unsigned long Identifier;
  /* 0x0030 */ unsigned long InputLineCount;
  /* 0x0034 */ unsigned long ExtendedInputLineCount;
  /* 0x0038 */ unsigned long GsiBase;
  /* 0x0040 */ struct _MAPIC* Madt;
  /* 0x0048 */ unsigned long LocalUnitCount;
  /* 0x0050 */ struct _LIST_ENTRY HalpGic3V2MLines;
  /* 0x0060 */ void* CrashdumpIoUnit;
  /* 0x0068 */ struct _GIC3_CRASHDUMP_LOCALUNIT_INFO* CrashdumpLocalUnitInfo;
  /* 0x0070 */ struct _GIC3_PERSISTED_DATA_INFO PersistedDataInfo;
  /* 0x0088 */ long PropertyBufferState;
  /* 0x0090 */ struct _GIC3_LOCALUNIT_INFO LocalUnitInfo[1];
} GIC3_DATA, *PGIC3_DATA; /* size: 0x00d8 */


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


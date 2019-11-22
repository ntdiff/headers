typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _MM_PAGED_POOL_INFO
{
  /* 0x0000 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ unsigned __int64 MaximumSize;
  /* 0x0010 */ unsigned __int64 AllocatedPagedPool;
} MM_PAGED_POOL_INFO, *PMM_PAGED_POOL_INFO; /* size: 0x0018 */

typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef enum _MI_SYSTEM_VA_TYPE
{
  MiVaUnused = 0,
  MiVaSessionSpace = 1,
  MiVaProcessSpace = 2,
  MiVaBootLoaded = 3,
  MiVaPfnDatabase = 4,
  MiVaNonPagedPool = 5,
  MiVaPagedPool = 6,
  MiVaSpecialPoolPaged = 7,
  MiVaSystemCache = 8,
  MiVaSystemPtes = 9,
  MiVaHal = 10,
  MiVaSessionGlobalSpace = 11,
  MiVaDriverImages = 12,
  MiVaSystemPtesLarge = 13,
  MiVaKernelStacks = 14,
  MiVaSecureNonPagedPool = 15,
  MiVaMaximumType = 16,
} MI_SYSTEM_VA_TYPE, *PMI_SYSTEM_VA_TYPE;

typedef struct _MI_SYSTEM_PTE_TYPE
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ struct _MMPTE* BasePte;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ enum _MI_SYSTEM_VA_TYPE VaType;
  /* 0x0020 */ unsigned long* FailureCount;
  /* 0x0028 */ unsigned long PteFailures;
  union
  {
    /* 0x0030 */ unsigned __int64 SpinLock;
    /* 0x0030 */ struct _EX_PUSH_LOCK* GlobalPushLock;
  }; /* size: 0x0008 */
  /* 0x0038 */ volatile unsigned __int64 TotalSystemPtes;
  /* 0x0040 */ unsigned __int64 Hint;
  /* 0x0048 */ unsigned __int64 LowestBitEverAllocated;
  /* 0x0050 */ volatile struct _MI_CACHED_PTES* CachedPtes;
  /* 0x0058 */ volatile unsigned __int64 TotalFreeSystemPtes;
} MI_SYSTEM_PTE_TYPE, *PMI_SYSTEM_PTE_TYPE; /* size: 0x0060 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char WorkingSetType : 3; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 3; /* bit position: 3 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char SessionMaster : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char Reserved : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    /* 0x0000 */ unsigned short u1;
  }; /* size: 0x0002 */
  /* 0x0002 */ unsigned char MemoryPriority;
  union
  {
    struct /* bitfield */
    {
      /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
      /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
      /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
      /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
      /* 0x0003 */ unsigned char NewMaximum : 1; /* bit position: 4 */
      /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 5 */
    }; /* bitfield */
    /* 0x0003 */ unsigned char u2;
  }; /* size: 0x0001 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0080 */ unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0088 */ unsigned __int64 WorkingSetSize;
  /* 0x0090 */ unsigned __int64 WorkingSetPrivateSize;
  /* 0x0098 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x00a0 */ unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ long __PADDING__[1];
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ volatile long WorkingSetLock;
  /* 0x0004 */ long GoodCitizenWaiting;
  /* 0x0008 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x0010 */ unsigned __int64 ResetPagesRepurposedCount;
  /* 0x0018 */ void* WsSwapSupport;
  /* 0x0020 */ void* CommitReleaseContext;
  /* 0x0028 */ void* AccessLog;
  /* 0x0030 */ volatile unsigned __int64 ChargedWslePages;
  /* 0x0038 */ unsigned __int64 ActualWslePages;
  /* 0x0080 */ unsigned __int64 WorkingSetCoreLock;
  /* 0x0088 */ void* ShadowMapping;
  /* 0x0090 */ long __PADDING__[28];
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0100 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x0100 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0200 */

typedef struct _MMSUPPORT_AGGREGATION
{
  /* 0x0000 */ unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 WorkingSetSize;
  /* 0x0010 */ unsigned __int64 WorkingSetLeafSize;
  /* 0x0018 */ unsigned __int64 PeakWorkingSetSize;
} MMSUPPORT_AGGREGATION, *PMMSUPPORT_AGGREGATION; /* size: 0x0020 */

typedef struct _SYSPTES_HEADER
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead[16];
  /* 0x0100 */ unsigned __int64 Count;
  /* 0x0108 */ unsigned __int64 NumberOfEntries;
  /* 0x0110 */ unsigned __int64 NumberOfEntriesPeak;
} SYSPTES_HEADER, *PSYSPTES_HEADER; /* size: 0x0118 */

typedef struct _MI_SYSTEM_VA_ASSIGNMENT
{
  /* 0x0000 */ void* BaseAddress;
  /* 0x0008 */ unsigned __int64 NumberOfBytes;
} MI_SYSTEM_VA_ASSIGNMENT, *PMI_SYSTEM_VA_ASSIGNMENT; /* size: 0x0010 */

typedef struct _MI_VISIBLE_STATE
{
  /* 0x0000 */ struct _LIST_ENTRY SessionWsList;
  /* 0x0010 */ struct _RTL_BITMAP* SessionIdBitmap;
  /* 0x0018 */ struct _MM_PAGED_POOL_INFO PagedPoolInfo;
  /* 0x0030 */ unsigned __int64 MaximumNonPagedPoolInPages;
  /* 0x0038 */ unsigned __int64 SizeOfPagedPoolInPages;
  /* 0x0040 */ struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;
  /* 0x00a0 */ volatile unsigned __int64 NonPagedPoolCommit;
  /* 0x00a8 */ volatile unsigned __int64 SmallNonPagedPtesCommit;
  /* 0x00b0 */ volatile unsigned __int64 BootCommit;
  /* 0x00b8 */ volatile unsigned __int64 MdlPagesAllocated;
  /* 0x00c0 */ volatile unsigned __int64 SystemPageTableCommit;
  /* 0x00c8 */ volatile unsigned __int64 ProcessCommit;
  /* 0x00d0 */ volatile long DriverCommit;
  /* 0x00d4 */ unsigned char PagingLevels;
  /* 0x00d8 */ volatile unsigned __int64 PfnDatabaseCommit;
  /* 0x0100 */ struct _MMSUPPORT_FULL SystemWs[6];
  /* 0x0d00 */ struct _MMSUPPORT_SHARED SystemCacheShared;
  /* 0x0e00 */ struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];
  /* 0x0e20 */ unsigned long MapCacheFailures;
  /* 0x0e28 */ unsigned __int64 PagefileHashPages;
  /* 0x0e30 */ struct _SYSPTES_HEADER PteHeader;
  /* 0x0f48 */ unsigned __int64 SystemVaTypeCount[16];
  /* 0x0fc8 */ unsigned char SystemVaType[256];
  /* 0x10c8 */ struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[13];
  /* 0x1198 */ long __PADDING__[26];
} MI_VISIBLE_STATE, *PMI_VISIBLE_STATE; /* size: 0x1200 */


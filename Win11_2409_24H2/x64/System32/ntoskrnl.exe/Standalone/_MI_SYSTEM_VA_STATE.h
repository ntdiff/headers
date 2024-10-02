typedef struct _RTL_BITMAP_EX
{
  /* 0x0000 */ unsigned __int64 SizeOfBitMap;
  /* 0x0008 */ unsigned __int64* Buffer;
} RTL_BITMAP_EX, *PRTL_BITMAP_EX; /* size: 0x0010 */

typedef struct _MI_DYNAMIC_BITMAP
{
  /* 0x0000 */ struct _RTL_BITMAP_EX Bitmap;
  /* 0x0010 */ unsigned __int64 MaximumSize;
  /* 0x0018 */ unsigned __int64 Hint;
  /* 0x0020 */ void* BaseVa;
  /* 0x0028 */ unsigned __int64 SizeTopDown;
  /* 0x0030 */ unsigned __int64 HintTopDown;
  /* 0x0038 */ void* BaseVaTopDown;
  /* 0x0040 */ volatile long SpinLock;
  /* 0x0044 */ long __PADDING__[1];
} MI_DYNAMIC_BITMAP, *PMI_DYNAMIC_BITMAP; /* size: 0x0048 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MMSUPPORT_FLAGS
{
  union
  {
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned char WorkingSetType : 4; /* bit position: 0 */
        /* 0x0000 */ unsigned char Reserved0 : 2; /* bit position: 4 */
        /* 0x0000 */ unsigned char MaximumWorkingSetHard : 1; /* bit position: 6 */
        /* 0x0000 */ unsigned char MinimumWorkingSetHard : 1; /* bit position: 7 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char Reserved1 : 1; /* bit position: 0 */
        /* 0x0001 */ unsigned char TrimmerState : 2; /* bit position: 1 */
        /* 0x0001 */ unsigned char LinearAddressProtected : 1; /* bit position: 3 */
        /* 0x0001 */ unsigned char PageStealers : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0000 */ unsigned short u1;
      /* 0x0002 */ unsigned char MemoryPriority;
      union
      {
        struct /* bitfield */
        {
          /* 0x0003 */ unsigned char WsleDeleted : 1; /* bit position: 0 */
          /* 0x0003 */ unsigned char SvmEnabled : 1; /* bit position: 1 */
          /* 0x0003 */ unsigned char ForceAge : 1; /* bit position: 2 */
          /* 0x0003 */ unsigned char ForceTrim : 1; /* bit position: 3 */
          /* 0x0003 */ unsigned char CommitReleaseState : 2; /* bit position: 4 */
          /* 0x0003 */ unsigned char Reserved2 : 2; /* bit position: 6 */
        }; /* bitfield */
        /* 0x0003 */ unsigned char u2;
      }; /* size: 0x0001 */
    }; /* size: 0x0004 */
    /* 0x0000 */ unsigned long EntireFlags;
  }; /* size: 0x0004 */
} MMSUPPORT_FLAGS, *PMMSUPPORT_FLAGS; /* size: 0x0004 */

typedef struct _MMSUPPORT_INSTANCE
{
  /* 0x0000 */ unsigned long NextPageColor;
  /* 0x0004 */ volatile unsigned long PageFaultCount;
  /* 0x0008 */ unsigned __int64 TrimmedPageCount;
  /* 0x0010 */ struct _MMWSL_INSTANCE* VmWorkingSetList;
  /* 0x0018 */ struct _LIST_ENTRY WorkingSetExpansionLinks;
  /* 0x0028 */ volatile unsigned __int64 AgeDistribution[8];
  /* 0x0068 */ struct _KGATE* ExitOutswapGate;
  /* 0x0070 */ unsigned __int64 MinimumWorkingSetSize;
  /* 0x0078 */ unsigned __int64 MaximumWorkingSetSize;
  /* 0x0080 */ volatile unsigned __int64 WorkingSetLeafSize;
  /* 0x0088 */ volatile unsigned __int64 WorkingSetLeafPrivateSize;
  /* 0x0090 */ volatile unsigned __int64 WorkingSetSize;
  /* 0x0098 */ volatile unsigned __int64 WorkingSetPrivateSize;
  /* 0x00a0 */ volatile unsigned __int64 PeakWorkingSetSize;
  /* 0x00a8 */ unsigned long HardFaultCount;
  /* 0x00ac */ unsigned short LastTrimStamp;
  /* 0x00ae */ unsigned short PartitionId;
  /* 0x00b0 */ unsigned __int64 SelfmapLock;
  /* 0x00b8 */ volatile struct _MMSUPPORT_FLAGS Flags;
  /* 0x00bc */ volatile unsigned long InterlockedFlags;
} MMSUPPORT_INSTANCE, *PMMSUPPORT_INSTANCE; /* size: 0x00c0 */

typedef struct _MMSUPPORT_SHARED
{
  /* 0x0000 */ void* WorkingSetLockArray;
  /* 0x0008 */ unsigned __int64 ReleasedCommitDebt;
  /* 0x0010 */ unsigned __int64 ResetPagesRepurposedCount;
  /* 0x0018 */ void* WsSwapSupport;
  /* 0x0020 */ void* CommitReleaseContext;
  /* 0x0028 */ void* AccessLog;
  /* 0x0030 */ volatile unsigned __int64 ChargedWslePages;
  /* 0x0038 */ volatile unsigned __int64 ActualWslePages;
  /* 0x0040 */ volatile long WorkingSetCoreLock;
  /* 0x0048 */ void* ShadowMapping;
  /* 0x0050 */ long __PADDING__[12];
} MMSUPPORT_SHARED, *PMMSUPPORT_SHARED; /* size: 0x0080 */

typedef struct _MMSUPPORT_FULL
{
  /* 0x0000 */ struct _MMSUPPORT_INSTANCE Instance;
  /* 0x00c0 */ struct _MMSUPPORT_SHARED Shared;
} MMSUPPORT_FULL, *PMMSUPPORT_FULL; /* size: 0x0140 */

typedef struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS
{
  /* 0x0000 */ volatile long Lock;
  /* 0x0004 */ unsigned long EntryCount;
  /* 0x0008 */ struct _MMPFN* Flink;
  /* 0x0010 */ struct _MMPFN* Blink;
} MI_WORKING_SET_PAGE_TABLE_AGE_LINKS, *PMI_WORKING_SET_PAGE_TABLE_AGE_LINKS; /* size: 0x0018 */

typedef struct _MMWSL_INSTANCE
{
  /* 0x0000 */ struct _MMPTE* PteResumePoint[3];
  /* 0x0018 */ unsigned long LastAccessClearingRemainder;
  /* 0x001c */ unsigned long LastAgingRemainder;
  /* 0x0020 */ unsigned __int64 LockedEntries;
  /* 0x0040 */ struct _MI_WORKING_SET_PAGE_TABLE_AGE_LINKS ActivePageTableLinks[8];
} MMWSL_INSTANCE, *PMMWSL_INSTANCE; /* size: 0x0100 */

typedef struct _MI_CACHE_LINE
{
  union
  {
    struct
    {
      /* 0x0000 */ void* UniqueCacheLine[8];
    } /* size: 0x0040 */ u1;
    struct
    {
      struct
      {
        /* 0x0000 */ struct _LIST_ENTRY Links;
        /* 0x0010 */ volatile unsigned long Signaled;
        /* 0x0014 */ long __PADDING__[1];
      } /* size: 0x0018 */ u2;
      /* 0x0018 */ long __PADDING__[10];
    }; /* size: 0x0040 */
  }; /* size: 0x0040 */
} MI_CACHE_LINE, *PMI_CACHE_LINE; /* size: 0x0040 */

typedef struct _MI_WORKING_SET_LOCK_ARRAY
{
  union
  {
    /* 0x0000 */ volatile long Lock;
    /* 0x0000 */ struct _MI_CACHE_LINE CacheLinePadding;
  }; /* size: 0x0040 */
} MI_WORKING_SET_LOCK_ARRAY, *PMI_WORKING_SET_LOCK_ARRAY; /* size: 0x0040 */

typedef struct _MI_SYSTEM_VA_STATE
{
  /* 0x0000 */ volatile long SystemTablesLock;
  /* 0x0008 */ unsigned __int64 AvailableSystemCacheVa;
  /* 0x0010 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelStacks;
  /* 0x0058 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapKernelShadowStacks;
  /* 0x00a0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemPtes;
  /* 0x00e8 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapNonCachedMappings;
  /* 0x0130 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapDriverImages;
  /* 0x0178 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapPagedPool;
  /* 0x01c0 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemCache;
  /* 0x0208 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSystemDataViews;
  /* 0x0250 */ struct _MI_DYNAMIC_BITMAP DynamicBitMapSecureNonPagedPool;
  /* 0x0298 */ void* HalPrivateVaStart;
  /* 0x02a0 */ unsigned __int64 HalPrivateVaSize;
  /* 0x02a8 */ unsigned long SystemVaAssignment[8];
  /* 0x02c8 */ unsigned long SystemVaAssignmentHint;
  /* 0x02cc */ unsigned long VaRegionShadowed[8];
  /* 0x02ec */ unsigned long TopLevelPteLockBits[32];
  /* 0x0380 */ struct _MMSUPPORT_FULL SoftWsleSystemVm;
  /* 0x04c0 */ void* HyperSpaceBase;
  /* 0x04c8 */ void* PagableHyperSpace;
  /* 0x04d0 */ void* HyperSpaceEnd;
  /* 0x04d8 */ void* UserSoftWsleBase;
  /* 0x04e0 */ unsigned __int64 PagableHyperSpaceBytes;
  /* 0x04e8 */ unsigned __int64 PageTableCommitmentOffset[2];
  /* 0x04f8 */ volatile long SystemCacheViewLock;
  /* 0x0500 */ struct _MMWSL_INSTANCE SystemWorkingSetList[10];
  /* 0x0f00 */ unsigned __int64 SelfmapLock[4];
  /* 0x0f40 */ struct _MI_WORKING_SET_LOCK_ARRAY SystemCacheWorkingSetLockArray[4];
} MI_SYSTEM_VA_STATE, *PMI_SYSTEM_VA_STATE; /* size: 0x1040 */


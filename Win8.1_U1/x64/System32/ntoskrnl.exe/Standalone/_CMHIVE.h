typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _FREE_DISPLAY
{
  /* 0x0000 */ unsigned long RealVectorSize;
  /* 0x0004 */ unsigned long Hint;
  /* 0x0008 */ struct _RTL_BITMAP Display;
} FREE_DISPLAY, *PFREE_DISPLAY; /* size: 0x0018 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _DUAL
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0008 */ struct _HMAP_DIRECTORY* Map;
  /* 0x0010 */ struct _HMAP_TABLE* SmallDir;
  /* 0x0018 */ unsigned long Guard;
  /* 0x0020 */ struct _FREE_DISPLAY FreeDisplay[24];
  /* 0x0260 */ struct _LIST_ENTRY FreeBins;
  /* 0x0270 */ unsigned long FreeSummary;
  /* 0x0274 */ long __PADDING__[1];
} DUAL, *PDUAL; /* size: 0x0278 */

typedef struct _HHIVE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0008 */ void* GetCellRoutine /* function */;
  /* 0x0010 */ void* Allocate /* function */;
  /* 0x0018 */ void* Free /* function */;
  /* 0x0020 */ void* FileWrite /* function */;
  /* 0x0028 */ void* FileRead /* function */;
  /* 0x0030 */ void* HiveLoadFailure;
  /* 0x0038 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0040 */ struct _RTL_BITMAP DirtyVector;
  /* 0x0050 */ unsigned long DirtyCount;
  /* 0x0054 */ unsigned long DirtyAlloc;
  /* 0x0058 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0068 */ unsigned long UnreconciledCount;
  /* 0x006c */ unsigned long BaseBlockAlloc;
  /* 0x0070 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x0074 */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x0074 */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x0074 */ unsigned char Reserved : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0075 */ unsigned char DirtyFlag;
  /* 0x0078 */ unsigned long HvBinHeadersUse;
  /* 0x007c */ unsigned long HvFreeCellsUse;
  /* 0x0080 */ unsigned long HvUsedCellsUse;
  /* 0x0084 */ unsigned long CmUsedCellsUse;
  /* 0x0088 */ unsigned long HiveFlags;
  /* 0x008c */ unsigned long CurrentLog;
  /* 0x0090 */ unsigned long CurrentLogSequence;
  /* 0x0094 */ unsigned long CurrentLogOffset;
  /* 0x0098 */ unsigned long MinimumLogSequence;
  /* 0x009c */ unsigned long LogFileSizeCap;
  /* 0x00a0 */ unsigned char LogDataPresent[2];
  /* 0x00a2 */ unsigned char PrimaryFileValid;
  /* 0x00a3 */ unsigned char BaseBlockDirty;
  union
  {
    struct /* bitfield */
    {
      /* 0x00a4 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x00a4 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x00a4 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x00a4 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x00a4 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x00a4 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x00a6 */ unsigned char LogEntriesRecovered[2];
  /* 0x00a8 */ unsigned long RefreshCount;
  /* 0x00ac */ unsigned long StorageTypeCount;
  /* 0x00b0 */ unsigned long Version;
  /* 0x00b8 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x05a8 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _CM_WORKITEM
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0010 */ unsigned long Private;
  /* 0x0018 */ void* WorkerRoutine /* function */;
  /* 0x0020 */ void* Parameter;
} CM_WORKITEM, *PCM_WORKITEM; /* size: 0x0028 */

typedef enum _CM_DIRTY_VECTOR_OPERATION
{
  DirtyVectorModified = 0,
  DirtyDataCaptureStart = 1,
  DirtyDataCaptureEnd = 2,
} CM_DIRTY_VECTOR_OPERATION, *PCM_DIRTY_VECTOR_OPERATION;

typedef struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0008 */ enum _CM_DIRTY_VECTOR_OPERATION Operation;
  union
  {
    union
    {
      struct
      {
        /* 0x000c */ unsigned long Start;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct
      {
        /* 0x000c */ unsigned long RangeCount;
        /* 0x0010 */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct
      {
        /* 0x000c */ unsigned long Context1;
        /* 0x0010 */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0018 */ void* Stack[7];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x0050 */

typedef struct _CM_DIRTY_VECTOR_LOG
{
  /* 0x0000 */ volatile unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];
} CM_DIRTY_VECTOR_LOG, *PCM_DIRTY_VECTOR_LOG; /* size: 0x0508 */

typedef struct _HIVE_WRITE_WAIT_QUEUE
{
  /* 0x0000 */ struct _ETHREAD* ActiveThread;
  /* 0x0008 */ struct _HIVE_WAIT_PACKET* WaitList;
  /* 0x0010 */ volatile unsigned long OwnerBoosted;
  /* 0x0014 */ long __PADDING__[1];
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x0018 */

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x05a8 */ void* FileHandles[6];
  /* 0x05d8 */ struct _LIST_ENTRY NotifyList;
  /* 0x05e8 */ struct _LIST_ENTRY HiveList;
  /* 0x05f8 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x0608 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x0610 */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x0620 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x0628 */ unsigned long KcbCacheTableSize;
  /* 0x0630 */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0638 */ unsigned long DeletedKcbTableSize;
  /* 0x063c */ unsigned long Identity;
  /* 0x0640 */ struct _FAST_MUTEX* HiveLock;
  /* 0x0648 */ struct _FAST_MUTEX* WriterLock;
  /* 0x0650 */ struct _ERESOURCE* FlusherLock;
  /* 0x0658 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x0668 */ unsigned long FlushDirtyVectorSize;
  /* 0x0670 */ unsigned char* FlushLogEntry;
  /* 0x0678 */ unsigned long FlushLogEntrySize;
  /* 0x067c */ unsigned long FlushHiveTruncated;
  /* 0x0680 */ unsigned char FlushBaseBlockDirty;
  /* 0x0688 */ struct _RTL_BITMAP CapturedUnreconciledVector;
  /* 0x0698 */ unsigned long CapturedUnreconciledVectorSize;
  /* 0x06a0 */ struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;
  /* 0x06a8 */ unsigned long UnreconciledOffsetArrayCount;
  /* 0x06b0 */ struct _HBASE_BLOCK* UnreconciledBaseBlock;
  /* 0x06b8 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x06c0 */ unsigned long UseCount;
  /* 0x06c4 */ unsigned long LastShrinkHiveSize;
  /* 0x06c8 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x06d0 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x06e0 */ struct _UNICODE_STRING FileFullPath;
  /* 0x06f0 */ struct _UNICODE_STRING FileUserName;
  /* 0x0700 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x0710 */ unsigned long SecurityCount;
  /* 0x0714 */ unsigned long SecurityCacheSize;
  /* 0x0718 */ long SecurityHitHint;
  /* 0x0720 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x0728 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0b28 */ unsigned long UnloadEventCount;
  /* 0x0b30 */ struct _KEVENT** UnloadEventArray;
  /* 0x0b38 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x0b40 */ unsigned char Frozen;
  /* 0x0b48 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x0b50 */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x0b78 */ unsigned char GrowOnlyMode;
  /* 0x0b7c */ unsigned long GrowOffset;
  /* 0x0b80 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x0b90 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x0ba0 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x0ba8 */ struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;
  /* 0x10b0 */ unsigned long Flags;
  /* 0x10b8 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x10c8 */ unsigned __int64 DirtyTime;
  /* 0x10d0 */ unsigned __int64 UnreconciledTime;
  /* 0x10d8 */ struct _CM_RM* CmRm;
  /* 0x10e0 */ unsigned long CmRmInitFailPoint;
  /* 0x10e4 */ long CmRmInitFailStatus;
  /* 0x10e8 */ struct _KTHREAD* CreatorOwner;
  /* 0x10f0 */ struct _KTHREAD* RundownThread;
  /* 0x10f8 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x1100 */ struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;
  /* 0x1118 */ struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;
  union
  {
    /* 0x1130 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x1130 */ unsigned long FlushActive : 1; /* bit position: 0 */
      /* 0x1130 */ unsigned long ReconcileActive : 1; /* bit position: 1 */
      /* 0x1130 */ unsigned long PrimaryFilePurged : 1; /* bit position: 2 */
      /* 0x1130 */ unsigned long DiskFileBad : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x1134 */ unsigned long PrimaryFileSizeBeforeLastFlush;
  /* 0x1138 */ volatile long ReferenceCount;
  /* 0x113c */ long UnloadHistoryIndex;
  /* 0x1140 */ unsigned long UnloadHistory[128];
  /* 0x1340 */ unsigned long BootStart;
  /* 0x1344 */ unsigned long UnaccessedStart;
  /* 0x1348 */ unsigned long UnaccessedEnd;
  /* 0x134c */ unsigned long LoadedKeyCount;
  /* 0x1350 */ volatile unsigned long HandleClosePending;
  /* 0x1358 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
} CMHIVE, *PCMHIVE; /* size: 0x1360 */


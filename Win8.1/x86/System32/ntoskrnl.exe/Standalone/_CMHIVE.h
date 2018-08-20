typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _FREE_DISPLAY
{
  /* 0x0000 */ unsigned long RealVectorSize;
  /* 0x0004 */ unsigned long Hint;
  /* 0x0008 */ struct _RTL_BITMAP Display;
} FREE_DISPLAY, *PFREE_DISPLAY; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DUAL
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ struct _HMAP_DIRECTORY* Map;
  /* 0x0008 */ struct _HMAP_TABLE* SmallDir;
  /* 0x000c */ unsigned long Guard;
  /* 0x0010 */ struct _FREE_DISPLAY FreeDisplay[24];
  /* 0x0190 */ struct _LIST_ENTRY FreeBins;
  /* 0x0198 */ unsigned long FreeSummary;
} DUAL, *PDUAL; /* size: 0x019c */

typedef struct _HHIVE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ void* GetCellRoutine /* function */;
  /* 0x0008 */ void* Allocate /* function */;
  /* 0x000c */ void* Free /* function */;
  /* 0x0010 */ void* FileWrite /* function */;
  /* 0x0014 */ void* FileRead /* function */;
  /* 0x0018 */ void* HiveLoadFailure;
  /* 0x001c */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0020 */ struct _RTL_BITMAP DirtyVector;
  /* 0x0028 */ unsigned long DirtyCount;
  /* 0x002c */ unsigned long DirtyAlloc;
  /* 0x0030 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0038 */ unsigned long UnreconciledCount;
  /* 0x003c */ unsigned long BaseBlockAlloc;
  /* 0x0040 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x0044 */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x0044 */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x0044 */ unsigned char Reserved : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0045 */ unsigned char DirtyFlag;
  /* 0x0048 */ unsigned long HvBinHeadersUse;
  /* 0x004c */ unsigned long HvFreeCellsUse;
  /* 0x0050 */ unsigned long HvUsedCellsUse;
  /* 0x0054 */ unsigned long CmUsedCellsUse;
  /* 0x0058 */ unsigned long HiveFlags;
  /* 0x005c */ unsigned long CurrentLog;
  /* 0x0060 */ unsigned long CurrentLogSequence;
  /* 0x0064 */ unsigned long CurrentLogOffset;
  /* 0x0068 */ unsigned long MinimumLogSequence;
  /* 0x006c */ unsigned char LogDataPresent[2];
  /* 0x006e */ unsigned char PrimaryFileValid;
  /* 0x006f */ unsigned char BaseBlockDirty;
  union
  {
    struct /* bitfield */
    {
      /* 0x0070 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x0070 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x0070 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x0070 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x0070 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0070 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x0072 */ unsigned char LogEntriesRecovered[2];
  /* 0x0074 */ unsigned long RefreshCount;
  /* 0x0078 */ unsigned long StorageTypeCount;
  /* 0x007c */ unsigned long Version;
  /* 0x0080 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x03b8 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _CM_WORKITEM
{
  /* 0x0000 */ struct _LIST_ENTRY ListEntry;
  /* 0x0008 */ unsigned long Private;
  /* 0x000c */ void* WorkerRoutine /* function */;
  /* 0x0010 */ void* Parameter;
} CM_WORKITEM, *PCM_WORKITEM; /* size: 0x0014 */

typedef enum _CM_DIRTY_VECTOR_OPERATION
{
  DirtyVectorModified = 0,
  DirtyDataCaptureStart = 1,
  DirtyDataCaptureEnd = 2,
} CM_DIRTY_VECTOR_OPERATION, *PCM_DIRTY_VECTOR_OPERATION;

typedef struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
  /* 0x0000 */ struct _ETHREAD* Thread;
  /* 0x0004 */ enum _CM_DIRTY_VECTOR_OPERATION Operation;
  union // _TAG_UNNAMED_43
  {
    union
    {
      struct // _TAG_UNNAMED_44
      {
        /* 0x0008 */ unsigned long Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct // _TAG_UNNAMED_45
      {
        /* 0x0008 */ unsigned long RangeCount;
        /* 0x000c */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct // _TAG_UNNAMED_46
      {
        /* 0x0008 */ unsigned long Context1;
        /* 0x000c */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0010 */ void* Stack[7];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x002c */

typedef struct _CM_DIRTY_VECTOR_LOG
{
  /* 0x0000 */ volatile unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];
} CM_DIRTY_VECTOR_LOG, *PCM_DIRTY_VECTOR_LOG; /* size: 0x02c8 */

typedef struct _HIVE_WRITE_WAIT_QUEUE
{
  /* 0x0000 */ struct _ETHREAD* ActiveThread;
  /* 0x0004 */ struct _HIVE_WAIT_PACKET* WaitList;
  /* 0x0008 */ volatile unsigned long OwnerBoosted;
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x000c */

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x03b8 */ void* FileHandles[6];
  /* 0x03d0 */ struct _LIST_ENTRY NotifyList;
  /* 0x03d8 */ struct _LIST_ENTRY HiveList;
  /* 0x03e0 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x03e8 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x03ec */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x03f4 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x03f8 */ unsigned long KcbCacheTableSize;
  /* 0x03fc */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0400 */ unsigned long DeletedKcbTableSize;
  /* 0x0404 */ unsigned long Identity;
  /* 0x0408 */ struct _FAST_MUTEX* HiveLock;
  /* 0x040c */ struct _FAST_MUTEX* WriterLock;
  /* 0x0410 */ struct _ERESOURCE* FlusherLock;
  /* 0x0414 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x041c */ unsigned long FlushDirtyVectorSize;
  /* 0x0420 */ unsigned char* FlushLogEntry;
  /* 0x0424 */ unsigned long FlushLogEntrySize;
  /* 0x0428 */ unsigned long FlushHiveTruncated;
  /* 0x042c */ unsigned char FlushBaseBlockDirty;
  /* 0x0430 */ struct _RTL_BITMAP CapturedUnreconciledVector;
  /* 0x0438 */ unsigned long CapturedUnreconciledVectorSize;
  /* 0x043c */ struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;
  /* 0x0440 */ unsigned long UnreconciledOffsetArrayCount;
  /* 0x0444 */ struct _HBASE_BLOCK* UnreconciledBaseBlock;
  /* 0x0448 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x044c */ unsigned long UseCount;
  /* 0x0450 */ unsigned long LastShrinkHiveSize;
  /* 0x0458 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0460 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x0470 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0478 */ struct _UNICODE_STRING FileUserName;
  /* 0x0480 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x0488 */ unsigned long SecurityCount;
  /* 0x048c */ unsigned long SecurityCacheSize;
  /* 0x0490 */ long SecurityHitHint;
  /* 0x0494 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x0498 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0698 */ unsigned long UnloadEventCount;
  /* 0x069c */ struct _KEVENT** UnloadEventArray;
  /* 0x06a0 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x06a4 */ unsigned char Frozen;
  /* 0x06a8 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x06ac */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x06c0 */ unsigned char GrowOnlyMode;
  /* 0x06c4 */ unsigned long GrowOffset;
  /* 0x06c8 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x06d0 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x06d8 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x06dc */ struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;
  /* 0x09a4 */ unsigned long Flags;
  /* 0x09a8 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x09b0 */ unsigned __int64 DirtyTime;
  /* 0x09b8 */ unsigned __int64 UnreconciledTime;
  /* 0x09c0 */ struct _CM_RM* CmRm;
  /* 0x09c4 */ unsigned long CmRmInitFailPoint;
  /* 0x09c8 */ long CmRmInitFailStatus;
  /* 0x09cc */ struct _KTHREAD* CreatorOwner;
  /* 0x09d0 */ struct _KTHREAD* RundownThread;
  /* 0x09d8 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x09e0 */ struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;
  /* 0x09ec */ struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;
  union
  {
    /* 0x09f8 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x09f8 */ unsigned long FlushActive : 1; /* bit position: 0 */
      /* 0x09f8 */ unsigned long ReconcileActive : 1; /* bit position: 1 */
      /* 0x09f8 */ unsigned long PrimaryFilePurged : 1; /* bit position: 2 */
      /* 0x09f8 */ unsigned long DiskFileBad : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x09fc */ unsigned long PrimaryFileSizeBeforeLastFlush;
  /* 0x0a00 */ volatile long ReferenceCount;
  /* 0x0a04 */ long UnloadHistoryIndex;
  /* 0x0a08 */ unsigned long UnloadHistory[128];
  /* 0x0c08 */ unsigned long BootStart;
  /* 0x0c0c */ unsigned long UnaccessedStart;
  /* 0x0c10 */ unsigned long UnaccessedEnd;
  /* 0x0c14 */ unsigned long LoadedKeyCount;
  /* 0x0c18 */ volatile unsigned long HandleClosePending;
  /* 0x0c1c */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
} CMHIVE, *PCMHIVE; /* size: 0x0c20 */


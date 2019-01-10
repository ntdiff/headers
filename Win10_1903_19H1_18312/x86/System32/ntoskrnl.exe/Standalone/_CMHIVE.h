typedef struct _CMSI_RW_LOCK
{
  /* 0x0000 */ void* Reserved;
} CMSI_RW_LOCK, *PCMSI_RW_LOCK; /* size: 0x0004 */

typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

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

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _HVP_VIEW_MAP
{
  /* 0x0000 */ void* SectionReference;
  /* 0x0008 */ __int64 StorageEndFileOffset;
  /* 0x0010 */ __int64 SectionEndFileOffset;
  /* 0x0018 */ struct _CMSI_PROCESS_TUPLE* ProcessTuple;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ struct _RTL_RB_TREE ViewTree;
} HVP_VIEW_MAP, *PHVP_VIEW_MAP; /* size: 0x0028 */

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
  /* 0x0008 */ void* ReleaseCellRoutine /* function */;
  /* 0x000c */ void* Allocate /* function */;
  /* 0x0010 */ void* Free /* function */;
  /* 0x0014 */ void* FileWrite /* function */;
  /* 0x0018 */ void* FileRead /* function */;
  /* 0x001c */ void* HiveLoadFailure;
  /* 0x0020 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0024 */ struct _CMSI_RW_LOCK FlusherLock;
  /* 0x0028 */ struct _CMSI_RW_LOCK WriterLock;
  /* 0x002c */ struct _RTL_BITMAP DirtyVector;
  /* 0x0034 */ unsigned long DirtyCount;
  /* 0x0038 */ unsigned long DirtyAlloc;
  /* 0x003c */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0044 */ unsigned long UnreconciledCount;
  /* 0x0048 */ unsigned long BaseBlockAlloc;
  /* 0x004c */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x0050 */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x0050 */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x0050 */ unsigned char Reserved : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0051 */ unsigned char DirtyFlag;
  /* 0x0054 */ unsigned long HvBinHeadersUse;
  /* 0x0058 */ unsigned long HvFreeCellsUse;
  /* 0x005c */ unsigned long HvUsedCellsUse;
  /* 0x0060 */ unsigned long CmUsedCellsUse;
  /* 0x0064 */ unsigned long HiveFlags;
  /* 0x0068 */ unsigned long CurrentLog;
  /* 0x006c */ unsigned long CurrentLogSequence;
  /* 0x0070 */ unsigned long CurrentLogMinimumSequence;
  /* 0x0074 */ unsigned long CurrentLogOffset;
  /* 0x0078 */ unsigned long MinimumLogSequence;
  /* 0x007c */ unsigned long LogFileSizeCap;
  /* 0x0080 */ unsigned char LogDataPresent[2];
  /* 0x0082 */ unsigned char PrimaryFileValid;
  /* 0x0083 */ unsigned char BaseBlockDirty;
  /* 0x0088 */ union _LARGE_INTEGER LastLogSwapTime;
  union
  {
    struct /* bitfield */
    {
      /* 0x0090 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x0090 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x0090 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x0090 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x0090 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0090 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x0092 */ unsigned char LogEntriesRecovered[2];
  /* 0x0094 */ unsigned long RefreshCount;
  /* 0x0098 */ unsigned long StorageTypeCount;
  /* 0x009c */ unsigned long Version;
  /* 0x00a0 */ struct _HVP_VIEW_MAP ViewMap;
  /* 0x00c8 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x0400 */

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

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
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
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned long Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct
      {
        /* 0x0008 */ unsigned long RangeCount;
        /* 0x000c */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct
      {
        /* 0x0008 */ unsigned long Context1;
        /* 0x000c */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0010 */ void* Stack[6];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x0028 */

typedef struct _CM_DIRTY_VECTOR_LOG
{
  /* 0x0000 */ volatile unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];
} CM_DIRTY_VECTOR_LOG, *PCM_DIRTY_VECTOR_LOG; /* size: 0x0288 */

typedef struct _HIVE_WRITE_WAIT_QUEUE
{
  /* 0x0000 */ struct _ETHREAD* ActiveThread;
  /* 0x0004 */ struct _HIVE_WAIT_PACKET* WaitList;
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x0008 */

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x0400 */ void* FileHandles[6];
  /* 0x0418 */ struct _LIST_ENTRY NotifyList;
  /* 0x0420 */ struct _LIST_ENTRY HiveList;
  /* 0x0428 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x0430 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x0434 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x0438 */ unsigned long KcbCacheTableSize;
  /* 0x043c */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0440 */ unsigned long DeletedKcbTableSize;
  /* 0x0444 */ unsigned long Identity;
  /* 0x0448 */ struct _CMSI_RW_LOCK HiveLock;
  /* 0x044c */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x0454 */ unsigned long FlushDirtyVectorSize;
  /* 0x0458 */ struct CMP_OFFSET_ARRAY* FlushLogEntryOffsetArray;
  /* 0x045c */ unsigned long FlushLogEntryOffsetArrayCount;
  /* 0x0460 */ unsigned long FlushLogEntrySize;
  /* 0x0464 */ unsigned long FlushHiveTruncated;
  /* 0x0468 */ unsigned char FlushBaseBlockDirty;
  /* 0x046c */ struct _RTL_BITMAP CapturedUnreconciledVector;
  /* 0x0474 */ unsigned long CapturedUnreconciledVectorSize;
  /* 0x0478 */ struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;
  /* 0x047c */ unsigned long UnreconciledOffsetArrayCount;
  /* 0x0480 */ struct _HBASE_BLOCK* UnreconciledBaseBlock;
  /* 0x0484 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0488 */ unsigned long LastShrinkHiveSize;
  /* 0x0490 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0498 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x04a8 */ struct _UNICODE_STRING FileFullPath;
  /* 0x04b0 */ struct _UNICODE_STRING FileUserName;
  /* 0x04b8 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x04c0 */ unsigned long SecurityCount;
  /* 0x04c4 */ unsigned long SecurityCacheSize;
  /* 0x04c8 */ long SecurityHitHint;
  /* 0x04cc */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x04d0 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x06d0 */ unsigned long UnloadEventCount;
  /* 0x06d4 */ struct _KEVENT** UnloadEventArray;
  /* 0x06d8 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x06dc */ unsigned char Frozen;
  /* 0x06e0 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x06e4 */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x06f8 */ struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;
  /* 0x0980 */ unsigned long Flags;
  /* 0x0984 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x0990 */ unsigned __int64 DirtyTime;
  /* 0x0998 */ unsigned __int64 UnreconciledTime;
  /* 0x09a0 */ struct _CM_RM* CmRm;
  /* 0x09a4 */ unsigned long CmRmInitFailPoint;
  /* 0x09a8 */ long CmRmInitFailStatus;
  /* 0x09ac */ struct _KTHREAD* CreatorOwner;
  /* 0x09b0 */ struct _KTHREAD* RundownThread;
  /* 0x09b8 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x09c0 */ struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;
  /* 0x09c8 */ struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;
  union
  {
    /* 0x09d0 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x09d0 */ unsigned long PrimaryFilePurged : 1; /* bit position: 0 */
      /* 0x09d0 */ unsigned long DiskFileBad : 1; /* bit position: 1 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x09d4 */ unsigned long PrimaryFileSizeBeforeLastFlush;
  /* 0x09d8 */ volatile long ReferenceCount;
  /* 0x09dc */ long UnloadHistoryIndex;
  /* 0x09e0 */ unsigned long UnloadHistory[128];
  /* 0x0be0 */ unsigned long BootStart;
  /* 0x0be4 */ unsigned long UnaccessedStart;
  /* 0x0be8 */ unsigned long UnaccessedEnd;
  /* 0x0bec */ unsigned long LoadedKeyCount;
  /* 0x0bf0 */ volatile unsigned long HandleClosePending;
  /* 0x0bf4 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
  /* 0x0bf8 */ unsigned char FinalFlushSucceeded;
  /* 0x0bfc */ struct _CMP_VOLUME_CONTEXT* VolumeContext;
} CMHIVE, *PCMHIVE; /* size: 0x0c00 */


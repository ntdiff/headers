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
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

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

typedef struct _HVIEW_MAP_PIN_LOG_ENTRY
{
  /* 0x0000 */ unsigned long ViewOffset;
  /* 0x0004 */ unsigned char Pinned;
  /* 0x0008 */ unsigned __int64 PinMask;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0014 */ void* Stack[6];
  /* 0x002c */ long __PADDING__[1];
} HVIEW_MAP_PIN_LOG_ENTRY, *PHVIEW_MAP_PIN_LOG_ENTRY; /* size: 0x0030 */

typedef struct _HVIEW_MAP_PIN_LOG
{
  /* 0x0000 */ unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];
} HVIEW_MAP_PIN_LOG, *PHVIEW_MAP_PIN_LOG; /* size: 0x0308 */

typedef struct _HVIEW_MAP
{
  /* 0x0000 */ unsigned long MappedLength;
  /* 0x0004 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0008 */ struct _FILE_OBJECT* FileObject;
  /* 0x000c */ struct _HVIEW_MAP_DIRECTORY* Directory;
  /* 0x0010 */ unsigned long PagesCharged;
  /* 0x0018 */ struct _HVIEW_MAP_PIN_LOG PinLog;
} HVIEW_MAP, *PHVIEW_MAP; /* size: 0x0320 */

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
  /* 0x0024 */ struct _RTL_BITMAP DirtyVector;
  /* 0x002c */ unsigned long DirtyCount;
  /* 0x0030 */ unsigned long DirtyAlloc;
  /* 0x0034 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x003c */ unsigned long UnreconciledCount;
  /* 0x0040 */ unsigned long BaseBlockAlloc;
  /* 0x0044 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x0048 */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x0048 */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x0048 */ unsigned char SystemCacheBacked : 1; /* bit position: 2 */
    /* 0x0048 */ unsigned char Reserved : 5; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0049 */ unsigned char DirtyFlag;
  /* 0x004c */ unsigned long HvBinHeadersUse;
  /* 0x0050 */ unsigned long HvFreeCellsUse;
  /* 0x0054 */ unsigned long HvUsedCellsUse;
  /* 0x0058 */ unsigned long CmUsedCellsUse;
  /* 0x005c */ unsigned long HiveFlags;
  /* 0x0060 */ unsigned long CurrentLog;
  /* 0x0064 */ unsigned long CurrentLogSequence;
  /* 0x0068 */ unsigned long CurrentLogMinimumSequence;
  /* 0x006c */ unsigned long CurrentLogOffset;
  /* 0x0070 */ unsigned long MinimumLogSequence;
  /* 0x0074 */ unsigned long LogFileSizeCap;
  /* 0x0078 */ unsigned char LogDataPresent[2];
  /* 0x007a */ unsigned char PrimaryFileValid;
  /* 0x007b */ unsigned char BaseBlockDirty;
  /* 0x0080 */ union _LARGE_INTEGER LastLogSwapTime;
  union
  {
    struct /* bitfield */
    {
      /* 0x0088 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x0088 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x0088 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x0088 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x0088 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0088 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x008a */ unsigned char LogEntriesRecovered[2];
  /* 0x008c */ unsigned long RefreshCount;
  /* 0x0090 */ unsigned long StorageTypeCount;
  /* 0x0094 */ unsigned long Version;
  /* 0x0098 */ struct _HVIEW_MAP ViewMap;
  /* 0x03b8 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x06f0 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned long Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0004 */

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
  union // _TAG_UNNAMED_171
  {
    union
    {
      struct // _TAG_UNNAMED_172
      {
        /* 0x0008 */ unsigned long Start;
        /* 0x000c */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct // _TAG_UNNAMED_173
      {
        /* 0x0008 */ unsigned long RangeCount;
        /* 0x000c */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct // _TAG_UNNAMED_174
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
  /* 0x0008 */ volatile unsigned long OwnerBoosted;
} HIVE_WRITE_WAIT_QUEUE, *PHIVE_WRITE_WAIT_QUEUE; /* size: 0x000c */

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x06f0 */ void* FileHandles[6];
  /* 0x0708 */ struct _LIST_ENTRY NotifyList;
  /* 0x0710 */ struct _LIST_ENTRY HiveList;
  /* 0x0718 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x0720 */ struct _LIST_ENTRY FailedUnloadList;
  /* 0x0728 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x072c */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x0734 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x0738 */ unsigned long KcbCacheTableSize;
  /* 0x073c */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0740 */ unsigned long DeletedKcbTableSize;
  /* 0x0744 */ unsigned long Identity;
  /* 0x0748 */ struct _FAST_MUTEX* HiveLock;
  /* 0x074c */ struct _FAST_MUTEX* WriterLock;
  /* 0x0750 */ struct _ERESOURCE* FlusherLock;
  /* 0x0754 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x075c */ unsigned long FlushDirtyVectorSize;
  /* 0x0760 */ unsigned char* FlushLogEntry;
  /* 0x0764 */ unsigned long FlushLogEntrySize;
  /* 0x0768 */ unsigned long FlushHiveTruncated;
  /* 0x076c */ unsigned char FlushBaseBlockDirty;
  /* 0x0770 */ struct _RTL_BITMAP CapturedUnreconciledVector;
  /* 0x0778 */ unsigned long CapturedUnreconciledVectorSize;
  /* 0x077c */ struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;
  /* 0x0780 */ unsigned long UnreconciledOffsetArrayCount;
  /* 0x0784 */ struct _HBASE_BLOCK* UnreconciledBaseBlock;
  /* 0x0788 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x078c */ unsigned long UseCount;
  /* 0x0790 */ unsigned long LastShrinkHiveSize;
  /* 0x0798 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x07a0 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x07b0 */ struct _UNICODE_STRING FileFullPath;
  /* 0x07b8 */ struct _UNICODE_STRING FileUserName;
  /* 0x07c0 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x07c8 */ unsigned long SecurityCount;
  /* 0x07cc */ unsigned long SecurityCacheSize;
  /* 0x07d0 */ long SecurityHitHint;
  /* 0x07d4 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x07d8 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x09d8 */ unsigned long UnloadEventCount;
  /* 0x09dc */ struct _KEVENT** UnloadEventArray;
  /* 0x09e0 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x09e4 */ unsigned char Frozen;
  /* 0x09e8 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x09ec */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x0a00 */ unsigned char GrowOnlyMode;
  /* 0x0a04 */ unsigned long GrowOffset;
  /* 0x0a08 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x0a10 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x0a14 */ struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;
  /* 0x0c9c */ unsigned long Flags;
  /* 0x0ca0 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x0ca8 */ unsigned __int64 DirtyTime;
  /* 0x0cb0 */ unsigned __int64 UnreconciledTime;
  /* 0x0cb8 */ struct _CM_RM* CmRm;
  /* 0x0cbc */ unsigned long CmRmInitFailPoint;
  /* 0x0cc0 */ long CmRmInitFailStatus;
  /* 0x0cc4 */ struct _KTHREAD* CreatorOwner;
  /* 0x0cc8 */ struct _KTHREAD* RundownThread;
  /* 0x0cd0 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0cd8 */ struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;
  /* 0x0ce4 */ struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;
  union
  {
    /* 0x0cf0 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x0cf0 */ unsigned long FlushActive : 1; /* bit position: 0 */
      /* 0x0cf0 */ unsigned long ReconcileActive : 1; /* bit position: 1 */
      /* 0x0cf0 */ unsigned long PrimaryFilePurged : 1; /* bit position: 2 */
      /* 0x0cf0 */ unsigned long DiskFileBad : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0cf4 */ unsigned long PrimaryFileSizeBeforeLastFlush;
  /* 0x0cf8 */ volatile long ReferenceCount;
  /* 0x0cfc */ long UnloadHistoryIndex;
  /* 0x0d00 */ unsigned long UnloadHistory[128];
  /* 0x0f00 */ unsigned long BootStart;
  /* 0x0f04 */ unsigned long UnaccessedStart;
  /* 0x0f08 */ unsigned long UnaccessedEnd;
  /* 0x0f0c */ unsigned long LoadedKeyCount;
  /* 0x0f10 */ volatile unsigned long HandleClosePending;
  /* 0x0f14 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
  /* 0x0f18 */ unsigned char FinalFlushSucceeded;
  /* 0x0f19 */ unsigned char FailedUnload;
  /* 0x0f1a */ char __PADDING__[6];
} CMHIVE, *PCMHIVE; /* size: 0x0f20 */


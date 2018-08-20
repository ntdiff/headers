typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_3
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

typedef struct _HVIEW_MAP_PIN_LOG_ENTRY
{
  /* 0x0000 */ unsigned long ViewOffset;
  /* 0x0004 */ unsigned char Pinned;
  /* 0x0008 */ unsigned __int64 PinMask;
  /* 0x0010 */ struct _KTHREAD* Thread;
  /* 0x0018 */ void* Stack[6];
} HVIEW_MAP_PIN_LOG_ENTRY, *PHVIEW_MAP_PIN_LOG_ENTRY; /* size: 0x0048 */

typedef struct _HVIEW_MAP_PIN_LOG
{
  /* 0x0000 */ unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];
} HVIEW_MAP_PIN_LOG, *PHVIEW_MAP_PIN_LOG; /* size: 0x0488 */

typedef struct _HVIEW_MAP
{
  /* 0x0000 */ unsigned long MappedLength;
  /* 0x0008 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0010 */ struct _FILE_OBJECT* FileObject;
  /* 0x0018 */ struct _HVIEW_MAP_DIRECTORY* Directory;
  /* 0x0020 */ unsigned long PagesCharged;
  /* 0x0028 */ struct _HVIEW_MAP_PIN_LOG PinLog;
} HVIEW_MAP, *PHVIEW_MAP; /* size: 0x04b0 */

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
  /* 0x0010 */ void* ReleaseCellRoutine /* function */;
  /* 0x0018 */ void* Allocate /* function */;
  /* 0x0020 */ void* Free /* function */;
  /* 0x0028 */ void* FileWrite /* function */;
  /* 0x0030 */ void* FileRead /* function */;
  /* 0x0038 */ void* HiveLoadFailure;
  /* 0x0040 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0048 */ struct _RTL_BITMAP DirtyVector;
  /* 0x0058 */ unsigned long DirtyCount;
  /* 0x005c */ unsigned long DirtyAlloc;
  /* 0x0060 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0070 */ unsigned long UnreconciledCount;
  /* 0x0074 */ unsigned long BaseBlockAlloc;
  /* 0x0078 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x007c */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x007c */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x007c */ unsigned char SystemCacheBacked : 1; /* bit position: 2 */
    /* 0x007c */ unsigned char Reserved : 5; /* bit position: 3 */
  }; /* bitfield */
  /* 0x007d */ unsigned char DirtyFlag;
  /* 0x0080 */ unsigned long HvBinHeadersUse;
  /* 0x0084 */ unsigned long HvFreeCellsUse;
  /* 0x0088 */ unsigned long HvUsedCellsUse;
  /* 0x008c */ unsigned long CmUsedCellsUse;
  /* 0x0090 */ unsigned long HiveFlags;
  /* 0x0094 */ unsigned long CurrentLog;
  /* 0x0098 */ unsigned long CurrentLogSequence;
  /* 0x009c */ unsigned long CurrentLogMinimumSequence;
  /* 0x00a0 */ unsigned long CurrentLogOffset;
  /* 0x00a4 */ unsigned long MinimumLogSequence;
  /* 0x00a8 */ unsigned long LogFileSizeCap;
  /* 0x00ac */ unsigned char LogDataPresent[2];
  /* 0x00ae */ unsigned char PrimaryFileValid;
  /* 0x00af */ unsigned char BaseBlockDirty;
  /* 0x00b0 */ union _LARGE_INTEGER LastLogSwapTime;
  union
  {
    struct /* bitfield */
    {
      /* 0x00b8 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x00b8 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x00b8 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x00b8 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x00b8 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x00b8 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x00ba */ unsigned char LogEntriesRecovered[2];
  /* 0x00bc */ unsigned long RefreshCount;
  /* 0x00c0 */ unsigned long StorageTypeCount;
  /* 0x00c4 */ unsigned long Version;
  /* 0x00c8 */ struct _HVIEW_MAP ViewMap;
  /* 0x0578 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x0a68 */

typedef struct _EX_RUNDOWN_REF
{
  union
  {
    /* 0x0000 */ unsigned __int64 Count;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_RUNDOWN_REF, *PEX_RUNDOWN_REF; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
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
  union // _TAG_UNNAMED_81
  {
    union
    {
      struct // _TAG_UNNAMED_82
      {
        /* 0x000c */ unsigned long Start;
        /* 0x0010 */ unsigned long Length;
      } /* size: 0x0008 */ DirtyVectorModifiedContext;
      struct // _TAG_UNNAMED_83
      {
        /* 0x000c */ unsigned long RangeCount;
        /* 0x0010 */ unsigned long SetBitCount;
      } /* size: 0x0008 */ DirtyDataCaptureContext;
      struct // _TAG_UNNAMED_84
      {
        /* 0x000c */ unsigned long Context1;
        /* 0x0010 */ unsigned long Context2;
      } /* size: 0x0008 */ Raw;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ Data;
  /* 0x0018 */ void* Stack[6];
} CM_DIRTY_VECTOR_LOG_ENTRY, *PCM_DIRTY_VECTOR_LOG_ENTRY; /* size: 0x0048 */

typedef struct _CM_DIRTY_VECTOR_LOG
{
  /* 0x0000 */ volatile unsigned long Next;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ struct _CM_DIRTY_VECTOR_LOG_ENTRY Log[16];
} CM_DIRTY_VECTOR_LOG, *PCM_DIRTY_VECTOR_LOG; /* size: 0x0488 */

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
  /* 0x0a68 */ void* FileHandles[6];
  /* 0x0a98 */ struct _LIST_ENTRY NotifyList;
  /* 0x0aa8 */ struct _LIST_ENTRY HiveList;
  /* 0x0ab8 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x0ac8 */ struct _LIST_ENTRY FailedUnloadList;
  /* 0x0ad8 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x0ae0 */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x0af0 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x0af8 */ unsigned long KcbCacheTableSize;
  /* 0x0b00 */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0b08 */ unsigned long DeletedKcbTableSize;
  /* 0x0b0c */ unsigned long Identity;
  /* 0x0b10 */ struct _FAST_MUTEX* HiveLock;
  /* 0x0b18 */ struct _FAST_MUTEX* WriterLock;
  /* 0x0b20 */ struct _ERESOURCE* FlusherLock;
  /* 0x0b28 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x0b38 */ unsigned long FlushDirtyVectorSize;
  /* 0x0b40 */ unsigned char* FlushLogEntry;
  /* 0x0b48 */ unsigned long FlushLogEntrySize;
  /* 0x0b4c */ unsigned long FlushHiveTruncated;
  /* 0x0b50 */ unsigned char FlushBaseBlockDirty;
  /* 0x0b58 */ struct _RTL_BITMAP CapturedUnreconciledVector;
  /* 0x0b68 */ unsigned long CapturedUnreconciledVectorSize;
  /* 0x0b70 */ struct CMP_OFFSET_ARRAY* UnreconciledOffsetArray;
  /* 0x0b78 */ unsigned long UnreconciledOffsetArrayCount;
  /* 0x0b80 */ struct _HBASE_BLOCK* UnreconciledBaseBlock;
  /* 0x0b88 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0b90 */ unsigned long UseCount;
  /* 0x0b94 */ unsigned long LastShrinkHiveSize;
  /* 0x0b98 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0ba0 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x0bb0 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0bc0 */ struct _UNICODE_STRING FileUserName;
  /* 0x0bd0 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x0be0 */ unsigned long SecurityCount;
  /* 0x0be4 */ unsigned long SecurityCacheSize;
  /* 0x0be8 */ long SecurityHitHint;
  /* 0x0bf0 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x0bf8 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0ff8 */ unsigned long UnloadEventCount;
  /* 0x1000 */ struct _KEVENT** UnloadEventArray;
  /* 0x1008 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x1010 */ unsigned char Frozen;
  /* 0x1018 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x1020 */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x1048 */ unsigned char GrowOnlyMode;
  /* 0x104c */ unsigned long GrowOffset;
  /* 0x1050 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x1060 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x1068 */ struct _CM_DIRTY_VECTOR_LOG DirtyVectorLog;
  /* 0x14f0 */ unsigned long Flags;
  /* 0x14f8 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x1508 */ unsigned __int64 DirtyTime;
  /* 0x1510 */ unsigned __int64 UnreconciledTime;
  /* 0x1518 */ struct _CM_RM* CmRm;
  /* 0x1520 */ unsigned long CmRmInitFailPoint;
  /* 0x1524 */ long CmRmInitFailStatus;
  /* 0x1528 */ struct _KTHREAD* CreatorOwner;
  /* 0x1530 */ struct _KTHREAD* RundownThread;
  /* 0x1538 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x1540 */ struct _HIVE_WRITE_WAIT_QUEUE FlushQueue;
  /* 0x1558 */ struct _HIVE_WRITE_WAIT_QUEUE ReconcileQueue;
  union
  {
    /* 0x1570 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x1570 */ unsigned long FlushActive : 1; /* bit position: 0 */
      /* 0x1570 */ unsigned long ReconcileActive : 1; /* bit position: 1 */
      /* 0x1570 */ unsigned long PrimaryFilePurged : 1; /* bit position: 2 */
      /* 0x1570 */ unsigned long DiskFileBad : 1; /* bit position: 3 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x1574 */ unsigned long PrimaryFileSizeBeforeLastFlush;
  /* 0x1578 */ volatile long ReferenceCount;
  /* 0x157c */ long UnloadHistoryIndex;
  /* 0x1580 */ unsigned long UnloadHistory[128];
  /* 0x1780 */ unsigned long BootStart;
  /* 0x1784 */ unsigned long UnaccessedStart;
  /* 0x1788 */ unsigned long UnaccessedEnd;
  /* 0x178c */ unsigned long LoadedKeyCount;
  /* 0x1790 */ volatile unsigned long HandleClosePending;
  /* 0x1798 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
  /* 0x17a0 */ unsigned char FinalFlushSucceeded;
  /* 0x17a1 */ unsigned char FailedUnload;
  /* 0x17a2 */ char __PADDING__[6];
} CMHIVE, *PCMHIVE; /* size: 0x17a8 */


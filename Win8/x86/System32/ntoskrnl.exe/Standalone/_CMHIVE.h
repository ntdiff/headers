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
  /* 0x0030 */ unsigned long BaseBlockAlloc;
  /* 0x0034 */ unsigned long Cluster;
  /* 0x0038 */ unsigned char Flat;
  /* 0x0039 */ unsigned char ReadOnly;
  /* 0x003a */ unsigned char DirtyFlag;
  /* 0x003c */ unsigned long HvBinHeadersUse;
  /* 0x0040 */ unsigned long HvFreeCellsUse;
  /* 0x0044 */ unsigned long HvUsedCellsUse;
  /* 0x0048 */ unsigned long CmUsedCellsUse;
  /* 0x004c */ unsigned long HiveFlags;
  /* 0x0050 */ unsigned long CurrentLog;
  /* 0x0054 */ unsigned long LogSize[2];
  /* 0x005c */ unsigned long RefreshCount;
  /* 0x0060 */ unsigned long StorageTypeCount;
  /* 0x0064 */ unsigned long Version;
  /* 0x0068 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x03a0 */

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

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x03a0 */ void* FileHandles[6];
  /* 0x03b8 */ struct _LIST_ENTRY NotifyList;
  /* 0x03c0 */ struct _LIST_ENTRY HiveList;
  /* 0x03c8 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x03d0 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x03d4 */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x03dc */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x03e0 */ unsigned long KcbCacheTableSize;
  /* 0x03e4 */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x03e8 */ unsigned long DeletedKcbTableSize;
  /* 0x03ec */ unsigned long Identity;
  /* 0x03f0 */ struct _FAST_MUTEX* HiveLock;
  /* 0x03f4 */ struct _FAST_MUTEX* WriterLock;
  /* 0x03f8 */ struct _ERESOURCE* FlusherLock;
  /* 0x03fc */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x0404 */ struct CMP_OFFSET_ARRAY* FlushOffsetArray;
  /* 0x0408 */ unsigned long FlushOffsetArrayCount;
  /* 0x040c */ struct _HBASE_BLOCK* FlushBaseBlock;
  /* 0x0410 */ unsigned long FlushHiveTruncated;
  /* 0x0414 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0418 */ unsigned long UseCount;
  /* 0x041c */ unsigned long LastShrinkHiveSize;
  /* 0x0420 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0428 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x0438 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0440 */ struct _UNICODE_STRING FileUserName;
  /* 0x0448 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x0450 */ unsigned long SecurityCount;
  /* 0x0454 */ unsigned long SecurityCacheSize;
  /* 0x0458 */ long SecurityHitHint;
  /* 0x045c */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x0460 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0660 */ unsigned long UnloadEventCount;
  /* 0x0664 */ struct _KEVENT** UnloadEventArray;
  /* 0x0668 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x066c */ unsigned char Frozen;
  /* 0x0670 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x0674 */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x0688 */ unsigned char GrowOnlyMode;
  /* 0x068c */ unsigned long GrowOffset;
  /* 0x0690 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x0698 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x06a0 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x06a4 */ unsigned long Flags;
  /* 0x06a8 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x06b0 */ unsigned __int64 DirtyTime;
  /* 0x06b8 */ struct _CM_RM* CmRm;
  /* 0x06bc */ unsigned long CmRmInitFailPoint;
  /* 0x06c0 */ long CmRmInitFailStatus;
  /* 0x06c4 */ struct _KTHREAD* CreatorOwner;
  /* 0x06c8 */ struct _KTHREAD* RundownThread;
  /* 0x06cc */ struct _ETHREAD* ActiveFlushThread;
  /* 0x06d0 */ struct _EX_PUSH_LOCK FlushBoostLock;
  /* 0x06d8 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x06e0 */ volatile long ReferenceCount;
  union
  {
    /* 0x06e4 */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x06e4 */ unsigned long FlushActive : 1; /* bit position: 0 */
      /* 0x06e4 */ unsigned long DiskFileBad : 1; /* bit position: 1 */
      /* 0x06e4 */ unsigned long FlushBoosted : 1; /* bit position: 2 */
      /* 0x06e4 */ unsigned long PrimaryWritePending : 1; /* bit position: 3 */
      /* 0x06e4 */ unsigned long PriorPurgeComplete : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x06e8 */ struct _HIVE_WAIT_PACKET* FlushWaitList;
  /* 0x06ec */ long UnloadHistoryIndex;
  /* 0x06f0 */ unsigned long UnloadHistory[128];
  /* 0x08f0 */ unsigned long BootStart;
  /* 0x08f4 */ unsigned long UnaccessedStart;
  /* 0x08f8 */ unsigned long UnaccessedEnd;
  /* 0x08fc */ unsigned long LoadedKeyCount;
  /* 0x0900 */ volatile unsigned long HandleClosePending;
  /* 0x0904 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
} CMHIVE, *PCMHIVE; /* size: 0x0908 */


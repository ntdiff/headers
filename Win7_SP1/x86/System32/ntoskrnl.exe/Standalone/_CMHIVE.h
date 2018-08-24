typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _FREE_DISPLAY
{
  /* 0x0000 */ unsigned long RealVectorSize;
  /* 0x0004 */ struct _RTL_BITMAP Display;
} FREE_DISPLAY, *PFREE_DISPLAY; /* size: 0x000c */

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
  /* 0x0130 */ unsigned long FreeSummary;
  /* 0x0134 */ struct _LIST_ENTRY FreeBins;
} DUAL, *PDUAL; /* size: 0x013c */

typedef struct _HHIVE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ void* GetCellRoutine /* function */;
  /* 0x0008 */ void* ReleaseCellRoutine /* function */;
  /* 0x000c */ void* Allocate /* function */;
  /* 0x0010 */ void* Free /* function */;
  /* 0x0014 */ void* FileSetSize /* function */;
  /* 0x0018 */ void* FileWrite /* function */;
  /* 0x001c */ void* FileRead /* function */;
  /* 0x0020 */ void* FileFlush /* function */;
  /* 0x0024 */ void* HiveLoadFailure;
  /* 0x0028 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x002c */ struct _RTL_BITMAP DirtyVector;
  /* 0x0034 */ unsigned long DirtyCount;
  /* 0x0038 */ unsigned long DirtyAlloc;
  /* 0x003c */ unsigned long BaseBlockAlloc;
  /* 0x0040 */ unsigned long Cluster;
  /* 0x0044 */ unsigned char Flat;
  /* 0x0045 */ unsigned char ReadOnly;
  /* 0x0046 */ unsigned char DirtyFlag;
  /* 0x0048 */ unsigned long HvBinHeadersUse;
  /* 0x004c */ unsigned long HvFreeCellsUse;
  /* 0x0050 */ unsigned long HvUsedCellsUse;
  /* 0x0054 */ unsigned long CmUsedCellsUse;
  /* 0x0058 */ unsigned long HiveFlags;
  /* 0x005c */ unsigned long CurrentLog;
  /* 0x0060 */ unsigned long LogSize[2];
  /* 0x0068 */ unsigned long RefreshCount;
  /* 0x006c */ unsigned long StorageTypeCount;
  /* 0x0070 */ unsigned long Version;
  /* 0x0074 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x02ec */

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
    struct // _TAG_UNNAMED_4
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
  /* 0x02ec */ void* FileHandles[6];
  /* 0x0304 */ struct _LIST_ENTRY NotifyList;
  /* 0x030c */ struct _LIST_ENTRY HiveList;
  /* 0x0314 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x031c */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x0320 */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x0328 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x032c */ unsigned long KcbCacheTableSize;
  /* 0x0330 */ unsigned long Identity;
  /* 0x0334 */ struct _FAST_MUTEX* HiveLock;
  /* 0x0338 */ struct _EX_PUSH_LOCK ViewLock;
  /* 0x033c */ struct _KTHREAD* ViewLockOwner;
  /* 0x0340 */ unsigned long ViewLockLast;
  /* 0x0344 */ unsigned long ViewUnLockLast;
  /* 0x0348 */ struct _FAST_MUTEX* WriterLock;
  /* 0x034c */ struct _ERESOURCE* FlusherLock;
  /* 0x0350 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x0358 */ struct CMP_OFFSET_ARRAY* FlushOffsetArray;
  /* 0x035c */ unsigned long FlushOffsetArrayCount;
  /* 0x0360 */ unsigned long FlushHiveTruncated;
  /* 0x0364 */ struct _FAST_MUTEX* FlushLock2;
  /* 0x0368 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x036c */ struct _LIST_ENTRY MappedViewList;
  /* 0x0374 */ struct _LIST_ENTRY PinnedViewList;
  /* 0x037c */ struct _LIST_ENTRY FlushedViewList;
  /* 0x0384 */ unsigned short MappedViewCount;
  /* 0x0386 */ unsigned short PinnedViewCount;
  /* 0x0388 */ unsigned long UseCount;
  /* 0x038c */ unsigned long ViewsPerHive;
  /* 0x0390 */ struct _FILE_OBJECT* FileObject;
  /* 0x0394 */ unsigned long LastShrinkHiveSize;
  /* 0x0398 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x03a0 */ struct _UNICODE_STRING FileFullPath;
  /* 0x03a8 */ struct _UNICODE_STRING FileUserName;
  /* 0x03b0 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x03b8 */ unsigned long SecurityCount;
  /* 0x03bc */ unsigned long SecurityCacheSize;
  /* 0x03c0 */ long SecurityHitHint;
  /* 0x03c4 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x03c8 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x05c8 */ unsigned long UnloadEventCount;
  /* 0x05cc */ struct _KEVENT** UnloadEventArray;
  /* 0x05d0 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x05d4 */ unsigned char Frozen;
  /* 0x05d8 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x05dc */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x05f0 */ unsigned char GrowOnlyMode;
  /* 0x05f4 */ unsigned long GrowOffset;
  /* 0x05f8 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x0600 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x0608 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x060c */ unsigned long Flags;
  /* 0x0610 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x0618 */ unsigned long FlushCount;
  /* 0x061c */ struct _CM_RM* CmRm;
  /* 0x0620 */ unsigned long CmRmInitFailPoint;
  /* 0x0624 */ long CmRmInitFailStatus;
  /* 0x0628 */ struct _KTHREAD* CreatorOwner;
  /* 0x062c */ struct _KTHREAD* RundownThread;
  /* 0x0630 */ union _LARGE_INTEGER LastWriteTime;
} CMHIVE, *PCMHIVE; /* size: 0x0638 */


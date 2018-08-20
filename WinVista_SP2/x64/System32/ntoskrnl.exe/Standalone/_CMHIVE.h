typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _FREE_DISPLAY
{
  /* 0x0000 */ unsigned long RealVectorSize;
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
  /* 0x0260 */ unsigned long FreeSummary;
  /* 0x0268 */ struct _LIST_ENTRY FreeBins;
} DUAL, *PDUAL; /* size: 0x0278 */

typedef struct _HHIVE
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0008 */ void* GetCellRoutine /* function */;
  /* 0x0010 */ void* ReleaseCellRoutine /* function */;
  /* 0x0018 */ void* Allocate /* function */;
  /* 0x0020 */ void* Free /* function */;
  /* 0x0028 */ void* FileSetSize /* function */;
  /* 0x0030 */ void* FileWrite /* function */;
  /* 0x0038 */ void* FileRead /* function */;
  /* 0x0040 */ void* FileFlush /* function */;
  /* 0x0048 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0050 */ struct _RTL_BITMAP DirtyVector;
  /* 0x0060 */ unsigned long DirtyCount;
  /* 0x0064 */ unsigned long DirtyAlloc;
  /* 0x0068 */ unsigned long BaseBlockAlloc;
  /* 0x006c */ unsigned long Cluster;
  /* 0x0070 */ unsigned char Flat;
  /* 0x0071 */ unsigned char ReadOnly;
  /* 0x0072 */ unsigned char DirtyFlag;
  /* 0x0074 */ unsigned long HvBinHeadersUse;
  /* 0x0078 */ unsigned long HvFreeCellsUse;
  /* 0x007c */ unsigned long HvUsedCellsUse;
  /* 0x0080 */ unsigned long CmUsedCellsUse;
  /* 0x0084 */ unsigned long HiveFlags;
  /* 0x0088 */ unsigned long CurrentLog;
  /* 0x008c */ unsigned long LogSize[2];
  /* 0x0094 */ unsigned long RefreshCount;
  /* 0x0098 */ unsigned long StorageTypeCount;
  /* 0x009c */ unsigned long Version;
  /* 0x00a0 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x0590 */

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
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x0590 */ void* FileHandles[6];
  /* 0x05c0 */ struct _LIST_ENTRY NotifyList;
  /* 0x05d0 */ struct _LIST_ENTRY HiveList;
  /* 0x05e0 */ struct _FAST_MUTEX* HiveLock;
  /* 0x05e8 */ struct _EX_PUSH_LOCK ViewLock;
  /* 0x05f0 */ struct _KTHREAD* ViewLockOwner;
  /* 0x05f8 */ unsigned long ViewLockLast;
  /* 0x05fc */ unsigned long ViewUnLockLast;
  /* 0x0600 */ struct _FAST_MUTEX* WriterLock;
  /* 0x0608 */ struct _EX_PUSH_LOCK FlusherLock;
  /* 0x0610 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0618 */ struct _LIST_ENTRY MappedViewList;
  /* 0x0628 */ struct _LIST_ENTRY PinnedViewList;
  /* 0x0638 */ struct _LIST_ENTRY FlushedViewList;
  /* 0x0648 */ unsigned short MappedViewCount;
  /* 0x064a */ unsigned short PinnedViewCount;
  /* 0x064c */ unsigned long UseCount;
  /* 0x0650 */ unsigned long ViewsPerHive;
  /* 0x0658 */ struct _FILE_OBJECT* FileObject;
  /* 0x0660 */ unsigned long LastShrinkHiveSize;
  /* 0x0668 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0670 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0680 */ struct _UNICODE_STRING FileUserName;
  /* 0x0690 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x06a0 */ unsigned long SecurityCount;
  /* 0x06a4 */ unsigned long SecurityCacheSize;
  /* 0x06a8 */ long SecurityHitHint;
  /* 0x06b0 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x06b8 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0ab8 */ unsigned long UnloadEventCount;
  /* 0x0ac0 */ struct _KEVENT** UnloadEventArray;
  /* 0x0ac8 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x0ad0 */ unsigned char Frozen;
  /* 0x0ad8 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x0ae0 */ unsigned char GrowOnlyMode;
  /* 0x0ae4 */ unsigned long GrowOffset;
  /* 0x0ae8 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x0af8 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x0b08 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x0b10 */ unsigned long Flags;
  /* 0x0b18 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x0b28 */ unsigned long FlushCount;
  /* 0x0b30 */ struct _CM_RM* CmRm;
  /* 0x0b38 */ unsigned long CmRmInitFailPoint;
  /* 0x0b3c */ long CmRmInitFailStatus;
  /* 0x0b40 */ struct _KTHREAD* CreatorOwner;
} CMHIVE, *PCMHIVE; /* size: 0x0b48 */


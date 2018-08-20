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
  /* 0x0024 */ struct _HBASE_BLOCK* BaseBlock;
  /* 0x0028 */ struct _RTL_BITMAP DirtyVector;
  /* 0x0030 */ unsigned long DirtyCount;
  /* 0x0034 */ unsigned long DirtyAlloc;
  /* 0x0038 */ unsigned long BaseBlockAlloc;
  /* 0x003c */ unsigned long Cluster;
  /* 0x0040 */ unsigned char Flat;
  /* 0x0041 */ unsigned char ReadOnly;
  /* 0x0042 */ unsigned char DirtyFlag;
  /* 0x0044 */ unsigned long HvBinHeadersUse;
  /* 0x0048 */ unsigned long HvFreeCellsUse;
  /* 0x004c */ unsigned long HvUsedCellsUse;
  /* 0x0050 */ unsigned long CmUsedCellsUse;
  /* 0x0054 */ unsigned long HiveFlags;
  /* 0x0058 */ unsigned long CurrentLog;
  /* 0x005c */ unsigned long LogSize[2];
  /* 0x0064 */ unsigned long RefreshCount;
  /* 0x0068 */ unsigned long StorageTypeCount;
  /* 0x006c */ unsigned long Version;
  /* 0x0070 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x02e8 */

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

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x02e8 */ void* FileHandles[6];
  /* 0x0300 */ struct _LIST_ENTRY NotifyList;
  /* 0x0308 */ struct _LIST_ENTRY HiveList;
  /* 0x0310 */ struct _FAST_MUTEX* HiveLock;
  /* 0x0314 */ struct _FAST_MUTEX* ViewLock;
  /* 0x0318 */ struct _FAST_MUTEX* WriterLock;
  /* 0x031c */ struct _EX_PUSH_LOCK FlusherLock;
  /* 0x0320 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0324 */ struct _LIST_ENTRY MappedViewList;
  /* 0x032c */ struct _LIST_ENTRY PinnedViewList;
  /* 0x0334 */ struct _LIST_ENTRY FlushedViewList;
  /* 0x033c */ unsigned short MappedViewCount;
  /* 0x033e */ unsigned short PinnedViewCount;
  /* 0x0340 */ unsigned long UseCount;
  /* 0x0344 */ unsigned long ViewsPerHive;
  /* 0x0348 */ struct _FILE_OBJECT* FileObject;
  /* 0x034c */ unsigned long LastShrinkHiveSize;
  /* 0x0350 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0358 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0360 */ struct _UNICODE_STRING FileUserName;
  /* 0x0368 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x0370 */ unsigned long SecurityCount;
  /* 0x0374 */ unsigned long SecurityCacheSize;
  /* 0x0378 */ long SecurityHitHint;
  /* 0x037c */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x0380 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0580 */ unsigned long UnloadEventCount;
  /* 0x0584 */ struct _KEVENT** UnloadEventArray;
  /* 0x0588 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x058c */ unsigned char Frozen;
  /* 0x0590 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x0594 */ unsigned char GrowOnlyMode;
  /* 0x0598 */ unsigned long GrowOffset;
  /* 0x059c */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x05a4 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x05ac */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x05b0 */ unsigned long Flags;
  /* 0x05b4 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x05bc */ unsigned long FlushCount;
  /* 0x05c0 */ struct _CM_RM* CmRm;
  /* 0x05c4 */ unsigned long CmRmInitFailPoint;
  /* 0x05c8 */ long CmRmInitFailStatus;
  /* 0x05cc */ struct _KTHREAD* CreatorOwner;
} CMHIVE, *PCMHIVE; /* size: 0x05d0 */


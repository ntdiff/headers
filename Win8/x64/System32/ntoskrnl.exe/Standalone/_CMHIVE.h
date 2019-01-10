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
  /* 0x0058 */ unsigned long BaseBlockAlloc;
  /* 0x005c */ unsigned long Cluster;
  /* 0x0060 */ unsigned char Flat;
  /* 0x0061 */ unsigned char ReadOnly;
  /* 0x0062 */ unsigned char DirtyFlag;
  /* 0x0064 */ unsigned long HvBinHeadersUse;
  /* 0x0068 */ unsigned long HvFreeCellsUse;
  /* 0x006c */ unsigned long HvUsedCellsUse;
  /* 0x0070 */ unsigned long CmUsedCellsUse;
  /* 0x0074 */ unsigned long HiveFlags;
  /* 0x0078 */ unsigned long CurrentLog;
  /* 0x007c */ unsigned long LogSize[2];
  /* 0x0084 */ unsigned long RefreshCount;
  /* 0x0088 */ unsigned long StorageTypeCount;
  /* 0x008c */ unsigned long Version;
  /* 0x0090 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x0580 */

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

typedef struct _CMHIVE
{
  /* 0x0000 */ struct _HHIVE Hive;
  /* 0x0580 */ void* FileHandles[6];
  /* 0x05b0 */ struct _LIST_ENTRY NotifyList;
  /* 0x05c0 */ struct _LIST_ENTRY HiveList;
  /* 0x05d0 */ struct _LIST_ENTRY PreloadedHiveList;
  /* 0x05e0 */ struct _EX_RUNDOWN_REF HiveRundown;
  /* 0x05e8 */ struct _LIST_ENTRY ParseCacheEntries;
  /* 0x05f8 */ struct _CM_KEY_HASH_TABLE_ENTRY* KcbCacheTable;
  /* 0x0600 */ unsigned long KcbCacheTableSize;
  /* 0x0608 */ struct _CM_KEY_HASH_TABLE_ENTRY* DeletedKcbTable;
  /* 0x0610 */ unsigned long DeletedKcbTableSize;
  /* 0x0614 */ unsigned long Identity;
  /* 0x0618 */ struct _FAST_MUTEX* HiveLock;
  /* 0x0620 */ struct _FAST_MUTEX* WriterLock;
  /* 0x0628 */ struct _ERESOURCE* FlusherLock;
  /* 0x0630 */ struct _RTL_BITMAP FlushDirtyVector;
  /* 0x0640 */ struct CMP_OFFSET_ARRAY* FlushOffsetArray;
  /* 0x0648 */ unsigned long FlushOffsetArrayCount;
  /* 0x0650 */ struct _HBASE_BLOCK* FlushBaseBlock;
  /* 0x0658 */ unsigned long FlushHiveTruncated;
  /* 0x0660 */ struct _EX_PUSH_LOCK SecurityLock;
  /* 0x0668 */ unsigned long UseCount;
  /* 0x066c */ unsigned long LastShrinkHiveSize;
  /* 0x0670 */ union _LARGE_INTEGER ActualFileSize;
  /* 0x0678 */ union _LARGE_INTEGER LogFileSizes[2];
  /* 0x0688 */ struct _UNICODE_STRING FileFullPath;
  /* 0x0698 */ struct _UNICODE_STRING FileUserName;
  /* 0x06a8 */ struct _UNICODE_STRING HiveRootPath;
  /* 0x06b8 */ unsigned long SecurityCount;
  /* 0x06bc */ unsigned long SecurityCacheSize;
  /* 0x06c0 */ long SecurityHitHint;
  /* 0x06c8 */ struct _CM_KEY_SECURITY_CACHE_ENTRY* SecurityCache;
  /* 0x06d0 */ struct _LIST_ENTRY SecurityHash[64];
  /* 0x0ad0 */ unsigned long UnloadEventCount;
  /* 0x0ad8 */ struct _KEVENT** UnloadEventArray;
  /* 0x0ae0 */ struct _CM_KEY_CONTROL_BLOCK* RootKcb;
  /* 0x0ae8 */ unsigned char Frozen;
  /* 0x0af0 */ struct _CM_WORKITEM* UnloadWorkItem;
  /* 0x0af8 */ struct _CM_WORKITEM UnloadWorkItemHolder;
  /* 0x0b20 */ unsigned char GrowOnlyMode;
  /* 0x0b24 */ unsigned long GrowOffset;
  /* 0x0b28 */ struct _LIST_ENTRY KcbConvertListHead;
  /* 0x0b38 */ struct _LIST_ENTRY KnodeConvertListHead;
  /* 0x0b48 */ struct _CM_CELL_REMAP_BLOCK* CellRemapArray;
  /* 0x0b50 */ unsigned long Flags;
  /* 0x0b58 */ struct _LIST_ENTRY TrustClassEntry;
  /* 0x0b68 */ unsigned __int64 DirtyTime;
  /* 0x0b70 */ struct _CM_RM* CmRm;
  /* 0x0b78 */ unsigned long CmRmInitFailPoint;
  /* 0x0b7c */ long CmRmInitFailStatus;
  /* 0x0b80 */ struct _KTHREAD* CreatorOwner;
  /* 0x0b88 */ struct _KTHREAD* RundownThread;
  /* 0x0b90 */ struct _ETHREAD* ActiveFlushThread;
  /* 0x0b98 */ struct _EX_PUSH_LOCK FlushBoostLock;
  /* 0x0ba0 */ union _LARGE_INTEGER LastWriteTime;
  /* 0x0ba8 */ volatile long ReferenceCount;
  union
  {
    /* 0x0bac */ unsigned long FlushFlags;
    struct /* bitfield */
    {
      /* 0x0bac */ unsigned long FlushActive : 1; /* bit position: 0 */
      /* 0x0bac */ unsigned long DiskFileBad : 1; /* bit position: 1 */
      /* 0x0bac */ unsigned long FlushBoosted : 1; /* bit position: 2 */
      /* 0x0bac */ unsigned long PrimaryWritePending : 1; /* bit position: 3 */
      /* 0x0bac */ unsigned long PriorPurgeComplete : 1; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0bb0 */ struct _HIVE_WAIT_PACKET* FlushWaitList;
  /* 0x0bb8 */ long UnloadHistoryIndex;
  /* 0x0bbc */ unsigned long UnloadHistory[128];
  /* 0x0dbc */ unsigned long BootStart;
  /* 0x0dc0 */ unsigned long UnaccessedStart;
  /* 0x0dc4 */ unsigned long UnaccessedEnd;
  /* 0x0dc8 */ unsigned long LoadedKeyCount;
  /* 0x0dcc */ volatile unsigned long HandleClosePending;
  /* 0x0dd0 */ struct _EX_PUSH_LOCK HandleClosePendingEvent;
} CMHIVE, *PCMHIVE; /* size: 0x0dd8 */


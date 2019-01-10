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


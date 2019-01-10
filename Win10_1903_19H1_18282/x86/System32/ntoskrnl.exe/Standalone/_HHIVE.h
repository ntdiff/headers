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


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
  /* 0x0030 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0038 */ unsigned long UnreconciledCount;
  /* 0x003c */ unsigned long BaseBlockAlloc;
  /* 0x0040 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x0044 */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x0044 */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x0044 */ unsigned char Reserved : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0045 */ unsigned char DirtyFlag;
  /* 0x0048 */ unsigned long HvBinHeadersUse;
  /* 0x004c */ unsigned long HvFreeCellsUse;
  /* 0x0050 */ unsigned long HvUsedCellsUse;
  /* 0x0054 */ unsigned long CmUsedCellsUse;
  /* 0x0058 */ unsigned long HiveFlags;
  /* 0x005c */ unsigned long CurrentLog;
  /* 0x0060 */ unsigned long CurrentLogSequence;
  /* 0x0064 */ unsigned long CurrentLogOffset;
  /* 0x0068 */ unsigned long MinimumLogSequence;
  /* 0x006c */ unsigned char LogDataPresent[2];
  /* 0x006e */ unsigned char PrimaryFileValid;
  /* 0x006f */ unsigned char BaseBlockDirty;
  union
  {
    struct /* bitfield */
    {
      /* 0x0070 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x0070 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x0070 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x0070 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x0070 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x0070 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x0072 */ unsigned char LogEntriesRecovered[2];
  /* 0x0074 */ unsigned long RefreshCount;
  /* 0x0078 */ unsigned long StorageTypeCount;
  /* 0x007c */ unsigned long Version;
  /* 0x0080 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x03b8 */


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
  /* 0x0058 */ struct _RTL_BITMAP UnreconciledVector;
  /* 0x0068 */ unsigned long UnreconciledCount;
  /* 0x006c */ unsigned long BaseBlockAlloc;
  /* 0x0070 */ unsigned long Cluster;
  struct /* bitfield */
  {
    /* 0x0074 */ unsigned char Flat : 1; /* bit position: 0 */
    /* 0x0074 */ unsigned char ReadOnly : 1; /* bit position: 1 */
    /* 0x0074 */ unsigned char Reserved : 6; /* bit position: 2 */
  }; /* bitfield */
  /* 0x0075 */ unsigned char DirtyFlag;
  /* 0x0078 */ unsigned long HvBinHeadersUse;
  /* 0x007c */ unsigned long HvFreeCellsUse;
  /* 0x0080 */ unsigned long HvUsedCellsUse;
  /* 0x0084 */ unsigned long CmUsedCellsUse;
  /* 0x0088 */ unsigned long HiveFlags;
  /* 0x008c */ unsigned long CurrentLog;
  /* 0x0090 */ unsigned long CurrentLogSequence;
  /* 0x0094 */ unsigned long CurrentLogOffset;
  /* 0x0098 */ unsigned long MinimumLogSequence;
  /* 0x009c */ unsigned char LogDataPresent[2];
  /* 0x009e */ unsigned char PrimaryFileValid;
  /* 0x009f */ unsigned char BaseBlockDirty;
  union
  {
    struct /* bitfield */
    {
      /* 0x00a0 */ unsigned short FirstLogFile : 3; /* bit position: 0 */
      /* 0x00a0 */ unsigned short SecondLogFile : 3; /* bit position: 3 */
      /* 0x00a0 */ unsigned short HeaderRecovered : 1; /* bit position: 6 */
      /* 0x00a0 */ unsigned short LegacyRecoveryIndicated : 1; /* bit position: 7 */
      /* 0x00a0 */ unsigned short RecoveryInformationReserved : 8; /* bit position: 8 */
    }; /* bitfield */
    /* 0x00a0 */ unsigned short RecoveryInformation;
  }; /* size: 0x0002 */
  /* 0x00a2 */ unsigned char LogEntriesRecovered[2];
  /* 0x00a4 */ unsigned long RefreshCount;
  /* 0x00a8 */ unsigned long StorageTypeCount;
  /* 0x00ac */ unsigned long Version;
  /* 0x00b0 */ struct _DUAL Storage[2];
} HHIVE, *PHHIVE; /* size: 0x05a0 */


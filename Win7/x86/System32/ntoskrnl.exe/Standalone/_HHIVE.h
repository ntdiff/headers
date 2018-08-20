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


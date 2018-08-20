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


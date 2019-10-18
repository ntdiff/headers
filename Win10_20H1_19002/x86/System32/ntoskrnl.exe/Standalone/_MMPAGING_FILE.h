typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short CpuId;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0004 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0004 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0004 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0004 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0004 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
  union
  {
    /* 0x0008 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0008 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0008 */ unsigned long ParentValue;
  }; /* size: 0x0004 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x000c */

typedef struct _MMPAGING_FILE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long MaximumSize;
  /* 0x0008 */ unsigned long MinimumSize;
  /* 0x000c */ unsigned long FreeSpace;
  /* 0x0010 */ unsigned long PeakUsage;
  /* 0x0014 */ unsigned long HighestPage;
  /* 0x0018 */ unsigned long FreeReservationSpace;
  /* 0x001c */ struct _FILE_OBJECT* File;
  /* 0x0020 */ struct _MMMOD_WRITER_MDL_ENTRY** Entry;
  /* 0x0024 */ unsigned long NumberOfModWriterEntries;
  /* 0x0028 */ union _SLIST_HEADER PfnsToFree;
  /* 0x0030 */ struct _UNICODE_STRING PageFileName;
  /* 0x0038 */ struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;
  /* 0x003c */ unsigned long AllocationBitmapHint;
  /* 0x0040 */ unsigned long LargestAllocationCluster;
  /* 0x0044 */ unsigned long RefreshAllocationCluster;
  /* 0x0048 */ unsigned long LastRefreshAllocationCluster;
  /* 0x004c */ unsigned long ReservedClusterSizeAggregate;
  /* 0x0050 */ unsigned long MaximumRunLengthInBitmaps;
  /* 0x0054 */ struct _RTL_RB_TREE BitmapsCacheLengthTree;
  /* 0x005c */ struct _RTL_RB_TREE BitmapsCacheLocationTree;
  /* 0x0064 */ struct _LIST_ENTRY BitmapsCacheFreeList;
  /* 0x006c */ struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY* BitmapsCacheEntries;
  union
  {
    /* 0x0070 */ unsigned long ToBeEvictedCount;
    /* 0x0070 */ unsigned long HybridPriority;
  }; /* size: 0x0004 */
  struct /* bitfield */
  {
    /* 0x0074 */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x0074 */ unsigned short WsSwapPagefile : 1; /* bit position: 4 */
    /* 0x0074 */ unsigned short NoReservations : 1; /* bit position: 5 */
    /* 0x0074 */ unsigned short VirtualStorePagefile : 1; /* bit position: 6 */
    /* 0x0074 */ unsigned short SwapSupported : 1; /* bit position: 7 */
    /* 0x0074 */ unsigned short NodeInserted : 1; /* bit position: 8 */
    /* 0x0074 */ unsigned short StackNotified : 1; /* bit position: 9 */
    /* 0x0074 */ unsigned short BackedBySCM : 1; /* bit position: 10 */
    /* 0x0074 */ unsigned short SpecialPurposeMemory : 1; /* bit position: 11 */
    /* 0x0074 */ unsigned short Spare0 : 3; /* bit position: 12 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0076 */ unsigned char AdriftMdls : 1; /* bit position: 0 */
    /* 0x0076 */ unsigned char Spare1 : 7; /* bit position: 1 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x0077 */ unsigned char IgnoreReservations : 1; /* bit position: 0 */
    /* 0x0077 */ unsigned char Spare2 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x0078 */ unsigned long PageHashPages;
  /* 0x007c */ unsigned long PageHashPagesPeak;
  /* 0x0080 */ unsigned long* PageHash;
  /* 0x0084 */ void* FileHandle;
  /* 0x0088 */ volatile long SpinLock;
  /* 0x008c */ struct _RTL_AVL_TREE FlowThroughReadRoot;
  /* 0x0090 */ struct _MI_PARTITION* Partition;
  /* 0x0094 */ struct _RTL_BALANCED_NODE FileObjectNode;
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x00a0 */


typedef union _SLIST_HEADER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned __int64 Alignment;
      /* 0x0008 */ unsigned __int64 Region;
    }; /* size: 0x0010 */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Depth : 16; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 Sequence : 48; /* bit position: 16 */
      }; /* bitfield */
      struct /* bitfield */
      {
        /* 0x0008 */ unsigned __int64 Reserved : 4; /* bit position: 0 */
        /* 0x0008 */ unsigned __int64 NextEntry : 60; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0010 */ HeaderArm64;
  }; /* size: 0x0010 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0010 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _RTL_RB_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
  union
  {
    /* 0x0008 */ unsigned char Encoded : 1; /* bit position: 0 */
    /* 0x0008 */ struct _RTL_BALANCED_NODE* Min;
  }; /* size: 0x0008 */
} RTL_RB_TREE, *PRTL_RB_TREE; /* size: 0x0010 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

typedef struct _RTL_BALANCED_NODE
{
  union
  {
    /* 0x0000 */ struct _RTL_BALANCED_NODE* Children[2];
    struct
    {
      /* 0x0000 */ struct _RTL_BALANCED_NODE* Left;
      /* 0x0008 */ struct _RTL_BALANCED_NODE* Right;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  union
  {
    /* 0x0010 */ unsigned char Red : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned char Balance : 2; /* bit position: 0 */
    /* 0x0010 */ unsigned __int64 ParentValue;
  }; /* size: 0x0008 */
} RTL_BALANCED_NODE, *PRTL_BALANCED_NODE; /* size: 0x0018 */

typedef struct _MMPAGING_FILE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long MaximumSize;
  /* 0x0008 */ unsigned long MinimumSize;
  /* 0x000c */ unsigned long FreeSpace;
  /* 0x0010 */ unsigned long PeakUsage;
  /* 0x0014 */ unsigned long FreeReservationSpace;
  /* 0x0018 */ struct _FILE_OBJECT* File;
  /* 0x0020 */ struct _MMMOD_WRITER_MDL_ENTRY** Entry;
  /* 0x0028 */ unsigned long NumberOfModWriterEntries;
  /* 0x0030 */ union _SLIST_HEADER PfnsToFree;
  /* 0x0040 */ struct _UNICODE_STRING PageFileName;
  /* 0x0050 */ struct _MI_PAGING_FILE_SPACE_BITMAPS* Bitmaps;
  /* 0x0058 */ unsigned long AllocationBitmapHint;
  /* 0x005c */ unsigned long LargestAllocationCluster;
  /* 0x0060 */ unsigned long RefreshAllocationCluster;
  /* 0x0064 */ unsigned long LastRefreshAllocationCluster;
  union
  {
    /* 0x0068 */ unsigned long ReservedClusterSizeAggregate;
    /* 0x0068 */ unsigned long ToBeEvictedHint;
  }; /* size: 0x0004 */
  /* 0x006c */ unsigned long MaximumRunLengthInBitmaps;
  /* 0x0070 */ struct _RTL_RB_TREE BitmapsCacheLengthTree;
  /* 0x0080 */ struct _RTL_RB_TREE BitmapsCacheLocationTree;
  /* 0x0090 */ struct _LIST_ENTRY BitmapsCacheFreeList;
  /* 0x00a0 */ struct _MI_PAGEFILE_BITMAPS_CACHE_ENTRY* BitmapsCacheEntries;
  union
  {
    /* 0x00a8 */ unsigned long ToBeEvictedCount;
    /* 0x00a8 */ unsigned long HybridPriority;
  }; /* size: 0x0004 */
  struct /* bitfield */
  {
    /* 0x00ac */ unsigned short PageFileNumber : 4; /* bit position: 0 */
    /* 0x00ac */ unsigned short WsSwapPagefile : 1; /* bit position: 4 */
    /* 0x00ac */ unsigned short NoReservations : 1; /* bit position: 5 */
    /* 0x00ac */ unsigned short VirtualStorePagefile : 1; /* bit position: 6 */
    /* 0x00ac */ unsigned short SwapSupported : 1; /* bit position: 7 */
    /* 0x00ac */ unsigned short NodeInserted : 1; /* bit position: 8 */
    /* 0x00ac */ unsigned short StackNotified : 1; /* bit position: 9 */
    /* 0x00ac */ unsigned short BackedBySCM : 1; /* bit position: 10 */
    /* 0x00ac */ unsigned short SpecialPurposeMemory : 1; /* bit position: 11 */
    /* 0x00ac */ unsigned short Spare0 : 3; /* bit position: 12 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x00ae */ unsigned char AdriftMdls : 1; /* bit position: 0 */
    /* 0x00ae */ unsigned char Spare1 : 7; /* bit position: 1 */
  }; /* bitfield */
  struct /* bitfield */
  {
    /* 0x00af */ unsigned char IgnoreReservations : 1; /* bit position: 0 */
    /* 0x00af */ unsigned char Spare2 : 7; /* bit position: 1 */
  }; /* bitfield */
  /* 0x00b0 */ unsigned long PageHashPages;
  /* 0x00b4 */ unsigned long PageHashPagesPeak;
  /* 0x00b8 */ struct _MI_PAGE_HASH* PageHash;
  /* 0x00c0 */ void* FileHandle;
  /* 0x00c8 */ volatile long SpinLock;
  /* 0x00d0 */ struct _RTL_AVL_TREE FlowThroughReadRoot;
  /* 0x00d8 */ struct _MI_PARTITION* Partition;
  union
  {
    /* 0x00e0 */ struct _RTL_BALANCED_NODE FileObjectNode;
    struct
    {
      /* 0x00e0 */ struct _RTL_RB_TREE ExtentsTree;
      /* 0x00f0 */ long __PADDING__[4];
    }; /* size: 0x0020 */
  }; /* size: 0x0020 */
} MMPAGING_FILE, *PMMPAGING_FILE; /* size: 0x0100 */


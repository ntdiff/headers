typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

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
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef enum _POOL_TYPE
{
  NonPagedPool = 0,
  NonPagedPoolExecute = 0,
  PagedPool = 1,
  NonPagedPoolMustSucceed = 2,
  DontUseThisType = 3,
  NonPagedPoolCacheAligned = 4,
  PagedPoolCacheAligned = 5,
  NonPagedPoolCacheAlignedMustS = 6,
  MaxPoolType = 7,
  NonPagedPoolBase = 0,
  NonPagedPoolBaseMustSucceed = 2,
  NonPagedPoolBaseCacheAligned = 4,
  NonPagedPoolBaseCacheAlignedMustS = 6,
  NonPagedPoolSession = 32,
  PagedPoolSession = 33,
  NonPagedPoolMustSucceedSession = 34,
  DontUseThisTypeSession = 35,
  NonPagedPoolCacheAlignedSession = 36,
  PagedPoolCacheAlignedSession = 37,
  NonPagedPoolCacheAlignedMustSSession = 38,
  NonPagedPoolNx = 512,
  NonPagedPoolNxCacheAligned = 516,
  NonPagedPoolSessionNx = 544,
} POOL_TYPE, *PPOOL_TYPE;

typedef struct _GENERAL_LOOKASIDE_POOL
{
  union
  {
    /* 0x0000 */ union _SLIST_HEADER ListHead;
    /* 0x0000 */ struct _SINGLE_LIST_ENTRY SingleListHead;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  union
  {
    /* 0x0010 */ unsigned long AllocateMisses;
    /* 0x0010 */ unsigned long AllocateHits;
  }; /* size: 0x0004 */
  /* 0x0014 */ unsigned long TotalFrees;
  union
  {
    /* 0x0018 */ unsigned long FreeMisses;
    /* 0x0018 */ unsigned long FreeHits;
  }; /* size: 0x0004 */
  /* 0x001c */ enum _POOL_TYPE Type;
  /* 0x0020 */ unsigned long Tag;
  /* 0x0024 */ unsigned long Size;
  union
  {
    /* 0x0028 */ void* AllocateEx /* function */;
    /* 0x0028 */ void* Allocate /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x002c */ void* FreeEx /* function */;
    /* 0x002c */ void* Free /* function */;
  }; /* size: 0x0004 */
  /* 0x0030 */ struct _LIST_ENTRY ListEntry;
  /* 0x0038 */ unsigned long LastTotalAllocates;
  union
  {
    /* 0x003c */ unsigned long LastAllocateMisses;
    /* 0x003c */ unsigned long LastAllocateHits;
  }; /* size: 0x0004 */
  /* 0x0040 */ unsigned long Future[2];
} GENERAL_LOOKASIDE_POOL, *PGENERAL_LOOKASIDE_POOL; /* size: 0x0048 */

typedef struct _LOOKASIDE_LIST_EX
{
  /* 0x0000 */ struct _GENERAL_LOOKASIDE_POOL L;
} LOOKASIDE_LIST_EX, *PLOOKASIDE_LIST_EX; /* size: 0x0048 */

typedef struct _NDIS_NPAGED_LOOKASIDE_LIST
{
  /* 0x0000 */ struct _LOOKASIDE_LIST_EX List;
  /* 0x0080 */ union _SLIST_HEADER BackupList;
  /* 0x00c0 */ union _SLIST_HEADER* AllocListPtr;
  /* 0x00c4 */ union _SLIST_HEADER* FreeListPtr;
  /* 0x00c8 */ unsigned long ListSwapLock;
  /* 0x00cc */ unsigned char Initialized;
  /* 0x00cd */ char __PADDING__[51];
} NDIS_NPAGED_LOOKASIDE_LIST, *PNDIS_NPAGED_LOOKASIDE_LIST; /* size: 0x0100 */

typedef struct _NDIS_NET_BUFFER_LIST_POOL
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long ListLock;
  /* 0x0008 */ struct _LIST_ENTRY AllocatedList;
  /* 0x0010 */ unsigned short ItemLength;
  /* 0x0012 */ unsigned short ContextSize;
  /* 0x0014 */ void* OwnerHandle;
  /* 0x0018 */ void* Allocator;
  /* 0x001c */ unsigned long Tag;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ unsigned long Lock;
  /* 0x0028 */ struct _LIST_ENTRY GlobalNetBufferListPoolList;
  /* 0x0030 */ unsigned char ProtocolId;
  /* 0x0034 */ unsigned long DataSize;
  /* 0x0038 */ unsigned long MdlSize;
  /* 0x0040 */ struct _NDIS_NPAGED_LOOKASIDE_LIST NetBufferListPoolList[1];
} NDIS_NET_BUFFER_LIST_POOL, *PNDIS_NET_BUFFER_LIST_POOL; /* size: 0x0140 */


typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

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

typedef struct _NDIS_SG_DMA_BLOCK
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ void* MiniportAdapterContext;
  /* 0x000c */ struct _DMA_ADAPTER* DmaAdapterObject;
  /* 0x0010 */ void* ProcessSGListHandler /* function */;
  /* 0x0014 */ void* SharedMemAllocateCompleteHandler /* function */;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned long MaximumPhysicalMapping;
  /* 0x0020 */ unsigned long ScatterGatherListSize;
  /* 0x0024 */ struct _NPAGED_LOOKASIDE_LIST* SGListLookasideList;
  /* 0x0028 */ long DmaAdapterRefCount;
  /* 0x002c */ struct _KEVENT* DmaResourcesReleasedEvent;
  /* 0x0030 */ void* SharedMemoryPage[2];
  /* 0x0038 */ unsigned long SharedMemoryLeft[2];
  /* 0x0040 */ union _LARGE_INTEGER SharedMemoryAddress[2];
  /* 0x0050 */ struct _DMA_ADAPTER* SavedDmaAdapterObject;
  /* 0x0054 */ struct _MAP_REGISTER_ENTRY* MapRegisters;
  /* 0x0058 */ struct _KEVENT* AllocationEvent;
  /* 0x005c */ unsigned short CurrentMapRegister;
  /* 0x005e */ unsigned short BaseMapRegistersNeeded;
  /* 0x0060 */ unsigned short SGMapRegistersNeeded;
  /* 0x0062 */ char __PADDING__[6];
} NDIS_SG_DMA_BLOCK, *PNDIS_SG_DMA_BLOCK; /* size: 0x0068 */


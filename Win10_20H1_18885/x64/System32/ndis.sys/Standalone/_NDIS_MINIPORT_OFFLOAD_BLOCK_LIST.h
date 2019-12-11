typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST* NextBlock;
  /* 0x0010 */ struct _NDIS_MINIPORT_OFFLOAD_BLOCK_LIST* DependentBlockList;
  /* 0x0018 */ int Status;
  /* 0x0020 */ void* NdisReserved[2];
  /* 0x0030 */ void** MiniportOffloadContext;
  /* 0x0038 */ void* NdisOffloadHandle;
  /* 0x0040 */ void* ProtocolReserved[2];
  /* 0x0050 */ void* MiniportReserved[2];
  /* 0x0060 */ void* ImReserved[2];
  /* 0x0070 */ void* Scratch[2];
  /* 0x0080 */ void* SourceHandle;
  /* 0x0088 */ unsigned long PortNumber;
  /* 0x0090 */ struct _NET_BUFFER_LIST* NetBufferListChain;
} NDIS_MINIPORT_OFFLOAD_BLOCK_LIST, *PNDIS_MINIPORT_OFFLOAD_BLOCK_LIST; /* size: 0x0098 */


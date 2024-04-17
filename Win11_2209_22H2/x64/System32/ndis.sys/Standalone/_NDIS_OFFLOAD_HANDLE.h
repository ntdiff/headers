typedef struct _NDIS_OFFLOAD_HANDLE
{
  /* 0x0000 */ void* NdisReserved[1];
  /* 0x0008 */ void* MiniportOffloadContext;
} NDIS_OFFLOAD_HANDLE, *PNDIS_OFFLOAD_HANDLE; /* size: 0x0010 */


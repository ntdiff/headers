typedef struct _NDIS_OFFLOAD_HANDLE
{
  /* 0x0000 */ void* NdisReserved[1];
  /* 0x0008 */ void* MiniportOffloadContext;
} NDIS_OFFLOAD_HANDLE, *PNDIS_OFFLOAD_HANDLE; /* size: 0x0010 */

typedef struct _NDIS_OFFLOAD_HANDLE_PRIVATE
{
  /* 0x0000 */ struct _NDIS_OFFLOAD_HANDLE Handle;
  /* 0x0010 */ void* ProtocolBindingContext;
} NDIS_OFFLOAD_HANDLE_PRIVATE, *PNDIS_OFFLOAD_HANDLE_PRIVATE; /* size: 0x0018 */


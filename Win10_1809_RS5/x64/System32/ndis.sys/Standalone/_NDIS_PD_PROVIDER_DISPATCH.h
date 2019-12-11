typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_PD_PROVIDER_DISPATCH
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ void* NdisPDAllocateQueue /* function */;
  /* 0x0010 */ void* NdisPDFreeQueue /* function */;
  /* 0x0018 */ void* NdisPDAcquireReceiveQueues /* function */;
  /* 0x0020 */ void* NdisPDReleaseReceiveQueues /* function */;
  /* 0x0028 */ void* NdisPDAllocateCounter /* function */;
  /* 0x0030 */ void* NdisPDFreeCounter /* function */;
  /* 0x0038 */ void* NdisPDQueryCounter /* function */;
  /* 0x0040 */ void* NdisPDSetReceiveFilter /* function */;
  /* 0x0048 */ void* NdisPDClearReceiveFilter /* function */;
  /* 0x0050 */ void* NdisPDRequestDrainNotification /* function */;
  /* 0x0058 */ void* NdisPDQueueControl /* function */;
  /* 0x0060 */ void* NdisPDProviderControl /* function */;
} NDIS_PD_PROVIDER_DISPATCH, *PNDIS_PD_PROVIDER_DISPATCH; /* size: 0x0068 */


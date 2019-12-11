typedef enum _VF_DISPATCH_TABLE_TYPE
{
  DispatchTableTypeWdm = 0,
  DispatchTableTypeWdf = 1,
  DispatchTableTypeNdis = 2,
  DispatchTableTypeXdv = 3,
  MaximumDispatchTableType = 4,
} VF_DISPATCH_TABLE_TYPE, *PVF_DISPATCH_TABLE_TYPE;

typedef struct _VF_DISPATCH_TABLE_HEADER
{
  /* 0x0000 */ enum _VF_DISPATCH_TABLE_TYPE Type;
  /* 0x0004 */ unsigned long Size;
} VF_DISPATCH_TABLE_HEADER, *PVF_DISPATCH_TABLE_HEADER; /* size: 0x0008 */

typedef struct _VF_NDIS_DISPATCH_TABLE
{
  /* 0x0000 */ struct _VF_DISPATCH_TABLE_HEADER Header;
  /* 0x0008 */ void* NdisAllocateVerifierContext /* function */;
  /* 0x000c */ void* NdisFreeVerifierContext /* function */;
  /* 0x0010 */ void* NdisMiniportOidRequestHandler /* function */;
  /* 0x0014 */ void* NdisMOidRequestComplete /* function */;
  /* 0x0018 */ void* NdisMIndicateStatusEx /* function */;
  /* 0x001c */ void* NdisMiniportDevicePnPEventNotifyHandler /* function */;
  /* 0x0020 */ void* NdisMiniportHaltExHandler /* function */;
  /* 0x0024 */ void* NdisMiniportSendNetBufferListsHandler /* function */;
  /* 0x0028 */ void* NdisMSendNetBufferListsComplete /* function */;
  /* 0x002c */ void* NdisFilterSendNetBufferListsHandler /* function */;
  /* 0x0030 */ void* NdisFSendNetBufferListsComplete /* function */;
  /* 0x0034 */ void* NdisFSendNetBufferLists /* function */;
  /* 0x0038 */ void* NdisFilterSendNetBufferListsCompleteHandler /* function */;
  /* 0x003c */ void* NdisFilterReceiveNetBufferListsHandler /* function */;
  /* 0x0040 */ void* NdisFReturnNetBufferLists /* function */;
  /* 0x0044 */ void* NdisFIndicateReceiveNetBufferLists /* function */;
  /* 0x0048 */ void* NdisFilterReturnNetBufferListsHandler /* function */;
  /* 0x004c */ void* NdisFilterPauseHandler /* function */;
  /* 0x0050 */ void* NdisFPauseComplete /* function */;
} VF_NDIS_DISPATCH_TABLE, *PVF_NDIS_DISPATCH_TABLE; /* size: 0x0054 */


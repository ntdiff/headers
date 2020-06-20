typedef enum _NDIS_PORT_PNP_STATE
{
  NdisPortPnPStateAllocating = 1,
  NdisPortPnPStateAllocated = 2,
  NdisPortPnPStateActivating = 3,
  NdisPortPnPStateActivated = 4,
  NdisPortPnPStateDeactivating = 5,
  NdisPortPnPStateDeactivated = 6,
  NdisPortPnPStateDeallocating = 7,
  NdisPortPnPStateDeallocated = 8,
} NDIS_PORT_PNP_STATE, *PNDIS_PORT_PNP_STATE;


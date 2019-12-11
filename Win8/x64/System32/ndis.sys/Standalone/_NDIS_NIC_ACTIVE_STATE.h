typedef enum _NDIS_NIC_ACTIVE_STATE
{
  NdisNicActive = 0,
  NdisNicSuspending = 1,
  NdisNicQuiet = 2,
  NdisNicResuming = 3,
  NdisNicError = 4,
} NDIS_NIC_ACTIVE_STATE, *PNDIS_NIC_ACTIVE_STATE;


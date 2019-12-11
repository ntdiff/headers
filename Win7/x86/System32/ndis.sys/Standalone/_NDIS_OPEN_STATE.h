typedef enum _NDIS_OPEN_STATE
{
  NdisOpenStateRunning = 0,
  NdisOpenStatePausing = 1,
  NdisOpenStatePaused = 2,
  NdisOpenStateRestarting = 3,
} NDIS_OPEN_STATE, *PNDIS_OPEN_STATE;


typedef enum _NDIS_NBL_TRACKER_SOURCE
{
  NdisNblTrackerMiniport = 0,
  NdisNblTrackerFilter = 1,
  NdisNblTrackerProtocol = 2,
  NdisNblTrackerNdisNPOSRReturn = 3,
  NdisNblTrackerNdisSSSend = 4,
  NdisNblTrackerNdisSSRReturn = 5,
  NdisNblTrackerFirstCustomContext = 256,
} NDIS_NBL_TRACKER_SOURCE, *PNDIS_NBL_TRACKER_SOURCE;


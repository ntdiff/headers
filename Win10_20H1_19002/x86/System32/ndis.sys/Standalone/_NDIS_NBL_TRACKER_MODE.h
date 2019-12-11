typedef enum _NDIS_NBL_TRACKER_MODE
{
  NdisTrackNblDisabled = 0,
  NdisTrackNblLogOnly = 1,
  NdisTrackNblRuntimeCheck = 2,
  NdisTrackNblFullLogNoStack = 3,
  NdisTrackNblFullLogWithStack = 4,
} NDIS_NBL_TRACKER_MODE, *PNDIS_NBL_TRACKER_MODE;


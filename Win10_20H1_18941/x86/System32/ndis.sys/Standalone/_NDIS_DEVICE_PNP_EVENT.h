typedef enum _NDIS_DEVICE_PNP_EVENT
{
  NdisDevicePnPEventQueryRemoved = 0,
  NdisDevicePnPEventRemoved = 1,
  NdisDevicePnPEventSurpriseRemoved = 2,
  NdisDevicePnPEventQueryStopped = 3,
  NdisDevicePnPEventStopped = 4,
  NdisDevicePnPEventPowerProfileChanged = 5,
  NdisDevicePnPEventFilterListChanged = 6,
  NdisDevicePnPEventMaximum = 7,
} NDIS_DEVICE_PNP_EVENT, *PNDIS_DEVICE_PNP_EVENT;


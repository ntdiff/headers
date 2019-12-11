typedef enum _NDIS_HALT_ACTION
{
  NdisHaltDeviceDisabled = 0,
  NdisHaltDeviceInstanceDeInitialized = 1,
  NdisHaltDevicePoweredDown = 2,
  NdisHaltDeviceSurpriseRemoved = 3,
  NdisHaltDeviceFailed = 4,
  NdisHaltDeviceInitializationFailed = 5,
  NdisHaltDeviceStopped = 6,
} NDIS_HALT_ACTION, *PNDIS_HALT_ACTION;


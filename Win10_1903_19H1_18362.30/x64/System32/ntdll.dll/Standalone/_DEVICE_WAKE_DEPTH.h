typedef enum _DEVICE_WAKE_DEPTH
{
  DeviceWakeDepthNotWakeable = 0,
  DeviceWakeDepthD0 = 1,
  DeviceWakeDepthD1 = 2,
  DeviceWakeDepthD2 = 3,
  DeviceWakeDepthD3hot = 4,
  DeviceWakeDepthD3cold = 5,
  DeviceWakeDepthMaximum = 6,
} DEVICE_WAKE_DEPTH, *PDEVICE_WAKE_DEPTH;


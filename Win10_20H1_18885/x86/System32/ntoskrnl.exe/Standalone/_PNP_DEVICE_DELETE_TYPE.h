typedef enum _PNP_DEVICE_DELETE_TYPE
{
  QueryRemoveDevice = 0,
  CancelRemoveDevice = 1,
  RemoveDevice = 2,
  SurpriseRemoveDevice = 3,
  EjectDevice = 4,
  RemoveFailedDevice = 5,
  RemoveUnstartedFailedDevice = 6,
  MaxDeviceDeleteType = 7,
} PNP_DEVICE_DELETE_TYPE, *PPNP_DEVICE_DELETE_TYPE;


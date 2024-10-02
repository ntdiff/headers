typedef enum _POP_FX_DEVICE_REFERENCE_TAG
{
  PopFxDeviceReferenceTagIrp = 0,
  PopFxDeviceReferenceTagDriverCallback = 1,
  PopFxDeviceReferenceTagVetoMaskUpdate = 2,
  PopFxDeviceReferenceTagWatchdogList = 3,
  PopFxDeviceReferenceTagWorkQueueItem = 4,
  PopFxDeviceReferenceTagDfx = 5,
  PopFxDeviceReferenceTagRelation = 6,
  PopFxDeviceReferenceTagDeviceActivation = 7,
  PopFxDeviceReferenceTagComponentActivation = 8,
  PopFxDeviceReferenceTagUnregister = 9,
  PopFxDeviceReferenceTagMax = 10,
} POP_FX_DEVICE_REFERENCE_TAG, *PPOP_FX_DEVICE_REFERENCE_TAG;


typedef enum _MI_DYNAMICBASE_BITMAP
{
  DynamicBaseBitMapNative = 0,
  DynamicBaseBitMap64Low = 1,
  DynamicBaseBitMap64LowWow = 2,
  DynamicBaseBitMap32WowFirst = 3,
  DynamicBaseBitMap32WowLast = 3,
  DynamicBaseBitMapInvalid = 4,
  DynamicBaseBitMapMax = 4,
} MI_DYNAMICBASE_BITMAP, *PMI_DYNAMICBASE_BITMAP;


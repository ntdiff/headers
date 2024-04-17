typedef struct _DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned __int64 SlabSizeInBytes;
  /* 0x0010 */ unsigned __int64 SlabOffsetDeltaInBytes;
  /* 0x0018 */ unsigned long SlabAllocationBitMapBitCount;
  /* 0x001c */ unsigned long SlabAllocationBitMapLength;
  /* 0x0020 */ unsigned long SlabAllocationBitMap[1];
  /* 0x0024 */ long __PADDING__[1];
} DEVICE_DATA_SET_LB_PROVISIONING_STATE_V2, *PDEVICE_DATA_SET_LB_PROVISIONING_STATE_V2; /* size: 0x0028 */


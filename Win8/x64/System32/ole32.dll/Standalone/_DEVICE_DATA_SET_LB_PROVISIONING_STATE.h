typedef struct _DEVICE_DATA_SET_LB_PROVISIONING_STATE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned __int64 SlabSizeInBytes;
  /* 0x0010 */ unsigned long SlabOffsetDeltaInBytes;
  /* 0x0014 */ unsigned long SlabAllocationBitMapBitCount;
  /* 0x0018 */ unsigned long SlabAllocationBitMapLength;
  /* 0x001c */ unsigned long SlabAllocationBitMap[1];
} DEVICE_DATA_SET_LB_PROVISIONING_STATE, *PDEVICE_DATA_SET_LB_PROVISIONING_STATE; /* size: 0x0020 */


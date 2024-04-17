typedef struct _DEVICE_DATA_SET_RANGE
{
  /* 0x0000 */ __int64 StartingOffset;
  /* 0x0008 */ unsigned __int64 LengthInBytes;
} DEVICE_DATA_SET_RANGE, *PDEVICE_DATA_SET_RANGE; /* size: 0x0010 */

typedef struct _DEVICE_DATA_SET_REPAIR_OUTPUT
{
  /* 0x0000 */ struct _DEVICE_DATA_SET_RANGE ParityExtent;
} DEVICE_DATA_SET_REPAIR_OUTPUT, *PDEVICE_DATA_SET_REPAIR_OUTPUT; /* size: 0x0010 */


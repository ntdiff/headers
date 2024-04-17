typedef struct _STORAGE_DEVICE_NUMBER
{
  /* 0x0000 */ unsigned long DeviceType;
  /* 0x0004 */ unsigned long DeviceNumber;
  /* 0x0008 */ unsigned long PartitionNumber;
} STORAGE_DEVICE_NUMBER, *PSTORAGE_DEVICE_NUMBER; /* size: 0x000c */


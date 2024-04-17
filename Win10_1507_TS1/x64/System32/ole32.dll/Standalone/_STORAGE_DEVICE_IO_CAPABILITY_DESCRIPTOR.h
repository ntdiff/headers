typedef struct _STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned long LunMaxIoCount;
  /* 0x000c */ unsigned long AdapterMaxIoCount;
} STORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR, *PSTORAGE_DEVICE_IO_CAPABILITY_DESCRIPTOR; /* size: 0x0010 */


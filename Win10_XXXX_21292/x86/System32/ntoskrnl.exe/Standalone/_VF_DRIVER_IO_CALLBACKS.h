typedef struct _VF_DRIVER_IO_CALLBACKS
{
  /* 0x0000 */ void* DriverInit /* function */;
  /* 0x0004 */ void* DriverStartIo /* function */;
  /* 0x0008 */ void* DriverUnload /* function */;
  /* 0x000c */ void* AddDevice /* function */;
  /* 0x0010 */ void* MajorFunction[28] /* function */;
} VF_DRIVER_IO_CALLBACKS, *PVF_DRIVER_IO_CALLBACKS; /* size: 0x0080 */


typedef struct _KSPIN_DISPATCH
{
  /* 0x0000 */ void* Create /* function */;
  /* 0x0008 */ void* Close /* function */;
  /* 0x0010 */ void* Process /* function */;
  /* 0x0018 */ void* Reset /* function */;
  /* 0x0020 */ void* SetDataFormat /* function */;
  /* 0x0028 */ void* SetDeviceState /* function */;
  /* 0x0030 */ void* Connect /* function */;
  /* 0x0038 */ void* Disconnect /* function */;
  /* 0x0040 */ const struct _KSCLOCK_DISPATCH* Clock;
  /* 0x0048 */ const struct _KSALLOCATOR_DISPATCH* Allocator;
} KSPIN_DISPATCH, *PKSPIN_DISPATCH; /* size: 0x0050 */


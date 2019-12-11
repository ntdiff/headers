typedef struct _KSPIN_DISPATCH
{
  /* 0x0000 */ void* Create /* function */;
  /* 0x0004 */ void* Close /* function */;
  /* 0x0008 */ void* Process /* function */;
  /* 0x000c */ void* Reset /* function */;
  /* 0x0010 */ void* SetDataFormat /* function */;
  /* 0x0014 */ void* SetDeviceState /* function */;
  /* 0x0018 */ void* Connect /* function */;
  /* 0x001c */ void* Disconnect /* function */;
  /* 0x0020 */ const struct _KSCLOCK_DISPATCH* Clock;
  /* 0x0024 */ const struct _KSALLOCATOR_DISPATCH* Allocator;
} KSPIN_DISPATCH, *PKSPIN_DISPATCH; /* size: 0x0028 */


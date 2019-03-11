typedef struct _FAST_IO_DISPATCH
{
  /* 0x0000 */ unsigned long SizeOfFastIoDispatch;
  /* 0x0004 */ void* FastIoCheckIfPossible /* function */;
  /* 0x0008 */ void* FastIoRead /* function */;
  /* 0x000c */ void* FastIoWrite /* function */;
  /* 0x0010 */ void* FastIoQueryBasicInfo /* function */;
  /* 0x0014 */ void* FastIoQueryStandardInfo /* function */;
  /* 0x0018 */ void* FastIoLock /* function */;
  /* 0x001c */ void* FastIoUnlockSingle /* function */;
  /* 0x0020 */ void* FastIoUnlockAll /* function */;
  /* 0x0024 */ void* FastIoUnlockAllByKey /* function */;
  /* 0x0028 */ void* FastIoDeviceControl /* function */;
  /* 0x002c */ void* AcquireFileForNtCreateSection /* function */;
  /* 0x0030 */ void* ReleaseFileForNtCreateSection /* function */;
  /* 0x0034 */ void* FastIoDetachDevice /* function */;
  /* 0x0038 */ void* FastIoQueryNetworkOpenInfo /* function */;
  /* 0x003c */ void* AcquireForModWrite /* function */;
  /* 0x0040 */ void* MdlRead /* function */;
  /* 0x0044 */ void* MdlReadComplete /* function */;
  /* 0x0048 */ void* PrepareMdlWrite /* function */;
  /* 0x004c */ void* MdlWriteComplete /* function */;
  /* 0x0050 */ void* FastIoReadCompressed /* function */;
  /* 0x0054 */ void* FastIoWriteCompressed /* function */;
  /* 0x0058 */ void* MdlReadCompleteCompressed /* function */;
  /* 0x005c */ void* MdlWriteCompleteCompressed /* function */;
  /* 0x0060 */ void* FastIoQueryOpen /* function */;
  /* 0x0064 */ void* ReleaseForModWrite /* function */;
  /* 0x0068 */ void* AcquireForCcFlush /* function */;
  /* 0x006c */ void* ReleaseForCcFlush /* function */;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH; /* size: 0x0070 */


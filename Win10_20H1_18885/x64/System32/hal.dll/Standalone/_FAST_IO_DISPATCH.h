typedef struct _FAST_IO_DISPATCH
{
  /* 0x0000 */ unsigned long SizeOfFastIoDispatch;
  /* 0x0008 */ void* FastIoCheckIfPossible /* function */;
  /* 0x0010 */ void* FastIoRead /* function */;
  /* 0x0018 */ void* FastIoWrite /* function */;
  /* 0x0020 */ void* FastIoQueryBasicInfo /* function */;
  /* 0x0028 */ void* FastIoQueryStandardInfo /* function */;
  /* 0x0030 */ void* FastIoLock /* function */;
  /* 0x0038 */ void* FastIoUnlockSingle /* function */;
  /* 0x0040 */ void* FastIoUnlockAll /* function */;
  /* 0x0048 */ void* FastIoUnlockAllByKey /* function */;
  /* 0x0050 */ void* FastIoDeviceControl /* function */;
  /* 0x0058 */ void* AcquireFileForNtCreateSection /* function */;
  /* 0x0060 */ void* ReleaseFileForNtCreateSection /* function */;
  /* 0x0068 */ void* FastIoDetachDevice /* function */;
  /* 0x0070 */ void* FastIoQueryNetworkOpenInfo /* function */;
  /* 0x0078 */ void* AcquireForModWrite /* function */;
  /* 0x0080 */ void* MdlRead /* function */;
  /* 0x0088 */ void* MdlReadComplete /* function */;
  /* 0x0090 */ void* PrepareMdlWrite /* function */;
  /* 0x0098 */ void* MdlWriteComplete /* function */;
  /* 0x00a0 */ void* FastIoReadCompressed /* function */;
  /* 0x00a8 */ void* FastIoWriteCompressed /* function */;
  /* 0x00b0 */ void* MdlReadCompleteCompressed /* function */;
  /* 0x00b8 */ void* MdlWriteCompleteCompressed /* function */;
  /* 0x00c0 */ void* FastIoQueryOpen /* function */;
  /* 0x00c8 */ void* ReleaseForModWrite /* function */;
  /* 0x00d0 */ void* AcquireForCcFlush /* function */;
  /* 0x00d8 */ void* ReleaseForCcFlush /* function */;
} FAST_IO_DISPATCH, *PFAST_IO_DISPATCH; /* size: 0x00e0 */


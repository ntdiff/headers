typedef struct _PS_NTDLL_EXPORTS
{
  /* 0x0000 */ void* LdrSystemDllInitBlock;
  /* 0x0008 */ void* LdrInitializeThunk;
  /* 0x0010 */ void* RtlUserThreadStart;
  /* 0x0018 */ void* RtlUserFiberStart;
  /* 0x0020 */ void* KiUserExceptionDispatcher;
  /* 0x0028 */ void* KiUserApcDispatcher;
  /* 0x0030 */ void* KiUserCallbackDispatcher;
  /* 0x0038 */ void* KiUserCallbackDispatcherReturn;
  /* 0x0040 */ void* KiRaiseUserExceptionDispatcher;
  /* 0x0048 */ void* ExpInterlockedPopEntrySListEnd;
  /* 0x0050 */ void* ExpInterlockedPopEntrySListFault;
  /* 0x0058 */ void* ExpInterlockedPopEntrySListResume;
  /* 0x0060 */ void* RtlpFreezeTimeBias;
  /* 0x0068 */ void* KiUserInvertedFunctionTable;
  /* 0x0070 */ void* WerReportExceptionWorker;
  /* 0x0078 */ void* RtlCallEnclaveReturn;
  /* 0x0080 */ void* RtlEnclaveCallDispatch;
  /* 0x0088 */ void* RtlEnclaveCallDispatchReturn;
  /* 0x0090 */ void* RtlRaiseExceptionForReturnAddressHijack;
  /* 0x0098 */ void* KiUserEmulationDispatcher;
  /* 0x00a0 */ void* LdrHotPatchNotify;
} PS_NTDLL_EXPORTS, *PPS_NTDLL_EXPORTS; /* size: 0x00a8 */


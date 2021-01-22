typedef struct _PS_NTDLL_EXPORTS
{
  /* 0x0000 */ void* LdrSystemDllInitBlock;
  /* 0x0004 */ void* LdrInitializeThunk;
  /* 0x0008 */ void* RtlUserThreadStart;
  /* 0x000c */ void* RtlUserFiberStart;
  /* 0x0010 */ void* KiUserExceptionDispatcher;
  /* 0x0014 */ void* KiUserApcDispatcher;
  /* 0x0018 */ void* KiUserCallbackDispatcher;
  /* 0x001c */ void* KiUserCallbackDispatcherReturn;
  /* 0x0020 */ void* KiRaiseUserExceptionDispatcher;
  /* 0x0024 */ void* ExpInterlockedPopEntrySListEnd;
  /* 0x0028 */ void* ExpInterlockedPopEntrySListFault;
  /* 0x002c */ void* ExpInterlockedPopEntrySListResume;
  /* 0x0030 */ void* RtlpFreezeTimeBias;
  /* 0x0034 */ void* KiUserInvertedFunctionTable;
  /* 0x0038 */ void* WerReportExceptionWorker;
  /* 0x003c */ void* RtlCallEnclaveReturn;
  /* 0x0040 */ void* RtlEnclaveCallDispatch;
  /* 0x0044 */ void* RtlEnclaveCallDispatchReturn;
  /* 0x0048 */ void* RtlRaiseExceptionForReturnAddressHijack;
  /* 0x004c */ void* KiUserEmulationDispatcher;
  /* 0x0050 */ void* LdrHotPatchNotify;
} PS_NTDLL_EXPORTS, *PPS_NTDLL_EXPORTS; /* size: 0x0054 */


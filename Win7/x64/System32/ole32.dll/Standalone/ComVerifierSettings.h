class ComVerifierSettings
{
  union
  {
    /* 0x0000 */ int s_fComVerifierEnabled;
    /* 0x0000 */ int s_fEnableDllMainChecks;
    /* 0x0000 */ int s_fEnableBreakOnException;
    /* 0x0000 */ int s_fEnableVerifyLocks;
    /* 0x0000 */ int s_fEnableVerifyThreadState;
    /* 0x0000 */ int s_fEnableVerifySecurity;
    /* 0x0000 */ int s_fEnableVerifyProxies;
    /* 0x0000 */ int s_fEnableVerifyClassFactory;
    /* 0x0000 */ int s_fEnableObjectTracking;
    /* 0x0000 */ int s_fEnableVTBLTracking;
    /* 0x0000 */ int s_fUseSlowStackTraces;
    /* 0x0000 */ int s_fPgAllocUseSystemHeap;
    /* 0x0000 */ int s_fPgAllocHeapIsPrivate;
    /* 0x0000 */ int s_fCheckUnrecommendedUsageFromAPC;
    /* 0x0000 */ int s_fVerifyFatalExceptionHandlingDisabled;
    /* 0x0000 */ unsigned long s_ulMaxStackTracesPerThread;
    /* 0x0000 */ unsigned long s_ulMaxStackTracesPerProcess;
    /* 0x0000 */ class ComVerifierSettings s_singleton;
  }; /* size: 0x0004 */
}; /* size: 0x0001 */


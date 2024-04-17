typedef struct _RTL_VERIFIER_HEAP_TABLE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ void* VrfDisableFaultInjection /* function */;
  /* 0x0008 */ void* VrfEnableFaultInjection /* function */;
  /* 0x000c */ void* VrfIsDllTargeted /* function */;
  /* 0x0010 */ void* VrfTargetDllsLoadCallBack /* function */;
  /* 0x0014 */ void* VrfHeapAllocate /* function */;
  /* 0x0018 */ void* VrfHeapReAllocate /* function */;
  /* 0x001c */ void* VrfHeapFree /* function */;
  /* 0x0020 */ void* VrfHeapCreate /* function */;
  /* 0x0024 */ void* VrfHeapDestroy /* function */;
  /* 0x0028 */ void* VrfHeapExtend /* function */;
  /* 0x002c */ void* VrfGetProcessHeaps /* function */;
  /* 0x0030 */ void* VrfHeapWalk /* function */;
  /* 0x0034 */ void* VrfHeapLock /* function */;
  /* 0x0038 */ void* VrfHeapUnlock /* function */;
  /* 0x003c */ void* VrfHeapIsLocked /* function */;
  /* 0x0040 */ void* VrfHeapValidate /* function */;
  /* 0x0044 */ void* VrfHeapSetUserValue /* function */;
  /* 0x0048 */ void* VrfHeapGetUserInfo /* function */;
  /* 0x004c */ void* VrfHeapSetUserFlags /* function */;
  /* 0x0050 */ void* VrfHeapSerialize /* function */;
  /* 0x0054 */ void* VrfHeapSize /* function */;
  /* 0x0058 */ void* VrfHeapCompact /* function */;
  /* 0x005c */ void* VrfHeapZero /* function */;
  /* 0x0060 */ void* VrfQueryVerifierOptions /* function */;
  /* 0x0064 */ void* VrfSetVerifierOptions /* function */;
} RTL_VERIFIER_HEAP_TABLE, *PRTL_VERIFIER_HEAP_TABLE; /* size: 0x0068 */


typedef struct _RTL_VERIFIER_HEAP_TABLE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ void* VrfHeapAllocate /* function */;
  /* 0x0008 */ void* VrfHeapReAllocate /* function */;
  /* 0x000c */ void* VrfHeapFree /* function */;
  /* 0x0010 */ void* VrfHeapCreate /* function */;
  /* 0x0014 */ void* VrfHeapDestroy /* function */;
  /* 0x0018 */ void* VrfHeapExtend /* function */;
  /* 0x001c */ void* VrfGetProcessHeaps /* function */;
  /* 0x0020 */ void* VrfHeapWalk /* function */;
  /* 0x0024 */ void* VrfHeapLock /* function */;
  /* 0x0028 */ void* VrfHeapUnlock /* function */;
  /* 0x002c */ void* VrfHeapIsLocked /* function */;
  /* 0x0030 */ void* VrfHeapValidate /* function */;
  /* 0x0034 */ void* VrfHeapSetUserValue /* function */;
  /* 0x0038 */ void* VrfHeapGetUserInfo /* function */;
  /* 0x003c */ void* VrfHeapSetUserFlags /* function */;
  /* 0x0040 */ void* VrfHeapSerialize /* function */;
  /* 0x0044 */ void* VrfHeapSize /* function */;
  /* 0x0048 */ void* VrfHeapCompact /* function */;
  /* 0x004c */ void* VrfHeapZero /* function */;
  /* 0x0050 */ void* VrfQueryVerifierOptions /* function */;
  /* 0x0054 */ void* VrfSetVerifierOptions /* function */;
} RTL_VERIFIER_HEAP_TABLE, *PRTL_VERIFIER_HEAP_TABLE; /* size: 0x0058 */


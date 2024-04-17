typedef struct _RTL_VERIFIER_HEAP_TABLE
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0008 */ void* VrfHeapAllocate /* function */;
  /* 0x0010 */ void* VrfHeapReAllocate /* function */;
  /* 0x0018 */ void* VrfHeapFree /* function */;
  /* 0x0020 */ void* VrfHeapCreate /* function */;
  /* 0x0028 */ void* VrfHeapDestroy /* function */;
  /* 0x0030 */ void* VrfHeapExtend /* function */;
  /* 0x0038 */ void* VrfGetProcessHeaps /* function */;
  /* 0x0040 */ void* VrfHeapWalk /* function */;
  /* 0x0048 */ void* VrfHeapLock /* function */;
  /* 0x0050 */ void* VrfHeapUnlock /* function */;
  /* 0x0058 */ void* VrfHeapIsLocked /* function */;
  /* 0x0060 */ void* VrfHeapValidate /* function */;
  /* 0x0068 */ void* VrfHeapSetUserValue /* function */;
  /* 0x0070 */ void* VrfHeapGetUserInfo /* function */;
  /* 0x0078 */ void* VrfHeapSetUserFlags /* function */;
  /* 0x0080 */ void* VrfHeapSerialize /* function */;
  /* 0x0088 */ void* VrfHeapSize /* function */;
  /* 0x0090 */ void* VrfHeapCompact /* function */;
  /* 0x0098 */ void* VrfHeapZero /* function */;
  /* 0x00a0 */ void* VrfQueryVerifierOptions /* function */;
  /* 0x00a8 */ void* VrfSetVerifierOptions /* function */;
} RTL_VERIFIER_HEAP_TABLE, *PRTL_VERIFIER_HEAP_TABLE; /* size: 0x00b0 */


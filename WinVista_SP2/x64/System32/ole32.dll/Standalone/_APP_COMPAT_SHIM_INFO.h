typedef struct _APP_COMPAT_SHIM_INFO
{
  /* 0x0000 */ void* pHookAPIList;
  /* 0x0008 */ void* pHookPatchList;
  /* 0x0010 */ void* ppHookAPI;
  /* 0x0018 */ unsigned long dwHookAPICount;
  /* 0x0020 */ void* pExeFilter;
  /* 0x0028 */ void* pGlobalFilterList;
  /* 0x0030 */ void* pLBFilterList;
  /* 0x0038 */ void* pCritSec;
  /* 0x0040 */ void* pShimHeap;
} APP_COMPAT_SHIM_INFO, *PAPP_COMPAT_SHIM_INFO; /* size: 0x0048 */


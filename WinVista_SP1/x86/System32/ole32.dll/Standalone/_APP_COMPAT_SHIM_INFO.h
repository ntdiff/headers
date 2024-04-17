typedef struct _APP_COMPAT_SHIM_INFO
{
  /* 0x0000 */ void* pHookAPIList;
  /* 0x0004 */ void* pHookPatchList;
  /* 0x0008 */ void* ppHookAPI;
  /* 0x000c */ unsigned long dwHookAPICount;
  /* 0x0010 */ void* pExeFilter;
  /* 0x0014 */ void* pGlobalFilterList;
  /* 0x0018 */ void* pLBFilterList;
  /* 0x001c */ void* pCritSec;
  /* 0x0020 */ void* pShimHeap;
} APP_COMPAT_SHIM_INFO, *PAPP_COMPAT_SHIM_INFO; /* size: 0x0024 */


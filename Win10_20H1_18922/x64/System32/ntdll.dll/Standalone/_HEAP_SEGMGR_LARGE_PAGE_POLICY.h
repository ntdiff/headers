typedef enum _HEAP_SEGMGR_LARGE_PAGE_POLICY
{
  HeapSegMgrNoLargePages = 0,
  HeapSegMgrEnableLargePages = 1,
  HeapSegMgrNormalPolicy = 1,
  HeapSegMgrForceSmall = 2,
  HeapSegMgrForceLarge = 3,
  HeapSegMgrForceRandom = 4,
  HeapSegMgrLargePagePolicyMax = 5,
} HEAP_SEGMGR_LARGE_PAGE_POLICY, *PHEAP_SEGMGR_LARGE_PAGE_POLICY;


typedef struct _CrtMemState
{
  /* 0x0000 */ struct _CrtMemBlockHeader* pBlockHeader;
  /* 0x0008 */ unsigned __int64 lCounts[5];
  /* 0x0030 */ unsigned __int64 lSizes[5];
  /* 0x0058 */ unsigned __int64 lHighWaterCount;
  /* 0x0060 */ unsigned __int64 lTotalCount;
} CrtMemState, *PCrtMemState; /* size: 0x0068 */


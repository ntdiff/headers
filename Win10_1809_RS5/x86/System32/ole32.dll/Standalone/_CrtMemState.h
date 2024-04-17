typedef struct _CrtMemState
{
  /* 0x0000 */ struct _CrtMemBlockHeader* pBlockHeader;
  /* 0x0004 */ unsigned int lCounts[5];
  /* 0x0018 */ unsigned int lSizes[5];
  /* 0x002c */ unsigned int lHighWaterCount;
  /* 0x0030 */ unsigned int lTotalCount;
} CrtMemState, *PCrtMemState; /* size: 0x0034 */


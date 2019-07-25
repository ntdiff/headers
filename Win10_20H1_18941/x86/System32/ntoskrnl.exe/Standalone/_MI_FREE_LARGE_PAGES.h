typedef struct _MI_FREE_LARGE_PAGES
{
  /* 0x0000 */ unsigned long LargePageFreeCount[2];
  /* 0x0008 */ unsigned long LargePageFreeCountHiLow[2][2];
  /* 0x0018 */ unsigned long LargePagesCount[1][2][2];
  /* 0x0028 */ struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[1][2][2];
} MI_FREE_LARGE_PAGES, *PMI_FREE_LARGE_PAGES; /* size: 0x0038 */


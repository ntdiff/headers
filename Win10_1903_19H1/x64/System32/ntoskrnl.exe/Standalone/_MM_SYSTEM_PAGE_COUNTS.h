typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ unsigned long SystemCodePage;
  /* 0x0004 */ unsigned long SystemDriverPage;
  /* 0x0008 */ long TotalSystemCodePages;
  /* 0x000c */ long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */


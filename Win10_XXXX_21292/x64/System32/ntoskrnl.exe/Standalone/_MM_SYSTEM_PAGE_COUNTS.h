typedef struct _MM_SYSTEM_PAGE_COUNTS
{
  /* 0x0000 */ volatile unsigned long SystemCodePage;
  /* 0x0004 */ volatile unsigned long SystemDriverPage;
  /* 0x0008 */ volatile long TotalSystemCodePages;
  /* 0x000c */ volatile long TotalSystemDriverPages;
} MM_SYSTEM_PAGE_COUNTS, *PMM_SYSTEM_PAGE_COUNTS; /* size: 0x0010 */


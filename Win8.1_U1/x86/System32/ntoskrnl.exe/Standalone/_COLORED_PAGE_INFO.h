typedef struct _COLORED_PAGE_INFO
{
  /* 0x0000 */ volatile long BeingZeroed;
  /* 0x0004 */ unsigned long Processor;
  /* 0x0008 */ unsigned long PagesQueued;
  /* 0x000c */ struct _MMPFN* PfnAllocation;
} COLORED_PAGE_INFO, *PCOLORED_PAGE_INFO; /* size: 0x0010 */


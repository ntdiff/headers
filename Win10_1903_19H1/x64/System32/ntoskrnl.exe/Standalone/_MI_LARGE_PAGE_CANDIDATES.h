typedef struct _MI_LARGE_PAGE_CANDIDATES
{
  /* 0x0000 */ unsigned short Hand;
  /* 0x0002 */ unsigned short ActiveEntryCount;
  /* 0x0004 */ unsigned char Overflowed;
  /* 0x0008 */ unsigned __int64 PageFrames[64];
} MI_LARGE_PAGE_CANDIDATES, *PMI_LARGE_PAGE_CANDIDATES; /* size: 0x0208 */


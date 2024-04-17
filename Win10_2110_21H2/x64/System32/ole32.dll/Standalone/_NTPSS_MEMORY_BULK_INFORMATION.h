typedef struct _NTPSS_MEMORY_BULK_INFORMATION
{
  /* 0x0000 */ unsigned long QueryFlags;
  /* 0x0004 */ unsigned long NumberOfEntries;
  /* 0x0008 */ void* NextValidAddress;
} NTPSS_MEMORY_BULK_INFORMATION, *PNTPSS_MEMORY_BULK_INFORMATION; /* size: 0x0010 */


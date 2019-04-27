typedef struct _DIRTY_PAGE_STATISTICS
{
  /* 0x0000 */ unsigned __int64 DirtyPages;
  /* 0x0008 */ unsigned __int64 DirtyPagesLastScan;
  /* 0x0010 */ unsigned long DirtyPagesScheduledLastScan;
  /* 0x0014 */ long __PADDING__[1];
} DIRTY_PAGE_STATISTICS, *PDIRTY_PAGE_STATISTICS; /* size: 0x0018 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CC_EXTERNAL_CACHE_INFO
{
  /* 0x0000 */ void* Callback /* function */;
  /* 0x0008 */ struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;
  /* 0x0020 */ struct _LIST_ENTRY Links;
} CC_EXTERNAL_CACHE_INFO, *PCC_EXTERNAL_CACHE_INFO; /* size: 0x0030 */


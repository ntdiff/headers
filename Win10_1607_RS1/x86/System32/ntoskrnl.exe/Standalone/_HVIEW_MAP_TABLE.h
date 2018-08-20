typedef struct _HVIEW_MAP_ENTRY
{
  union
  {
    /* 0x0000 */ void* ViewStart;
    /* 0x0000 */ unsigned long IsPinned : 1; /* bit position: 0 */
  }; /* size: 0x0004 */
  /* 0x0004 */ void* Bcb;
  /* 0x0008 */ unsigned __int64 PinnedPages;
  /* 0x0010 */ unsigned long Size;
  /* 0x0014 */ long __PADDING__[1];
} HVIEW_MAP_ENTRY, *PHVIEW_MAP_ENTRY; /* size: 0x0018 */

typedef struct _HVIEW_MAP_TABLE
{
  /* 0x0000 */ struct _HVIEW_MAP_ENTRY Entries[64];
} HVIEW_MAP_TABLE, *PHVIEW_MAP_TABLE; /* size: 0x0600 */


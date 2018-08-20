typedef struct _HVIEW_MAP_ENTRY
{
  union
  {
    /* 0x0000 */ void* ViewStart;
    /* 0x0000 */ unsigned __int64 IsPinned : 1; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0008 */ void* Bcb;
  /* 0x0010 */ unsigned __int64 PinnedPages;
  /* 0x0018 */ unsigned long Size;
  /* 0x001c */ long __PADDING__[1];
} HVIEW_MAP_ENTRY, *PHVIEW_MAP_ENTRY; /* size: 0x0020 */

typedef struct _HVIEW_MAP_TABLE
{
  /* 0x0000 */ struct _HVIEW_MAP_ENTRY Entries[64];
} HVIEW_MAP_TABLE, *PHVIEW_MAP_TABLE; /* size: 0x0800 */


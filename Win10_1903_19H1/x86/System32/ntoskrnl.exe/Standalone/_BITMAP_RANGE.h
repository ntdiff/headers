typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _BITMAP_RANGE
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0008 */ __int64 BasePage;
  /* 0x0010 */ unsigned long FirstDirtyPage;
  /* 0x0014 */ unsigned long LastDirtyPage;
  /* 0x0018 */ unsigned long DirtyPages;
  /* 0x001c */ unsigned long* Bitmap;
} BITMAP_RANGE, *PBITMAP_RANGE; /* size: 0x0020 */


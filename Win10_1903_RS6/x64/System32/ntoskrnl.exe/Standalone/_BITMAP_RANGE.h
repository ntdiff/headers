typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _BITMAP_RANGE
{
  /* 0x0000 */ struct _LIST_ENTRY Links;
  /* 0x0010 */ __int64 BasePage;
  /* 0x0018 */ unsigned long FirstDirtyPage;
  /* 0x001c */ unsigned long LastDirtyPage;
  /* 0x0020 */ unsigned long DirtyPages;
  /* 0x0028 */ unsigned long* Bitmap;
} BITMAP_RANGE, *PBITMAP_RANGE; /* size: 0x0030 */


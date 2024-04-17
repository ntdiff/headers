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

typedef struct _MBCB
{
  /* 0x0000 */ short NodeTypeCode;
  /* 0x0002 */ short NodeIsInZone;
  /* 0x0004 */ unsigned long PagesToWrite;
  /* 0x0008 */ unsigned long DirtyPages;
  /* 0x000c */ unsigned long Reserved;
  /* 0x0010 */ struct _LIST_ENTRY BitmapRanges;
  /* 0x0018 */ __int64 ResumeWritePage;
  /* 0x0020 */ __int64 MostRecentlyDirtiedPage;
  /* 0x0028 */ struct _BITMAP_RANGE BitmapRange1;
  /* 0x0048 */ struct _BITMAP_RANGE BitmapRange2;
  /* 0x0068 */ struct _BITMAP_RANGE BitmapRange3;
} MBCB, *PMBCB; /* size: 0x0088 */


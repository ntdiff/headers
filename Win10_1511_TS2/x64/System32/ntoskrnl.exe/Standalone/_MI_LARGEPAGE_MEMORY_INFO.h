typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_LARGEPAGE_MEMORY_INFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ struct _COLORED_PAGE_INFO* ColoredPageInfoBase;
  /* 0x0018 */ unsigned long PagesNeedZeroing;
  /* 0x001c */ unsigned char LargeImageBias;
  /* 0x001d */ unsigned char Spare[3];
  /* 0x0020 */ unsigned __int64 ActualImageViewSize;
} MI_LARGEPAGE_MEMORY_INFO, *PMI_LARGEPAGE_MEMORY_INFO; /* size: 0x0028 */


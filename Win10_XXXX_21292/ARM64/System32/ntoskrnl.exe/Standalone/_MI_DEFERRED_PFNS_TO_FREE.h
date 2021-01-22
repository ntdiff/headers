typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _MI_DEFERRED_PFNS_TO_FREE
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0010 */ unsigned __int64 NumberOfPages;
  /* 0x0018 */ unsigned long TbFlushStamp;
  /* 0x001c */ long __PADDING__[1];
} MI_DEFERRED_PFNS_TO_FREE, *PMI_DEFERRED_PFNS_TO_FREE; /* size: 0x0020 */


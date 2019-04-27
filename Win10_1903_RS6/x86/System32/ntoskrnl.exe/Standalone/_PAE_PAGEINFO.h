typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _PAE_PAGEINFO
{
  /* 0x0000 */ struct _LIST_ENTRY ListHead;
  /* 0x0008 */ unsigned long PageFrameNumber;
  /* 0x000c */ unsigned long EntriesInUse;
} PAE_PAGEINFO, *PPAE_PAGEINFO; /* size: 0x0010 */


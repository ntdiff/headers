typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _POWER_CHANNEL_SUMMARY
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long TotalCount;
  /* 0x0008 */ unsigned long D0Count;
  /* 0x0010 */ struct _LIST_ENTRY NotifyList;
} POWER_CHANNEL_SUMMARY, *PPOWER_CHANNEL_SUMMARY; /* size: 0x0020 */


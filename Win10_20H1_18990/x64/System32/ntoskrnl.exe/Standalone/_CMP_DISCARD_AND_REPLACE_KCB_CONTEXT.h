typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT
{
  /* 0x0000 */ struct _CM_KEY_CONTROL_BLOCK* BaseKcb;
  /* 0x0008 */ long PrepareStatus;
  /* 0x0010 */ struct _LIST_ENTRY ClonedKcbListHead;
} CMP_DISCARD_AND_REPLACE_KCB_CONTEXT, *PCMP_DISCARD_AND_REPLACE_KCB_CONTEXT; /* size: 0x0020 */


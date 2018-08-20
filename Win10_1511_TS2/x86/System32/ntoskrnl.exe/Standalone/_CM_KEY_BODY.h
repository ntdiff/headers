typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _CM_KEY_BODY
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;
  /* 0x0008 */ struct _CM_NOTIFY_BLOCK* NotifyBlock;
  /* 0x000c */ void* ProcessID;
  /* 0x0010 */ struct _LIST_ENTRY KeyBodyList;
  struct /* bitfield */
  {
    /* 0x0018 */ unsigned long Flags : 16; /* bit position: 0 */
    /* 0x0018 */ unsigned long HandleTags : 16; /* bit position: 16 */
  }; /* bitfield */
  /* 0x001c */ void* KtmTrans;
  /* 0x0020 */ struct _GUID* KtmUow;
  /* 0x0024 */ struct _LIST_ENTRY ContextListHead;
} CM_KEY_BODY, *PCM_KEY_BODY; /* size: 0x002c */


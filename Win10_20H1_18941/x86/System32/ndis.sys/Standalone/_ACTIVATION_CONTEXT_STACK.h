typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ACTIVATION_CONTEXT_STACK
{
  /* 0x0000 */ struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;
  /* 0x0004 */ struct _LIST_ENTRY FrameListCache;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long NextCookieSequenceNumber;
  /* 0x0014 */ unsigned long StackId;
} ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK; /* size: 0x0018 */


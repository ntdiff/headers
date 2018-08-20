typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _ACTIVATION_CONTEXT_STACK
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NextCookieSequenceNumber;
  /* 0x0008 */ void* ActiveFrame;
  /* 0x000c */ struct _LIST_ENTRY FrameListCache;
} ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK; /* size: 0x0014 */


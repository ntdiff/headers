typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _ACTIVATION_CONTEXT_STACK
{
  /* 0x0000 */ struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME* ActiveFrame;
  /* 0x0008 */ struct _LIST_ENTRY FrameListCache;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned long NextCookieSequenceNumber;
  /* 0x0020 */ unsigned long StackId;
  /* 0x0024 */ long __PADDING__[1];
} ACTIVATION_CONTEXT_STACK, *PACTIVATION_CONTEXT_STACK; /* size: 0x0028 */


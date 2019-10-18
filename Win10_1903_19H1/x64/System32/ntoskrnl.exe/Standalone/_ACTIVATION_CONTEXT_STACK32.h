struct LIST_ENTRY32
{
  /* 0x0000 */ unsigned long Flink;
  /* 0x0004 */ unsigned long Blink;
}; /* size: 0x0008 */

typedef struct _ACTIVATION_CONTEXT_STACK32
{
  /* 0x0000 */ unsigned long ActiveFrame;
  /* 0x0004 */ struct LIST_ENTRY32 FrameListCache;
  /* 0x000c */ unsigned long Flags;
  /* 0x0010 */ unsigned long NextCookieSequenceNumber;
  /* 0x0014 */ unsigned long StackId;
} ACTIVATION_CONTEXT_STACK32, *PACTIVATION_CONTEXT_STACK32; /* size: 0x0018 */


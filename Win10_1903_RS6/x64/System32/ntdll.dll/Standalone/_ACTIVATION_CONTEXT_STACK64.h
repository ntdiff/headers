struct LIST_ENTRY64
{
  /* 0x0000 */ unsigned __int64 Flink;
  /* 0x0008 */ unsigned __int64 Blink;
}; /* size: 0x0010 */

typedef struct _ACTIVATION_CONTEXT_STACK64
{
  /* 0x0000 */ unsigned __int64 ActiveFrame;
  /* 0x0008 */ struct LIST_ENTRY64 FrameListCache;
  /* 0x0018 */ unsigned long Flags;
  /* 0x001c */ unsigned long NextCookieSequenceNumber;
  /* 0x0020 */ unsigned long StackId;
  /* 0x0024 */ long __PADDING__[1];
} ACTIVATION_CONTEXT_STACK64, *PACTIVATION_CONTEXT_STACK64; /* size: 0x0028 */


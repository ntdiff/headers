typedef struct _KDHELP64
{
  /* 0x0000 */ unsigned __int64 Thread;
  /* 0x0008 */ unsigned long ThCallbackStack;
  /* 0x000c */ unsigned long ThCallbackBStore;
  /* 0x0010 */ unsigned long NextCallback;
  /* 0x0014 */ unsigned long FramePointer;
  /* 0x0018 */ unsigned __int64 KiCallUserMode;
  /* 0x0020 */ unsigned __int64 KeUserCallbackDispatcher;
  /* 0x0028 */ unsigned __int64 SystemRangeStart;
  /* 0x0030 */ unsigned __int64 KiUserExceptionDispatcher;
  /* 0x0038 */ unsigned __int64 StackBase;
  /* 0x0040 */ unsigned __int64 StackLimit;
  /* 0x0048 */ unsigned __int64 Reserved[5];
} KDHELP64, *PKDHELP64; /* size: 0x0070 */


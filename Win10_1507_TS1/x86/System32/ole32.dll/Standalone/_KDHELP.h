typedef struct _KDHELP
{
  /* 0x0000 */ unsigned long Thread;
  /* 0x0004 */ unsigned long ThCallbackStack;
  /* 0x0008 */ unsigned long NextCallback;
  /* 0x000c */ unsigned long FramePointer;
  /* 0x0010 */ unsigned long KiCallUserMode;
  /* 0x0014 */ unsigned long KeUserCallbackDispatcher;
  /* 0x0018 */ unsigned long SystemRangeStart;
  /* 0x001c */ unsigned long ThCallbackBStore;
  /* 0x0020 */ unsigned long KiUserExceptionDispatcher;
  /* 0x0024 */ unsigned long StackBase;
  /* 0x0028 */ unsigned long StackLimit;
  /* 0x002c */ unsigned long Reserved[5];
} KDHELP, *PKDHELP; /* size: 0x0040 */


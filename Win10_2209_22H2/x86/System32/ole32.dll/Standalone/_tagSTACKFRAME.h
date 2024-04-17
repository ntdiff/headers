enum ADDRESS_MODE
{
  AddrMode1616 = 0,
  AddrMode1632 = 1,
  AddrModeReal = 2,
  AddrModeFlat = 3,
};

typedef struct _tagADDRESS
{
  /* 0x0000 */ unsigned long Offset;
  /* 0x0004 */ unsigned short Segment;
  /* 0x0008 */ enum ADDRESS_MODE Mode;
} tagADDRESS, *PtagADDRESS; /* size: 0x000c */

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

typedef struct _tagSTACKFRAME
{
  /* 0x0000 */ struct _tagADDRESS AddrPC;
  /* 0x000c */ struct _tagADDRESS AddrReturn;
  /* 0x0018 */ struct _tagADDRESS AddrFrame;
  /* 0x0024 */ struct _tagADDRESS AddrStack;
  /* 0x0030 */ void* FuncTableEntry;
  /* 0x0034 */ unsigned long Params[4];
  /* 0x0044 */ int Far;
  /* 0x0048 */ int Virtual;
  /* 0x004c */ unsigned long Reserved[3];
  /* 0x0058 */ struct _KDHELP KdHelp;
  /* 0x0098 */ struct _tagADDRESS AddrBStore;
} tagSTACKFRAME, *PtagSTACKFRAME; /* size: 0x00a4 */


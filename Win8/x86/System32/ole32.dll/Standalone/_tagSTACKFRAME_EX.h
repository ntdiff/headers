enum ADDRESS_MODE
{
  AddrMode1616 = 0,
  AddrMode1632 = 1,
  AddrModeReal = 2,
  AddrModeFlat = 3,
};

typedef struct _tagADDRESS64
{
  /* 0x0000 */ unsigned __int64 Offset;
  /* 0x0008 */ unsigned short Segment;
  /* 0x000c */ enum ADDRESS_MODE Mode;
} tagADDRESS64, *PtagADDRESS64; /* size: 0x0010 */

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

typedef struct _tagSTACKFRAME_EX
{
  /* 0x0000 */ struct _tagADDRESS64 AddrPC;
  /* 0x0010 */ struct _tagADDRESS64 AddrReturn;
  /* 0x0020 */ struct _tagADDRESS64 AddrFrame;
  /* 0x0030 */ struct _tagADDRESS64 AddrStack;
  /* 0x0040 */ struct _tagADDRESS64 AddrBStore;
  /* 0x0050 */ void* FuncTableEntry;
  /* 0x0058 */ unsigned __int64 Params[4];
  /* 0x0078 */ int Far;
  /* 0x007c */ int Virtual;
  /* 0x0080 */ unsigned __int64 Reserved[3];
  /* 0x0098 */ struct _KDHELP64 KdHelp;
  /* 0x0108 */ unsigned long StackFrameSize;
  /* 0x010c */ unsigned long InlineFrameContext;
} tagSTACKFRAME_EX, *PtagSTACKFRAME_EX; /* size: 0x0110 */


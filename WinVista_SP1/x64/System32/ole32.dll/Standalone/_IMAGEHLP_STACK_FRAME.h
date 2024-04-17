typedef struct _IMAGEHLP_STACK_FRAME
{
  /* 0x0000 */ unsigned __int64 InstructionOffset;
  /* 0x0008 */ unsigned __int64 ReturnOffset;
  /* 0x0010 */ unsigned __int64 FrameOffset;
  /* 0x0018 */ unsigned __int64 StackOffset;
  /* 0x0020 */ unsigned __int64 BackingStoreOffset;
  /* 0x0028 */ unsigned __int64 FuncTableEntry;
  /* 0x0030 */ unsigned __int64 Params[4];
  /* 0x0050 */ unsigned __int64 Reserved[5];
  /* 0x0078 */ int Virtual;
  /* 0x007c */ unsigned long Reserved2;
} IMAGEHLP_STACK_FRAME, *PIMAGEHLP_STACK_FRAME; /* size: 0x0080 */


typedef struct _DBGKD_GET_VERSION32
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
  /* 0x0004 */ unsigned short ProtocolVersion;
  /* 0x0006 */ unsigned short Flags;
  /* 0x0008 */ unsigned long KernBase;
  /* 0x000c */ unsigned long PsLoadedModuleList;
  /* 0x0010 */ unsigned short MachineType;
  /* 0x0012 */ unsigned short ThCallbackStack;
  /* 0x0014 */ unsigned short NextCallback;
  /* 0x0016 */ unsigned short FramePointer;
  /* 0x0018 */ unsigned long KiCallUserMode;
  /* 0x001c */ unsigned long KeUserCallbackDispatcher;
  /* 0x0020 */ unsigned long BreakpointWithStatus;
  /* 0x0024 */ unsigned long DebuggerDataList;
} DBGKD_GET_VERSION32, *PDBGKD_GET_VERSION32; /* size: 0x0028 */


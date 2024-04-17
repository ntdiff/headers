typedef struct _Wx86TIB
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned long InitialPc;
  /* 0x0008 */ void* StackBase;
  /* 0x000c */ void* StackLimit;
  /* 0x0010 */ void* DeallocationStack;
  /* 0x0014 */ unsigned long LogFlags;
  /* 0x0018 */ unsigned long InitialSp;
  /* 0x001c */ unsigned char SimulationCount;
  /* 0x001d */ unsigned char InCpuSimulation;
  /* 0x001e */ unsigned char EmulateInitialPc;
  /* 0x001f */ unsigned char Initialized;
  /* 0x0020 */ struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;
  /* 0x0024 */ void* CpuContext;
  /* 0x0028 */ struct _CONTEXT* InitialExceptionContext;
  /* 0x002c */ void* pCallersRIID;
  /* 0x0030 */ void* pCallersUnknown;
  /* 0x0034 */ unsigned long Flags;
  /* 0x0038 */ void* SelfRegDllName;
  /* 0x003c */ void* SelfRegDllHandle;
} Wx86TIB, *PWx86TIB; /* size: 0x0040 */


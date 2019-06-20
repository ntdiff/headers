typedef struct _INTERRUPT_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeLocalUnit /* function */;
  /* 0x0004 */ void* InitializeIoUnit /* function */;
  /* 0x0008 */ void* SetPriority /* function */;
  /* 0x000c */ void* GetLocalUnitError /* function */;
  /* 0x0010 */ void* ClearLocalUnitError /* function */;
  /* 0x0014 */ void* GetLogicalId /* function */;
  /* 0x0018 */ void* SetLogicalId /* function */;
  /* 0x001c */ void* AcceptAndGetSource /* function */;
  /* 0x0020 */ void* EndOfInterrupt /* function */;
  /* 0x0024 */ void* FastEndOfInterrupt /* function */;
  /* 0x0028 */ void* SetLineState /* function */;
  /* 0x002c */ void* RequestInterrupt /* function */;
  /* 0x0030 */ void* StartProcessor /* function */;
  /* 0x0034 */ void* GenerateMessage /* function */;
  /* 0x0038 */ void* ConvertId /* function */;
  /* 0x003c */ void* SaveLocalInterrupts /* function */;
  /* 0x0040 */ void* ReplayLocalInterrupts /* function */;
  /* 0x0044 */ void* DeinitializeLocalUnit /* function */;
  /* 0x0048 */ void* DeinitializeIoUnit /* function */;
  /* 0x004c */ void* QueryAndGetSource /* function */;
  /* 0x0050 */ void* DeactivateInterrupt /* function */;
  /* 0x0054 */ void* DirectedEndOfInterrupt /* function */;
  /* 0x0058 */ void* QueryLocalUnitInfo /* function */;
} INTERRUPT_FUNCTION_TABLE, *PINTERRUPT_FUNCTION_TABLE; /* size: 0x005c */


typedef struct _INTERRUPT_FUNCTION_TABLE
{
  /* 0x0000 */ void* InitializeLocalUnit /* function */;
  /* 0x0008 */ void* InitializeIoUnit /* function */;
  /* 0x0010 */ void* SetPriority /* function */;
  /* 0x0018 */ void* GetLocalUnitError /* function */;
  /* 0x0020 */ void* ClearLocalUnitError /* function */;
  /* 0x0028 */ void* GetLogicalId /* function */;
  /* 0x0030 */ void* SetLogicalId /* function */;
  /* 0x0038 */ void* AcceptAndGetSource /* function */;
  /* 0x0040 */ void* EndOfInterrupt /* function */;
  /* 0x0048 */ void* FastEndOfInterrupt /* function */;
  /* 0x0050 */ void* SetLineState /* function */;
  /* 0x0058 */ void* RequestInterrupt /* function */;
  /* 0x0060 */ void* StartProcessor /* function */;
  /* 0x0068 */ void* GenerateMessage /* function */;
  /* 0x0070 */ void* ConvertId /* function */;
  /* 0x0078 */ void* SaveLocalInterrupts /* function */;
  /* 0x0080 */ void* ReplayLocalInterrupts /* function */;
  /* 0x0088 */ void* DeinitializeLocalUnit /* function */;
  /* 0x0090 */ void* DeinitializeIoUnit /* function */;
  /* 0x0098 */ void* QueryAndGetSource /* function */;
  /* 0x00a0 */ void* DeactivateInterrupt /* function */;
  /* 0x00a8 */ void* DirectedEndOfInterrupt /* function */;
  /* 0x00b0 */ void* QueryLocalUnitInfo /* function */;
} INTERRUPT_FUNCTION_TABLE, *PINTERRUPT_FUNCTION_TABLE; /* size: 0x00b8 */


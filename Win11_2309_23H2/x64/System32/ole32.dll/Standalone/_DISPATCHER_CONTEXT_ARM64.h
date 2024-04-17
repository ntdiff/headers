typedef struct _DISPATCHER_CONTEXT_ARM64
{
  /* 0x0000 */ unsigned __int64 ControlPc;
  /* 0x0008 */ unsigned __int64 ImageBase;
  /* 0x0010 */ struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
  /* 0x0018 */ unsigned __int64 EstablisherFrame;
  /* 0x0020 */ unsigned __int64 TargetPc;
  /* 0x0028 */ struct _ARM64_NT_CONTEXT* ContextRecord;
  /* 0x0030 */ void* LanguageHandler /* function */;
  /* 0x0038 */ void* HandlerData;
  /* 0x0040 */ struct _UNWIND_HISTORY_TABLE* HistoryTable;
  /* 0x0048 */ unsigned long ScopeIndex;
  /* 0x004c */ unsigned char ControlPcIsUnwound;
  /* 0x0050 */ unsigned char* NonVolatileRegisters;
} DISPATCHER_CONTEXT_ARM64, *PDISPATCHER_CONTEXT_ARM64; /* size: 0x0058 */


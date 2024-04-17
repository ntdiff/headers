typedef struct _DISPATCHER_CONTEXT_ARM64
{
  /* 0x0000 */ unsigned long ControlPc;
  /* 0x0004 */ unsigned long ImageBase;
  /* 0x0008 */ struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
  /* 0x000c */ unsigned long EstablisherFrame;
  /* 0x0010 */ unsigned long TargetPc;
  /* 0x0014 */ struct _ARM64_NT_CONTEXT* ContextRecord;
  /* 0x0018 */ void* LanguageHandler /* function */;
  /* 0x001c */ void* HandlerData;
  /* 0x0020 */ struct _UNWIND_HISTORY_TABLE* HistoryTable;
  /* 0x0024 */ unsigned long ScopeIndex;
  /* 0x0028 */ unsigned char ControlPcIsUnwound;
  /* 0x002c */ unsigned char* NonVolatileRegisters;
} DISPATCHER_CONTEXT_ARM64, *PDISPATCHER_CONTEXT_ARM64; /* size: 0x0030 */


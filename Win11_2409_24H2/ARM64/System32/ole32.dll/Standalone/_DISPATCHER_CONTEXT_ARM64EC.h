typedef struct _DISPATCHER_CONTEXT_ARM64EC
{
  /* 0x0000 */ unsigned __int64 ControlPc;
  /* 0x0008 */ unsigned __int64 ImageBase;
  /* 0x0010 */ struct _IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionEntry;
  /* 0x0018 */ unsigned __int64 EstablisherFrame;
  union
  {
    /* 0x0020 */ unsigned __int64 TargetIp;
    /* 0x0020 */ unsigned __int64 TargetPc;
  }; /* size: 0x0008 */
  /* 0x0028 */ struct _CONTEXT* ContextRecord;
  /* 0x0030 */ void* LanguageHandler /* function */;
  /* 0x0038 */ void* HandlerData;
  /* 0x0040 */ struct _UNWIND_HISTORY_TABLE* HistoryTable;
  /* 0x0048 */ unsigned long ScopeIndex;
  /* 0x004c */ unsigned char ControlPcIsUnwound;
  /* 0x0050 */ unsigned char* NonVolatileRegisters;
} DISPATCHER_CONTEXT_ARM64EC, *PDISPATCHER_CONTEXT_ARM64EC; /* size: 0x0058 */


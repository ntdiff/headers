typedef struct _DISPATCHER_CONTEXT
{
  /* 0x0000 */ unsigned __int64 ControlPc;
  /* 0x0008 */ unsigned __int64 ImageBase;
  /* 0x0010 */ struct _RUNTIME_FUNCTION* FunctionEntry;
  /* 0x0018 */ unsigned __int64 EstablisherFrame;
  /* 0x0020 */ unsigned __int64 TargetIp;
  /* 0x0028 */ struct _CONTEXT* ContextRecord;
  /* 0x0030 */ void* LanguageHandler /* function */;
  /* 0x0038 */ void* HandlerData;
  /* 0x0040 */ struct _UNWIND_HISTORY_TABLE* HistoryTable;
  /* 0x0048 */ unsigned long ScopeIndex;
  /* 0x004c */ unsigned long Fill0;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT; /* size: 0x0050 */


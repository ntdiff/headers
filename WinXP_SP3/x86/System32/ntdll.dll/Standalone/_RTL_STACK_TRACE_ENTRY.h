typedef struct _RTL_STACK_TRACE_ENTRY
{
  /* 0x0000 */ struct _RTL_STACK_TRACE_ENTRY* HashChain;
  /* 0x0004 */ unsigned long TraceCount;
  /* 0x0008 */ unsigned short Index;
  /* 0x000a */ unsigned short Depth;
  /* 0x000c */ void* BackTrace[32];
} RTL_STACK_TRACE_ENTRY, *PRTL_STACK_TRACE_ENTRY; /* size: 0x008c */


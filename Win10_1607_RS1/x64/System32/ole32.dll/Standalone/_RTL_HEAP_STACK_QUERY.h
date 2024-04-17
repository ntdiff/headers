typedef struct _RTL_HEAP_STACK_QUERY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0008 */ void* Process;
  /* 0x0010 */ void* WriteRoutine /* function */;
  /* 0x0018 */ void* SerializationContext;
} RTL_HEAP_STACK_QUERY, *PRTL_HEAP_STACK_QUERY; /* size: 0x0020 */


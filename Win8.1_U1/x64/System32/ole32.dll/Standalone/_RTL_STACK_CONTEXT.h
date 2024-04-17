typedef struct _RTL_STACK_CONTEXT_ENTRY
{
  /* 0x0000 */ unsigned __int64 Address;
  /* 0x0008 */ unsigned __int64 Data;
} RTL_STACK_CONTEXT_ENTRY, *PRTL_STACK_CONTEXT_ENTRY; /* size: 0x0010 */

typedef struct _RTL_STACK_CONTEXT
{
  /* 0x0000 */ unsigned long NumberOfEntries;
  /* 0x0008 */ struct _RTL_STACK_CONTEXT_ENTRY Entry[1];
} RTL_STACK_CONTEXT, *PRTL_STACK_CONTEXT; /* size: 0x0018 */


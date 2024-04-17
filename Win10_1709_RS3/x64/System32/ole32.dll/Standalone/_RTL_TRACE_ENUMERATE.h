typedef struct _RTL_TRACE_ENUMERATE
{
  /* 0x0000 */ struct _RTL_TRACE_DATABASE* Database;
  /* 0x0008 */ unsigned long Index;
  /* 0x0010 */ struct _RTL_TRACE_BLOCK* Block;
} RTL_TRACE_ENUMERATE, *PRTL_TRACE_ENUMERATE; /* size: 0x0018 */


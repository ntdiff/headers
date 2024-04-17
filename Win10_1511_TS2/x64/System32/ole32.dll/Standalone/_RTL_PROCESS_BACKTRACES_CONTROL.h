typedef struct _RTL_STACK_TRACE_DATABASE_CREATE
{
  /* 0x0000 */ void* CommitBase;
  /* 0x0008 */ unsigned __int64 CommitSize;
  /* 0x0010 */ unsigned __int64 ReserveSize;
} RTL_STACK_TRACE_DATABASE_CREATE, *PRTL_STACK_TRACE_DATABASE_CREATE; /* size: 0x0018 */

typedef struct _RTL_PROCESS_BACKTRACES_CONTROL
{
  /* 0x0000 */ unsigned long ControlCode;
  /* 0x0004 */ unsigned long ControlSize;
  union
  {
    /* 0x0008 */ unsigned char ControlData[1];
    /* 0x0008 */ struct _RTL_STACK_TRACE_DATABASE_CREATE DatabaseCreate;
  }; /* size: 0x0018 */
} RTL_PROCESS_BACKTRACES_CONTROL, *PRTL_PROCESS_BACKTRACES_CONTROL; /* size: 0x0020 */


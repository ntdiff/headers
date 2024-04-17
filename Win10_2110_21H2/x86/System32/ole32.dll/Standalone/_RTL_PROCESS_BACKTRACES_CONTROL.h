typedef struct _RTL_STACK_TRACE_DATABASE_CREATE
{
  /* 0x0000 */ void* CommitBase;
  /* 0x0004 */ unsigned long CommitSize;
  /* 0x0008 */ unsigned long ReserveSize;
} RTL_STACK_TRACE_DATABASE_CREATE, *PRTL_STACK_TRACE_DATABASE_CREATE; /* size: 0x000c */

typedef struct _RTL_PROCESS_BACKTRACES_CONTROL
{
  /* 0x0000 */ unsigned long ControlCode;
  /* 0x0004 */ unsigned long ControlSize;
  union
  {
    /* 0x0008 */ unsigned char ControlData[1];
    /* 0x0008 */ struct _RTL_STACK_TRACE_DATABASE_CREATE DatabaseCreate;
  }; /* size: 0x000c */
} RTL_PROCESS_BACKTRACES_CONTROL, *PRTL_PROCESS_BACKTRACES_CONTROL; /* size: 0x0014 */


typedef struct _POP_SHUTDOWN_BUG_CHECK
{
  /* 0x0000 */ struct _ETHREAD* InitiatingThread;
  /* 0x0004 */ struct _EPROCESS* InitiatingProcess;
  /* 0x0008 */ void* ThreadId;
  /* 0x000c */ void* ProcessId;
  /* 0x0010 */ unsigned long Code;
  /* 0x0014 */ unsigned long Parameter1;
  /* 0x0018 */ unsigned long Parameter2;
  /* 0x001c */ unsigned long Parameter3;
  /* 0x0020 */ unsigned long Parameter4;
} POP_SHUTDOWN_BUG_CHECK, *PPOP_SHUTDOWN_BUG_CHECK; /* size: 0x0024 */


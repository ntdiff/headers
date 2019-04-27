typedef struct _POP_SHUTDOWN_BUG_CHECK
{
  /* 0x0000 */ struct _ETHREAD* InitiatingThread;
  /* 0x0008 */ struct _EPROCESS* InitiatingProcess;
  /* 0x0010 */ void* ThreadId;
  /* 0x0018 */ void* ProcessId;
  /* 0x0020 */ unsigned long Code;
  /* 0x0028 */ unsigned __int64 Parameter1;
  /* 0x0030 */ unsigned __int64 Parameter2;
  /* 0x0038 */ unsigned __int64 Parameter3;
  /* 0x0040 */ unsigned __int64 Parameter4;
} POP_SHUTDOWN_BUG_CHECK, *PPOP_SHUTDOWN_BUG_CHECK; /* size: 0x0048 */


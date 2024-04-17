typedef struct _SYSDBG_TRIAGE_DUMP
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long BugCheckCode;
  /* 0x0008 */ unsigned long BugCheckParam1;
  /* 0x000c */ unsigned long BugCheckParam2;
  /* 0x0010 */ unsigned long BugCheckParam3;
  /* 0x0014 */ unsigned long BugCheckParam4;
  /* 0x0018 */ unsigned long ProcessHandles;
  /* 0x001c */ unsigned long ThreadHandles;
  /* 0x0020 */ void** Handles;
} SYSDBG_TRIAGE_DUMP, *PSYSDBG_TRIAGE_DUMP; /* size: 0x0024 */


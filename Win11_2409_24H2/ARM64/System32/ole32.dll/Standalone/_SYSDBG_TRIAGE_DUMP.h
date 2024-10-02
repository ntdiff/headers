typedef struct _SYSDBG_TRIAGE_DUMP
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long BugCheckCode;
  /* 0x0008 */ unsigned __int64 BugCheckParam1;
  /* 0x0010 */ unsigned __int64 BugCheckParam2;
  /* 0x0018 */ unsigned __int64 BugCheckParam3;
  /* 0x0020 */ unsigned __int64 BugCheckParam4;
  /* 0x0028 */ unsigned long ProcessHandles;
  /* 0x002c */ unsigned long ThreadHandles;
  /* 0x0030 */ void** Handles;
} SYSDBG_TRIAGE_DUMP, *PSYSDBG_TRIAGE_DUMP; /* size: 0x0038 */


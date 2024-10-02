typedef struct _CMSI_RW_LOCK
{
  /* 0x0000 */ void* Reserved;
} CMSI_RW_LOCK, *PCMSI_RW_LOCK; /* size: 0x0008 */

typedef struct _CMSI_PROCESS_TUPLE
{
  /* 0x0000 */ void* ProcessHandle;
  /* 0x0008 */ void* ProcessReference;
  /* 0x0010 */ struct _CMSI_RW_LOCK WorkingSetLock;
  /* 0x0018 */ unsigned __int64 LockedPageCharges;
  /* 0x0020 */ unsigned __int64 WorkingSetMinimum;
  /* 0x0028 */ unsigned __int64 WorkingSetMaximum;
} CMSI_PROCESS_TUPLE, *PCMSI_PROCESS_TUPLE; /* size: 0x0030 */


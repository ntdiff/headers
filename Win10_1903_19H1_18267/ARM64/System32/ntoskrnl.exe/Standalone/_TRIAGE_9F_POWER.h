typedef struct _TRIAGE_9F_POWER
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0008 */ struct _LIST_ENTRY* IrpList;
  /* 0x0010 */ struct _LIST_ENTRY* ThreadList;
  /* 0x0018 */ struct _TRIAGE_EX_WORK_QUEUE* DelayedWorkQueue;
  /* 0x0020 */ struct _TRIAGE_EX_WORK_QUEUE* DelayedIoWorkQueue;
} TRIAGE_9F_POWER, *PTRIAGE_9F_POWER; /* size: 0x0028 */


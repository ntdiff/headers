typedef struct _TRIAGE_9F_PNP
{
  /* 0x0000 */ unsigned short Signature;
  /* 0x0002 */ unsigned short Revision;
  /* 0x0004 */ struct _TRIAGE_PNP_DEVICE_COMPLETION_QUEUE* CompletionQueue;
  /* 0x0008 */ struct _TRIAGE_EX_WORK_QUEUE* DelayedWorkQueue;
  /* 0x000c */ struct _TRIAGE_EX_WORK_QUEUE* DelayedIoWorkQueue;
} TRIAGE_9F_PNP, *PTRIAGE_9F_PNP; /* size: 0x0010 */


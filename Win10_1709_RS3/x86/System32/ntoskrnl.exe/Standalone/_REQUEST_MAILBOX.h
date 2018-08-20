typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x000c */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0010 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0004 */ unsigned long RequestSummary;
  /* 0x0008 */ struct _KREQUEST_PACKET RequestPacket;
  /* 0x0018 */ volatile long* NodeTargetCountAddr;
  /* 0x001c */ volatile long NodeTargetCount;
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0020 */


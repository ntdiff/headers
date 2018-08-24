typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x0018 */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0020 */

typedef struct _REQUEST_MAILBOX
{
  /* 0x0000 */ struct _REQUEST_MAILBOX* Next;
  /* 0x0008 */ __int64 RequestSummary;
  /* 0x0010 */ struct _KREQUEST_PACKET RequestPacket;
  /* 0x0030 */ long __PADDING__[4];
} REQUEST_MAILBOX, *PREQUEST_MAILBOX; /* size: 0x0040 */


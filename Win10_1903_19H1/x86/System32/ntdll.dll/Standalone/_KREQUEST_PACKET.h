typedef struct _KREQUEST_PACKET
{
  /* 0x0000 */ void* CurrentPacket[3];
  /* 0x000c */ void* WorkerRoutine /* function */;
} KREQUEST_PACKET, *PKREQUEST_PACKET; /* size: 0x0010 */


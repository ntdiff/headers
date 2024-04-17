typedef struct _TRANSMIT_FILE_BUFFERS
{
  /* 0x0000 */ void* Head;
  /* 0x0004 */ unsigned long HeadLength;
  /* 0x0008 */ void* Tail;
  /* 0x000c */ unsigned long TailLength;
} TRANSMIT_FILE_BUFFERS, *PTRANSMIT_FILE_BUFFERS; /* size: 0x0010 */


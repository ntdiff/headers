typedef struct _TRANSMIT_FILE_BUFFERS
{
  /* 0x0000 */ void* Head;
  /* 0x0008 */ unsigned long HeadLength;
  /* 0x0010 */ void* Tail;
  /* 0x0018 */ unsigned long TailLength;
  /* 0x001c */ long __PADDING__[1];
} TRANSMIT_FILE_BUFFERS, *PTRANSMIT_FILE_BUFFERS; /* size: 0x0020 */


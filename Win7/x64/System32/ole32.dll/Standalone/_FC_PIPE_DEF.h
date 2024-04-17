typedef struct _FC_PIPE_DEF
{
  /* 0x0000 */ unsigned char Fc;
  struct /* bitfield */
  {
    /* 0x0001 */ unsigned char Align : 4; /* bit position: 0 */
    /* 0x0001 */ unsigned char Unused : 1; /* bit position: 4 */
    /* 0x0001 */ unsigned char HasRange : 1; /* bit position: 5 */
    /* 0x0001 */ unsigned char ObjectPipe : 1; /* bit position: 6 */
    /* 0x0001 */ unsigned char BigPipe : 1; /* bit position: 7 */
  }; /* bitfield */
  /* 0x0002 */ short TypeOffset;
  union
  {
    struct
    {
      /* 0x0004 */ unsigned short MemSize;
      /* 0x0006 */ unsigned short WireSize;
      /* 0x0008 */ unsigned long LowChunkLimit;
      /* 0x000c */ unsigned long HighChunkLimit;
    } /* size: 0x000c */ s;
    struct
    {
      /* 0x0004 */ unsigned long MemSize;
      /* 0x0008 */ unsigned long WireSize;
      /* 0x000c */ unsigned long LowChunkLimit;
      /* 0x0010 */ unsigned long HighChunkLimit;
    } /* size: 0x0010 */ Big;
  }; /* size: 0x0010 */
} FC_PIPE_DEF, *PFC_PIPE_DEF; /* size: 0x0014 */


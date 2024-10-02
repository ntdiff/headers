typedef union _UNWIND_CODE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned char CodeOffset;
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char UnwindOp : 4; /* bit position: 0 */
        /* 0x0001 */ unsigned char OpInfo : 4; /* bit position: 4 */
      }; /* bitfield */
    }; /* size: 0x0002 */
    struct
    {
      /* 0x0000 */ unsigned char OffsetLow;
      struct /* bitfield */
      {
        /* 0x0001 */ unsigned char UnwindOp : 4; /* bit position: 0 */
        /* 0x0001 */ unsigned char OffsetHigh : 4; /* bit position: 4 */
      }; /* bitfield */
    } /* size: 0x0002 */ EpilogueCode;
    /* 0x0000 */ unsigned short FrameOffset;
  }; /* size: 0x0002 */
} UNWIND_CODE, *PUNWIND_CODE; /* size: 0x0002 */

typedef struct _UNWIND_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Version : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char Flags : 5; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0001 */ unsigned char SizeOfProlog;
  /* 0x0002 */ unsigned char CountOfCodes;
  struct /* bitfield */
  {
    /* 0x0003 */ unsigned char FrameRegister : 4; /* bit position: 0 */
    /* 0x0003 */ unsigned char FrameOffset : 4; /* bit position: 4 */
  }; /* bitfield */
  /* 0x0004 */ union _UNWIND_CODE UnwindCode[1];
} UNWIND_INFO, *PUNWIND_INFO; /* size: 0x0006 */


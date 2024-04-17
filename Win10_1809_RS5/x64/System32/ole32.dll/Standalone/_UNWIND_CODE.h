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


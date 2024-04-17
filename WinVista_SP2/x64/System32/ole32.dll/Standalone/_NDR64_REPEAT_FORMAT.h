typedef struct _NDR64_POINTER_REPEAT_FLAGS
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char SetCorrMark : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 7; /* bit position: 1 */
  }; /* bitfield */
} NDR64_POINTER_REPEAT_FLAGS, *PNDR64_POINTER_REPEAT_FLAGS; /* size: 0x0001 */

typedef struct _NDR64_REPEAT_FORMAT
{
  /* 0x0000 */ unsigned char FormatCode;
  /* 0x0001 */ struct _NDR64_POINTER_REPEAT_FLAGS Flags;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ unsigned int Increment;
  /* 0x0008 */ unsigned int OffsetToArray;
  /* 0x000c */ unsigned int NumberOfPointers;
} NDR64_REPEAT_FORMAT, *PNDR64_REPEAT_FORMAT; /* size: 0x0010 */


typedef struct _TAPE_WRITE_MARKS
{
  /* 0x0000 */ unsigned long Type;
  /* 0x0004 */ unsigned long Count;
  /* 0x0008 */ unsigned char Immediate;
  /* 0x0009 */ char __PADDING__[3];
} TAPE_WRITE_MARKS, *PTAPE_WRITE_MARKS; /* size: 0x000c */


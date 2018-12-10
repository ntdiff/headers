typedef struct _UNEXPECTED_INTERRUPT
{
  /* 0x0000 */ unsigned char PushImm;
  /* 0x0001 */ unsigned char Vector;
  /* 0x0002 */ unsigned char PushRbp;
  /* 0x0003 */ unsigned char JmpOp;
  /* 0x0004 */ long JmpOffset;
} UNEXPECTED_INTERRUPT, *PUNEXPECTED_INTERRUPT; /* size: 0x0008 */


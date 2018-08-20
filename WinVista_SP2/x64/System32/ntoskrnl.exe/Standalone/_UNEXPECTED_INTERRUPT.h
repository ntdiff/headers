typedef struct _UNEXPECTED_INTERRUPT
{
  /* 0x0000 */ unsigned char PushImmOp;
  /* 0x0001 */ unsigned long PushImm;
  /* 0x0005 */ unsigned char PushRbp;
  /* 0x0006 */ unsigned char JmpOp;
  /* 0x0007 */ long JmpOffset;
  /* 0x000b */ char __PADDING__[5];
} UNEXPECTED_INTERRUPT, *PUNEXPECTED_INTERRUPT; /* size: 0x0010 */


typedef struct _ISR_THUNK
{
  /* 0x0000 */ unsigned char PushImm;
  /* 0x0001 */ unsigned char Vector;
  /* 0x0002 */ unsigned char PushRbp;
  /* 0x0003 */ unsigned char JmpOp;
  /* 0x0004 */ long JmpOffset;
} ISR_THUNK, *PISR_THUNK; /* size: 0x0008 */


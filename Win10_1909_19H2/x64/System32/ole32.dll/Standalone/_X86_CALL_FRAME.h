typedef struct _X86_CALL_FRAME
{
  /* 0x0000 */ unsigned long ReturnAddress;
  /* 0x0004 */ unsigned long Param1;
  /* 0x0008 */ unsigned long Param2;
  /* 0x000c */ unsigned long CompatibilityArea;
} X86_CALL_FRAME, *PX86_CALL_FRAME; /* size: 0x0010 */


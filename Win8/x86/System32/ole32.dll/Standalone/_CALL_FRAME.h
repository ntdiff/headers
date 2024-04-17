typedef struct _CALL_FRAME
{
  /* 0x0000 */ void* ReturnAddress;
  /* 0x0004 */ void* Param1;
  /* 0x0008 */ void* Param2;
  /* 0x000c */ void* CompatibilityArea;
} CALL_FRAME, *PCALL_FRAME; /* size: 0x0010 */


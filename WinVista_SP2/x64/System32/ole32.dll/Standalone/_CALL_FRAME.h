typedef struct _CALL_FRAME
{
  /* 0x0000 */ void* ReturnAddress;
  /* 0x0008 */ void* Param1Home;
  /* 0x0010 */ void* Param2Home;
  /* 0x0018 */ void* Param3Home;
  /* 0x0020 */ void* Param4Home;
} CALL_FRAME, *PCALL_FRAME; /* size: 0x0028 */


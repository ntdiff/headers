typedef struct _SYSTEM_MEMORY_INFO
{
  /* 0x0000 */ unsigned char* StringOffset;
  /* 0x0008 */ unsigned short ValidCount;
  /* 0x000a */ unsigned short TransitionCount;
  /* 0x000c */ unsigned short ModifiedCount;
  /* 0x000e */ unsigned short PageTableCount;
} SYSTEM_MEMORY_INFO, *PSYSTEM_MEMORY_INFO; /* size: 0x0010 */


typedef struct _SYSTEM_MEMORY_INFO
{
  /* 0x0000 */ unsigned char* StringOffset;
  /* 0x0008 */ unsigned short ValidCount;
  /* 0x000a */ unsigned short TransitionCount;
  /* 0x000c */ unsigned short ModifiedCount;
  /* 0x000e */ unsigned short PageTableCount;
} SYSTEM_MEMORY_INFO, *PSYSTEM_MEMORY_INFO; /* size: 0x0010 */

typedef struct _SYSTEM_MEMORY_INFORMATION
{
  /* 0x0000 */ unsigned long InfoSize;
  /* 0x0008 */ unsigned __int64 StringStart;
  /* 0x0010 */ struct _SYSTEM_MEMORY_INFO Memory[1];
} SYSTEM_MEMORY_INFORMATION, *PSYSTEM_MEMORY_INFORMATION; /* size: 0x0020 */


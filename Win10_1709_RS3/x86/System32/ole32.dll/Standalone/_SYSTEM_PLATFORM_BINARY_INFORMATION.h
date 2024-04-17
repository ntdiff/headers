typedef struct _SYSTEM_PLATFORM_BINARY_INFORMATION
{
  /* 0x0000 */ unsigned __int64 PhysicalAddress;
  /* 0x0008 */ void* HandoffBuffer;
  /* 0x000c */ void* CommandLineBuffer;
  /* 0x0010 */ unsigned long HandoffBufferSize;
  /* 0x0014 */ unsigned long CommandLineBufferSize;
} SYSTEM_PLATFORM_BINARY_INFORMATION, *PSYSTEM_PLATFORM_BINARY_INFORMATION; /* size: 0x0018 */


typedef struct _SYSTEM_EXCEPTION_INFORMATION
{
  /* 0x0000 */ unsigned long AlignmentFixupCount;
  /* 0x0004 */ unsigned long ExceptionDispatchCount;
  /* 0x0008 */ unsigned long FloatingEmulationCount;
  /* 0x000c */ unsigned long ByteWordEmulationCount;
} SYSTEM_EXCEPTION_INFORMATION, *PSYSTEM_EXCEPTION_INFORMATION; /* size: 0x0010 */


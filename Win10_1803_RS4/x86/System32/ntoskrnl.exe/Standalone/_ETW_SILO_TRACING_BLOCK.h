typedef struct _ETW_SILO_TRACING_BLOCK
{
  /* 0x0000 */ struct _EX_FAST_REF* ProcessorBuffers;
  /* 0x0004 */ unsigned __int64* EventsLoggedCount;
  /* 0x0008 */ long __PADDING__[14];
} ETW_SILO_TRACING_BLOCK, *PETW_SILO_TRACING_BLOCK; /* size: 0x0040 */


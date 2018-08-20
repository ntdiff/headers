typedef struct _EX_FAST_REF
{
  union
  {
    /* 0x0000 */ void* Object;
    /* 0x0000 */ unsigned long RefCnt : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} EX_FAST_REF, *PEX_FAST_REF; /* size: 0x0004 */

typedef struct _ETW_SILO_TRACING_BLOCK
{
  /* 0x0000 */ struct _EX_FAST_REF ProcessorBuffers[64];
  /* 0x0100 */ unsigned __int64 EventsLoggedCount[64];
} ETW_SILO_TRACING_BLOCK, *PETW_SILO_TRACING_BLOCK; /* size: 0x0300 */


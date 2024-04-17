typedef enum _PROCESS_MEMORY_EXHAUSTION_TYPE
{
  PMETypeFailFastOnCommitFailure = 0,
  PMETypeMax = 1,
} PROCESS_MEMORY_EXHAUSTION_TYPE, *PPROCESS_MEMORY_EXHAUSTION_TYPE;

typedef struct _PROCESS_MEMORY_EXHAUSTION_INFO
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Reserved;
  /* 0x0004 */ enum _PROCESS_MEMORY_EXHAUSTION_TYPE Type;
  /* 0x0008 */ unsigned __int64 Value;
} PROCESS_MEMORY_EXHAUSTION_INFO, *PPROCESS_MEMORY_EXHAUSTION_INFO; /* size: 0x0010 */


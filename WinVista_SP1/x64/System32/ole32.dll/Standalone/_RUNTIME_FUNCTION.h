typedef struct _RUNTIME_FUNCTION
{
  /* 0x0000 */ unsigned long BeginAddress;
  /* 0x0004 */ unsigned long EndAddress;
  /* 0x0008 */ unsigned long UnwindData;
} RUNTIME_FUNCTION, *PRUNTIME_FUNCTION; /* size: 0x000c */


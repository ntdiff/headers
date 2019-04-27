typedef struct _EX_RUNDOWN_REF_CACHE_AWARE
{
  /* 0x0000 */ struct _EX_RUNDOWN_REF* RunRefs;
  /* 0x0008 */ void* PoolToFree;
  /* 0x0010 */ unsigned long RunRefSize;
  /* 0x0014 */ unsigned long Number;
} EX_RUNDOWN_REF_CACHE_AWARE, *PEX_RUNDOWN_REF_CACHE_AWARE; /* size: 0x0018 */


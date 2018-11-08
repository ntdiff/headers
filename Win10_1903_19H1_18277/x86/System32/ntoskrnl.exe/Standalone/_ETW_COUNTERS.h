typedef struct _ETW_COUNTERS
{
  /* 0x0000 */ long GuidCount;
  /* 0x0004 */ long PoolUsage[2];
  /* 0x000c */ long SessionCount;
} ETW_COUNTERS, *PETW_COUNTERS; /* size: 0x0010 */


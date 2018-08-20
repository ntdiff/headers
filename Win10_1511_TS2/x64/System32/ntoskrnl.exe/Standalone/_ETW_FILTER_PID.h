typedef struct _ETW_FILTER_PID
{
  /* 0x0000 */ unsigned long Count;
  /* 0x0004 */ unsigned long Pids[8];
} ETW_FILTER_PID, *PETW_FILTER_PID; /* size: 0x0024 */


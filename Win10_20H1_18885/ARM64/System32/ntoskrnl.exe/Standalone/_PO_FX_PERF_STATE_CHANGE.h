typedef struct _PO_FX_PERF_STATE_CHANGE
{
  /* 0x0000 */ unsigned long Set;
  union
  {
    /* 0x0008 */ unsigned long StateIndex;
    /* 0x0008 */ unsigned __int64 StateValue;
  }; /* size: 0x0008 */
} PO_FX_PERF_STATE_CHANGE, *PPO_FX_PERF_STATE_CHANGE; /* size: 0x0010 */


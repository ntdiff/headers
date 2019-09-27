typedef struct _PROC_FEEDBACK_COUNTER
{
  union
  {
    /* 0x0000 */ void* InstantaneousRead /* function */;
    /* 0x0000 */ void* DifferentialRead /* function */;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 LastActualCount;
  /* 0x0010 */ unsigned __int64 LastReferenceCount;
  /* 0x0018 */ unsigned long CachedValue;
  /* 0x0020 */ unsigned char Affinitized;
  /* 0x0021 */ unsigned char Differential;
  /* 0x0022 */ unsigned char DiscardIdleTime;
  /* 0x0023 */ unsigned char Scaling;
  /* 0x0028 */ unsigned __int64 Context;
} PROC_FEEDBACK_COUNTER, *PPROC_FEEDBACK_COUNTER; /* size: 0x0030 */


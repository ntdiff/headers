typedef struct _KSYSTEM_TIME
{
  /* 0x0000 */ unsigned long LowPart;
  /* 0x0004 */ long High1Time;
  /* 0x0008 */ long High2Time;
} KSYSTEM_TIME, *PKSYSTEM_TIME; /* size: 0x000c */


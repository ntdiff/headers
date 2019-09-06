typedef struct _VI_TRACK_IRQL
{
  /* 0x0000 */ void* Thread;
  /* 0x0004 */ unsigned char OldIrql;
  /* 0x0005 */ unsigned char NewIrql;
  /* 0x0006 */ unsigned short Processor;
  /* 0x0008 */ unsigned long TickCount;
  /* 0x000c */ void* StackTrace[5];
} VI_TRACK_IRQL, *PVI_TRACK_IRQL; /* size: 0x0020 */


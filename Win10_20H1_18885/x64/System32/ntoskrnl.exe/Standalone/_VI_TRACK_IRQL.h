typedef struct _VI_TRACK_IRQL
{
  /* 0x0000 */ void* Thread;
  /* 0x0008 */ unsigned char OldIrql;
  /* 0x0009 */ unsigned char NewIrql;
  /* 0x000a */ unsigned short Processor;
  /* 0x000c */ unsigned long TickCount;
  /* 0x0010 */ void* StackTrace[5];
} VI_TRACK_IRQL, *PVI_TRACK_IRQL; /* size: 0x0038 */


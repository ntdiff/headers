typedef struct _PERF_COUNTER_DEFINITION
{
  /* 0x0000 */ unsigned long ByteLength;
  /* 0x0004 */ unsigned long CounterNameTitleIndex;
  /* 0x0008 */ unsigned long CounterNameTitle;
  /* 0x000c */ unsigned long CounterHelpTitleIndex;
  /* 0x0010 */ unsigned long CounterHelpTitle;
  /* 0x0014 */ long DefaultScale;
  /* 0x0018 */ unsigned long DetailLevel;
  /* 0x001c */ unsigned long CounterType;
  /* 0x0020 */ unsigned long CounterSize;
  /* 0x0024 */ unsigned long CounterOffset;
} PERF_COUNTER_DEFINITION, *PPERF_COUNTER_DEFINITION; /* size: 0x0028 */


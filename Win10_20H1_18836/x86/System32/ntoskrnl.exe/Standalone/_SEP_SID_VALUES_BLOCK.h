typedef struct _SEP_SID_VALUES_BLOCK
{
  /* 0x0000 */ unsigned long BlockLength;
  /* 0x0004 */ long ReferenceCount;
  /* 0x0008 */ unsigned long SidCount;
  /* 0x000c */ unsigned long SidValuesStart;
} SEP_SID_VALUES_BLOCK, *PSEP_SID_VALUES_BLOCK; /* size: 0x0010 */


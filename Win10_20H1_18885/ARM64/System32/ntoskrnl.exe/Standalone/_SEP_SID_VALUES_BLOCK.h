typedef struct _SEP_SID_VALUES_BLOCK
{
  /* 0x0000 */ unsigned long BlockLength;
  /* 0x0008 */ __int64 ReferenceCount;
  /* 0x0010 */ unsigned long SidCount;
  /* 0x0018 */ unsigned __int64 SidValuesStart;
} SEP_SID_VALUES_BLOCK, *PSEP_SID_VALUES_BLOCK; /* size: 0x0020 */


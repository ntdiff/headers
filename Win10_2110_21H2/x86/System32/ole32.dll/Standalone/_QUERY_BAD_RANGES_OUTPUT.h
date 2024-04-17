typedef struct _QUERY_BAD_RANGES_OUTPUT_RANGE
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long Reserved;
  /* 0x0008 */ unsigned __int64 StartOffset;
  /* 0x0010 */ unsigned __int64 LengthInBytes;
} QUERY_BAD_RANGES_OUTPUT_RANGE, *PQUERY_BAD_RANGES_OUTPUT_RANGE; /* size: 0x0018 */

typedef struct _QUERY_BAD_RANGES_OUTPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumBadRanges;
  /* 0x0008 */ unsigned __int64 NextOffsetToLookUp;
  /* 0x0010 */ struct _QUERY_BAD_RANGES_OUTPUT_RANGE BadRanges[1];
} QUERY_BAD_RANGES_OUTPUT, *PQUERY_BAD_RANGES_OUTPUT; /* size: 0x0028 */


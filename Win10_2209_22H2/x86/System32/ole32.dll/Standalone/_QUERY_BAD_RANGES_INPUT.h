typedef struct _QUERY_BAD_RANGES_INPUT_RANGE
{
  /* 0x0000 */ unsigned __int64 StartOffset;
  /* 0x0008 */ unsigned __int64 LengthInBytes;
} QUERY_BAD_RANGES_INPUT_RANGE, *PQUERY_BAD_RANGES_INPUT_RANGE; /* size: 0x0010 */

typedef struct _QUERY_BAD_RANGES_INPUT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long NumRanges;
  /* 0x0008 */ struct _QUERY_BAD_RANGES_INPUT_RANGE Ranges[1];
} QUERY_BAD_RANGES_INPUT, *PQUERY_BAD_RANGES_INPUT; /* size: 0x0018 */


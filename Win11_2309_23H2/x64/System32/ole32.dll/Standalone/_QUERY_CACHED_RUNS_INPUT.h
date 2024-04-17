typedef struct _QUERY_CACHED_RUNS_INPUT
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Flags;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned long Min;
        /* 0x000c */ unsigned long Max;
      } /* size: 0x0008 */ BinRange;
      struct
      {
        /* 0x0008 */ __int64 Min;
        /* 0x0010 */ __int64 Max;
      } /* size: 0x0010 */ LcnRange;
      struct
      {
        /* 0x0008 */ __int64 Min;
        /* 0x0010 */ __int64 Max;
      } /* size: 0x0010 */ LengthRange;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ RunFilter;
  union
  {
    union
    {
      struct
      {
        /* 0x0018 */ unsigned long Min;
        /* 0x001c */ unsigned long Max;
      } /* size: 0x0008 */ BinRange;
      struct
      {
        /* 0x0018 */ __int64 Min;
        /* 0x0020 */ __int64 Max;
      } /* size: 0x0010 */ LengthRange;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ BinFilter;
} QUERY_CACHED_RUNS_INPUT, *PQUERY_CACHED_RUNS_INPUT; /* size: 0x0028 */


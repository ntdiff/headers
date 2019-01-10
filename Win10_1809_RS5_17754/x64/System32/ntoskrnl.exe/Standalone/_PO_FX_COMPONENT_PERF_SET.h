typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef enum _PO_FX_PERF_STATE_UNIT
{
  PoFxPerfStateUnitOther = 0,
  PoFxPerfStateUnitFrequency = 1,
  PoFxPerfStateUnitBandwidth = 2,
  PoFxPerfStateUnitMaximum = 3,
} PO_FX_PERF_STATE_UNIT, *PPO_FX_PERF_STATE_UNIT;

typedef enum _PO_FX_PERF_STATE_TYPE
{
  PoFxPerfStateTypeDiscrete = 0,
  PoFxPerfStateTypeRange = 1,
  PoFxPerfStateTypeMaximum = 2,
} PO_FX_PERF_STATE_TYPE, *PPO_FX_PERF_STATE_TYPE;

typedef struct _PO_FX_COMPONENT_PERF_SET
{
  /* 0x0000 */ struct _UNICODE_STRING Name;
  /* 0x0010 */ unsigned __int64 Flags;
  /* 0x0018 */ enum _PO_FX_PERF_STATE_UNIT Unit;
  /* 0x001c */ enum _PO_FX_PERF_STATE_TYPE Type;
  union
  {
    struct
    {
      /* 0x0020 */ unsigned long Count;
      /* 0x0028 */ struct _PO_FX_PERF_STATE* States;
    } /* size: 0x0010 */ Discrete;
    struct
    {
      /* 0x0020 */ unsigned __int64 Minimum;
      /* 0x0028 */ unsigned __int64 Maximum;
    } /* size: 0x0010 */ Range;
  }; /* size: 0x0010 */
} PO_FX_COMPONENT_PERF_SET, *PPO_FX_COMPONENT_PERF_SET; /* size: 0x0030 */


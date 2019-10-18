typedef struct _TIME_FIELDS
{
  /* 0x0000 */ short Year;
  /* 0x0002 */ short Month;
  /* 0x0004 */ short Day;
  /* 0x0006 */ short Hour;
  /* 0x0008 */ short Minute;
  /* 0x000a */ short Second;
  /* 0x000c */ short Milliseconds;
  /* 0x000e */ short Weekday;
} TIME_FIELDS, *PTIME_FIELDS; /* size: 0x0010 */


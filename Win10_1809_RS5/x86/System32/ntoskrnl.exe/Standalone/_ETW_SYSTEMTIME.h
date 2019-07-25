typedef struct _ETW_SYSTEMTIME
{
  /* 0x0000 */ unsigned short Year;
  /* 0x0002 */ unsigned short Month;
  /* 0x0004 */ unsigned short DayOfWeek;
  /* 0x0006 */ unsigned short Day;
  /* 0x0008 */ unsigned short Hour;
  /* 0x000a */ unsigned short Minute;
  /* 0x000c */ unsigned short Second;
  /* 0x000e */ unsigned short Milliseconds;
} ETW_SYSTEMTIME, *PETW_SYSTEMTIME; /* size: 0x0010 */


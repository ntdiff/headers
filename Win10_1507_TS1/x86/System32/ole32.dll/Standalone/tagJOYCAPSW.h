struct tagJOYCAPSW
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ wchar_t szPname[32];
  /* 0x0044 */ unsigned int wXmin;
  /* 0x0048 */ unsigned int wXmax;
  /* 0x004c */ unsigned int wYmin;
  /* 0x0050 */ unsigned int wYmax;
  /* 0x0054 */ unsigned int wZmin;
  /* 0x0058 */ unsigned int wZmax;
  /* 0x005c */ unsigned int wNumButtons;
  /* 0x0060 */ unsigned int wPeriodMin;
  /* 0x0064 */ unsigned int wPeriodMax;
  /* 0x0068 */ unsigned int wRmin;
  /* 0x006c */ unsigned int wRmax;
  /* 0x0070 */ unsigned int wUmin;
  /* 0x0074 */ unsigned int wUmax;
  /* 0x0078 */ unsigned int wVmin;
  /* 0x007c */ unsigned int wVmax;
  /* 0x0080 */ unsigned int wCaps;
  /* 0x0084 */ unsigned int wMaxAxes;
  /* 0x0088 */ unsigned int wNumAxes;
  /* 0x008c */ unsigned int wMaxButtons;
  /* 0x0090 */ wchar_t szRegKey[32];
  /* 0x00d0 */ wchar_t szOEMVxD[260];
}; /* size: 0x02d8 */


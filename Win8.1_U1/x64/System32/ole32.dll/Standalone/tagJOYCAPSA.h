struct tagJOYCAPSA
{
  /* 0x0000 */ unsigned short wMid;
  /* 0x0002 */ unsigned short wPid;
  /* 0x0004 */ char szPname[32];
  /* 0x0024 */ unsigned int wXmin;
  /* 0x0028 */ unsigned int wXmax;
  /* 0x002c */ unsigned int wYmin;
  /* 0x0030 */ unsigned int wYmax;
  /* 0x0034 */ unsigned int wZmin;
  /* 0x0038 */ unsigned int wZmax;
  /* 0x003c */ unsigned int wNumButtons;
  /* 0x0040 */ unsigned int wPeriodMin;
  /* 0x0044 */ unsigned int wPeriodMax;
  /* 0x0048 */ unsigned int wRmin;
  /* 0x004c */ unsigned int wRmax;
  /* 0x0050 */ unsigned int wUmin;
  /* 0x0054 */ unsigned int wUmax;
  /* 0x0058 */ unsigned int wVmin;
  /* 0x005c */ unsigned int wVmax;
  /* 0x0060 */ unsigned int wCaps;
  /* 0x0064 */ unsigned int wMaxAxes;
  /* 0x0068 */ unsigned int wNumAxes;
  /* 0x006c */ unsigned int wMaxButtons;
  /* 0x0070 */ char szRegKey[32];
  /* 0x0090 */ char szOEMVxD[260];
}; /* size: 0x0194 */


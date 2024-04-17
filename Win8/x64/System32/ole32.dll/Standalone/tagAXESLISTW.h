struct tagAXISINFOW
{
  /* 0x0000 */ long axMinValue;
  /* 0x0004 */ long axMaxValue;
  /* 0x0008 */ wchar_t axAxisName[16];
}; /* size: 0x0028 */

struct tagAXESLISTW
{
  /* 0x0000 */ unsigned long axlReserved;
  /* 0x0004 */ unsigned long axlNumAxes;
  /* 0x0008 */ struct tagAXISINFOW axlAxisInfo[16];
}; /* size: 0x0288 */


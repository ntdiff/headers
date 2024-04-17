struct tagAXISINFOA
{
  /* 0x0000 */ long axMinValue;
  /* 0x0004 */ long axMaxValue;
  /* 0x0008 */ unsigned char axAxisName[16];
}; /* size: 0x0018 */

struct tagAXESLISTA
{
  /* 0x0000 */ unsigned long axlReserved;
  /* 0x0004 */ unsigned long axlNumAxes;
  /* 0x0008 */ struct tagAXISINFOA axlAxisInfo[16];
}; /* size: 0x0188 */


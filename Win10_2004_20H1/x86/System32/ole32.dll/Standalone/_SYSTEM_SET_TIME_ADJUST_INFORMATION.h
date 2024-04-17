typedef struct _SYSTEM_SET_TIME_ADJUST_INFORMATION
{
  /* 0x0000 */ unsigned long TimeAdjustment;
  /* 0x0004 */ unsigned char Enable;
  /* 0x0005 */ char __PADDING__[3];
} SYSTEM_SET_TIME_ADJUST_INFORMATION, *PSYSTEM_SET_TIME_ADJUST_INFORMATION; /* size: 0x0008 */


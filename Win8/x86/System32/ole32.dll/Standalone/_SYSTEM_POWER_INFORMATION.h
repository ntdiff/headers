typedef struct _SYSTEM_POWER_INFORMATION
{
  /* 0x0000 */ unsigned long MaxIdlenessAllowed;
  /* 0x0004 */ unsigned long Idleness;
  /* 0x0008 */ unsigned long TimeRemaining;
  /* 0x000c */ unsigned char CoolingMode;
  /* 0x000d */ char __PADDING__[3];
} SYSTEM_POWER_INFORMATION, *PSYSTEM_POWER_INFORMATION; /* size: 0x0010 */


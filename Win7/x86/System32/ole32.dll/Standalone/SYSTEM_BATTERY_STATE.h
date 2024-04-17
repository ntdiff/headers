struct SYSTEM_BATTERY_STATE
{
  /* 0x0000 */ unsigned char AcOnLine;
  /* 0x0001 */ unsigned char BatteryPresent;
  /* 0x0002 */ unsigned char Charging;
  /* 0x0003 */ unsigned char Discharging;
  /* 0x0004 */ unsigned char Spare1[4];
  /* 0x0008 */ unsigned long MaxCapacity;
  /* 0x000c */ unsigned long RemainingCapacity;
  /* 0x0010 */ unsigned long Rate;
  /* 0x0014 */ unsigned long EstimatedTime;
  /* 0x0018 */ unsigned long DefaultAlert1;
  /* 0x001c */ unsigned long DefaultAlert2;
}; /* size: 0x0020 */


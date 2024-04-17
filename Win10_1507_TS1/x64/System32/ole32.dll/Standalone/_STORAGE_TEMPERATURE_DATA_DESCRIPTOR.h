typedef struct _STORAGE_TEMPERATURE_INFO
{
  /* 0x0000 */ unsigned short Index;
  /* 0x0002 */ short Temperature;
  /* 0x0004 */ short OverThreshold;
  /* 0x0006 */ short UnderThreshold;
  /* 0x0008 */ unsigned char OverThresholdChangable;
  /* 0x0009 */ unsigned char UnderThresholdChangable;
  /* 0x000a */ unsigned char EventGenerated;
  /* 0x000b */ unsigned char Reserved0;
  /* 0x000c */ unsigned long Reserved1;
} STORAGE_TEMPERATURE_INFO, *PSTORAGE_TEMPERATURE_INFO; /* size: 0x0010 */

typedef struct _STORAGE_TEMPERATURE_DATA_DESCRIPTOR
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ short CriticalTemperature;
  /* 0x000a */ short WarningTemperature;
  /* 0x000c */ unsigned short InfoCount;
  /* 0x000e */ unsigned char Reserved0[2];
  /* 0x0010 */ unsigned long Reserved1[2];
  /* 0x0018 */ struct _STORAGE_TEMPERATURE_INFO TemperatureInfo[1];
} STORAGE_TEMPERATURE_DATA_DESCRIPTOR, *PSTORAGE_TEMPERATURE_DATA_DESCRIPTOR; /* size: 0x0028 */


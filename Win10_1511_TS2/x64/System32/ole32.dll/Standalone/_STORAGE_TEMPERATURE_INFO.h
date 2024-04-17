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


typedef struct _STORAGE_TEMPERATURE_THRESHOLD
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long Size;
  /* 0x0008 */ unsigned short Flags;
  /* 0x000a */ unsigned short Index;
  /* 0x000c */ short Threshold;
  /* 0x000e */ unsigned char OverThreshold;
  /* 0x000f */ unsigned char Reserved;
} STORAGE_TEMPERATURE_THRESHOLD, *PSTORAGE_TEMPERATURE_THRESHOLD; /* size: 0x0010 */


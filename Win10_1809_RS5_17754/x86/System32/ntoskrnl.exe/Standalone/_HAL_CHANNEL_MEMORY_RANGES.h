typedef struct _HAL_CHANNEL_MEMORY_RANGES
{
  /* 0x0000 */ unsigned long PageFrameIndex;
  /* 0x0004 */ unsigned short MpnId;
  /* 0x0006 */ unsigned short Node;
  /* 0x0008 */ unsigned short Channel;
  /* 0x000a */ unsigned char IsPowerManageable;
  /* 0x000b */ unsigned char DeepPowerState;
} HAL_CHANNEL_MEMORY_RANGES, *PHAL_CHANNEL_MEMORY_RANGES; /* size: 0x000c */


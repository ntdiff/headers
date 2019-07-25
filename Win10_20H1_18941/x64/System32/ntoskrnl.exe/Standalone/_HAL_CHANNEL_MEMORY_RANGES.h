typedef struct _HAL_CHANNEL_MEMORY_RANGES
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned short MpnId;
  /* 0x000a */ unsigned short Node;
  /* 0x000c */ unsigned short Channel;
  /* 0x000e */ unsigned char IsPowerManageable;
  /* 0x000f */ unsigned char DeepPowerState;
} HAL_CHANNEL_MEMORY_RANGES, *PHAL_CHANNEL_MEMORY_RANGES; /* size: 0x0010 */


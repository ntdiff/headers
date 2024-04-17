typedef struct _SYSTEM_MEMORY_CHANNEL_INFORMATION
{
  /* 0x0000 */ unsigned long ChannelNumber;
  /* 0x0004 */ unsigned long ChannelHeatIndex;
  /* 0x0008 */ unsigned __int64 TotalPageCount;
  /* 0x0010 */ unsigned __int64 ZeroPageCount;
  /* 0x0018 */ unsigned __int64 FreePageCount;
  /* 0x0020 */ unsigned __int64 StandbyPageCount;
} SYSTEM_MEMORY_CHANNEL_INFORMATION, *PSYSTEM_MEMORY_CHANNEL_INFORMATION; /* size: 0x0028 */


typedef struct _TXFS_START_RM_INFORMATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 LogContainerSize;
  /* 0x0010 */ unsigned long LogContainerCountMin;
  /* 0x0014 */ unsigned long LogContainerCountMax;
  /* 0x0018 */ unsigned long LogGrowthIncrement;
  /* 0x001c */ unsigned long LogAutoShrinkPercentage;
  /* 0x0020 */ unsigned long TmLogPathOffset;
  /* 0x0024 */ unsigned short TmLogPathLength;
  /* 0x0026 */ unsigned short LoggingMode;
  /* 0x0028 */ unsigned short LogPathLength;
  /* 0x002a */ unsigned short Reserved;
  /* 0x002c */ wchar_t LogPath[1];
  /* 0x002e */ char __PADDING__[2];
} TXFS_START_RM_INFORMATION, *PTXFS_START_RM_INFORMATION; /* size: 0x0030 */


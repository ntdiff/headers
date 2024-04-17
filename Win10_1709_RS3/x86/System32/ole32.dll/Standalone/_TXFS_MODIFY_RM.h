typedef struct _TXFS_MODIFY_RM
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long LogContainerCountMax;
  /* 0x0008 */ unsigned long LogContainerCountMin;
  /* 0x000c */ unsigned long LogContainerCount;
  /* 0x0010 */ unsigned long LogGrowthIncrement;
  /* 0x0014 */ unsigned long LogAutoShrinkPercentage;
  /* 0x0018 */ unsigned __int64 Reserved;
  /* 0x0020 */ unsigned short LoggingMode;
  /* 0x0022 */ char __PADDING__[6];
} TXFS_MODIFY_RM, *PTXFS_MODIFY_RM; /* size: 0x0028 */


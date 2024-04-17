enum RTL_BSD_ITEM_TYPE
{
  RtlBsdItemVersionNumber = 0,
  RtlBsdItemProductType = 1,
  RtlBsdItemAabEnabled = 2,
  RtlBsdItemAabTimeout = 3,
  RtlBsdItemBootGood = 4,
  RtlBsdItemBootShutdown = 5,
  RtlBsdSleepInProgress = 6,
  RtlBsdPowerTransition = 7,
  RtlBsdItemBootAttemptCount = 8,
  RtlBsdItemBootCheckpoint = 9,
  RtlBsdItemBootId = 10,
  RtlBsdItemShutdownBootId = 11,
  RtlBsdItemReportedAbnormalShutdownBootId = 12,
  RtlBsdItemErrorInfo = 13,
  RtlBsdItemPowerButtonPressInfo = 14,
  RtlBsdItemChecksum = 15,
  RtlBsdPowerTransitionExtension = 16,
  RtlBsdItemMax = 17,
};

typedef struct _RTL_BSD_ITEM
{
  /* 0x0000 */ enum RTL_BSD_ITEM_TYPE Type;
  /* 0x0004 */ void* DataBuffer;
  /* 0x0008 */ unsigned long DataLength;
} RTL_BSD_ITEM, *PRTL_BSD_ITEM; /* size: 0x000c */


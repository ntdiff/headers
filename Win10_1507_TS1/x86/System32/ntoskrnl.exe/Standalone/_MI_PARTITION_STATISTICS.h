typedef struct _MI_PARTITION_STATISTICS
{
  /* 0x0000 */ unsigned long DeleteYield;
  /* 0x0004 */ unsigned long DeleteBad;
  /* 0x0008 */ unsigned long DeleteTrulyBad;
  /* 0x000c */ unsigned long DeleteLargePage;
  /* 0x0010 */ unsigned long DeleteLargePageRetry;
  /* 0x0014 */ unsigned long DeleteZeroFree;
  /* 0x0018 */ unsigned long DeleteTransition;
  /* 0x001c */ unsigned long DeleteStandbyReferenced;
  /* 0x0020 */ unsigned long DeleteStandbyRelinkFailed;
  /* 0x0024 */ unsigned long DeleteStandbySharedPagefile;
  /* 0x0028 */ unsigned long DeleteStandbySharedFile;
  /* 0x002c */ unsigned long DeleteModifiedReferenced;
  /* 0x0030 */ unsigned long DeleteModified;
  /* 0x0034 */ unsigned long DeleteModifiedNoWrite;
  /* 0x0038 */ unsigned long DeleteModifiedSharedPagefile;
  /* 0x003c */ unsigned long DeleteModifiedSharedFile;
  /* 0x0040 */ unsigned long DeleteActiveSharedPagefile1;
  /* 0x0044 */ unsigned long DeleteActiveSharedPagefile2;
  /* 0x0048 */ unsigned long DeleteActiveSharedFile;
  /* 0x004c */ unsigned long DeleteWriteDelay;
} MI_PARTITION_STATISTICS, *PMI_PARTITION_STATISTICS; /* size: 0x0050 */


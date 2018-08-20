typedef struct _RTL_HP_LFH_CONFIG
{
  /* 0x0000 */ unsigned long MaxBlockSize;
  /* 0x0004 */ unsigned long MaxSubsegmentSize;
  struct // _TAG_UNNAMED_155
  {
    /* 0x0008 */ unsigned long ForceEnable : 1; /* bit position: 0 */
  } /* size: 0x0004 */ Flags;
} RTL_HP_LFH_CONFIG, *PRTL_HP_LFH_CONFIG; /* size: 0x000c */


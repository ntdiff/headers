typedef struct _VI_CANCEL_GLOBALS
{
  /* 0x0000 */ unsigned long CancelLock;
  /* 0x0004 */ unsigned long IssueLock;
  /* 0x0008 */ long Counters[25];
} VI_CANCEL_GLOBALS, *PVI_CANCEL_GLOBALS; /* size: 0x006c */


typedef struct _VI_CANCEL_GLOBALS
{
  /* 0x0000 */ unsigned __int64 CancelLock;
  /* 0x0008 */ unsigned __int64 IssueLock;
  /* 0x0010 */ long Counters[25];
  /* 0x0074 */ long __PADDING__[1];
} VI_CANCEL_GLOBALS, *PVI_CANCEL_GLOBALS; /* size: 0x0078 */


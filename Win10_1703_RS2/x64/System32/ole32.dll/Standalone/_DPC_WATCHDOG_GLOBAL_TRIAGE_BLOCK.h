typedef struct _DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned short Revision;
  /* 0x0006 */ unsigned short Size;
  /* 0x0008 */ unsigned short DpcWatchdogProfileOffset;
  /* 0x000c */ unsigned long DpcWatchdogProfileLength;
} DPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK, *PDPC_WATCHDOG_GLOBAL_TRIAGE_BLOCK; /* size: 0x0010 */


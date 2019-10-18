typedef struct _LOADER_HIVE_RECOVERY_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long Recovered : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long LegacyRecovery : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long SoftRebootConflict : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long MostRecentLog : 3; /* bit position: 3 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long Spare : 27; /* bit position: 0 */
  /* 0x0008 */ unsigned long LogNextSequence;
  /* 0x000c */ unsigned long LogMinimumSequence;
  /* 0x0010 */ unsigned long LogCurrentOffset;
} LOADER_HIVE_RECOVERY_INFO, *PLOADER_HIVE_RECOVERY_INFO; /* size: 0x0014 */


typedef struct _SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Version : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long AllFlags : 24; /* bit position: 8 */
    }; /* bitfield */
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long Dummy : 8; /* bit position: 0 */
        /* 0x0000 */ unsigned long SingleDpcTimeLimitPresent : 1; /* bit position: 8 */
        /* 0x0000 */ unsigned long CumulativeDpcTimeLimitPresent : 1; /* bit position: 9 */
        /* 0x0000 */ unsigned long SingleDpcSoftTimeLimitPresent : 1; /* bit position: 10 */
        /* 0x0000 */ unsigned long CumulativeDpcSoftTimeLimitPresent : 1; /* bit position: 11 */
        /* 0x0000 */ unsigned long SingleDpcProfileThresholdPresent : 1; /* bit position: 12 */
        /* 0x0000 */ unsigned long CumulativeDpcProfileThresholdPresent : 1; /* bit position: 13 */
        /* 0x0000 */ unsigned long ProfileBufferSizePresent : 1; /* bit position: 14 */
        /* 0x0000 */ unsigned long Reserved : 17; /* bit position: 15 */
      }; /* bitfield */
    } /* size: 0x0004 */ Flags;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long SingleDpcTimeLimitMs;
  /* 0x0008 */ unsigned long CumulativeDpcTimeLimitMs;
  /* 0x000c */ unsigned long SingleDpcSoftTimeLimitMs;
  /* 0x0010 */ unsigned long CumulativeDpcSoftTimeLimitMs;
  /* 0x0014 */ unsigned long SingleDpcProfileThresholdMs;
  /* 0x0018 */ unsigned long CumulativeDpcProfileThresholdMs;
  /* 0x001c */ unsigned long ProfileBufferSizeBytes;
} SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2, *PSYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION_V2; /* size: 0x0020 */


typedef struct _SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION
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
        /* 0x0000 */ unsigned long Reserved : 20; /* bit position: 12 */
      }; /* bitfield */
    } /* size: 0x0004 */ Flags;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long SingleDpcTimeLimitMs;
  /* 0x0008 */ unsigned long CumulativeDpcTimeLimitMs;
  /* 0x000c */ unsigned long SingleDpcSoftTimeLimitMs;
  /* 0x0010 */ unsigned long CumulativeDpcSoftTimeLimitMs;
} SYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION, *PSYSTEM_DPC_WATCHDOG_CONFIGURATION_INFORMATION; /* size: 0x0014 */


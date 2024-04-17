typedef union _RATE_QUOTA_LIMIT
{
  union
  {
    /* 0x0000 */ unsigned long RateData;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long RatePhase : 4; /* bit position: 0 */
      /* 0x0000 */ unsigned long RatePercent : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT; /* size: 0x0004 */


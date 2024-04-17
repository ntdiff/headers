typedef union _RATE_QUOTA_LIMIT
{
  union
  {
    /* 0x0000 */ unsigned long RateData;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long RatePercent : 7; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved0 : 25; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} RATE_QUOTA_LIMIT, *PRATE_QUOTA_LIMIT; /* size: 0x0004 */


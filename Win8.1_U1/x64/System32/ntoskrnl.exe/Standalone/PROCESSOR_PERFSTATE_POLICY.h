struct PROCESSOR_PERFSTATE_POLICY
{
  /* 0x0000 */ unsigned long Revision;
  /* 0x0004 */ unsigned char MaxThrottle;
  /* 0x0005 */ unsigned char MinThrottle;
  /* 0x0006 */ unsigned char BusyAdjThreshold;
  union
  {
    /* 0x0007 */ unsigned char Spare;
    union
    {
      union
      {
        /* 0x0007 */ unsigned char AsUCHAR;
        struct /* bitfield */
        {
          /* 0x0007 */ unsigned char NoDomainAccounting : 1; /* bit position: 0 */
          /* 0x0007 */ unsigned char IncreasePolicy : 2; /* bit position: 1 */
          /* 0x0007 */ unsigned char DecreasePolicy : 2; /* bit position: 3 */
          /* 0x0007 */ unsigned char Reserved : 3; /* bit position: 5 */
        }; /* bitfield */
      }; /* size: 0x0001 */
    } /* size: 0x0001 */ Flags;
  }; /* size: 0x0001 */
  /* 0x0008 */ unsigned long TimeCheck;
  /* 0x000c */ unsigned long IncreaseTime;
  /* 0x0010 */ unsigned long DecreaseTime;
  /* 0x0014 */ unsigned long IncreasePercent;
  /* 0x0018 */ unsigned long DecreasePercent;
}; /* size: 0x001c */


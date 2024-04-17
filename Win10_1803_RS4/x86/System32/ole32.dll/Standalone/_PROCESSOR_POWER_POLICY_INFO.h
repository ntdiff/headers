typedef struct _PROCESSOR_POWER_POLICY_INFO
{
  /* 0x0000 */ unsigned long TimeCheck;
  /* 0x0004 */ unsigned long DemoteLimit;
  /* 0x0008 */ unsigned long PromoteLimit;
  /* 0x000c */ unsigned char DemotePercent;
  /* 0x000d */ unsigned char PromotePercent;
  /* 0x000e */ unsigned char Spare[2];
  struct /* bitfield */
  {
    /* 0x0010 */ unsigned long AllowDemotion : 1; /* bit position: 0 */
    /* 0x0010 */ unsigned long AllowPromotion : 1; /* bit position: 1 */
    /* 0x0010 */ unsigned long Reserved : 30; /* bit position: 2 */
  }; /* bitfield */
} PROCESSOR_POWER_POLICY_INFO, *PPROCESSOR_POWER_POLICY_INFO; /* size: 0x0014 */


struct PROCESSOR_IDLESTATE_INFO
{
  /* 0x0000 */ unsigned long TimeCheck;
  /* 0x0004 */ unsigned char DemotePercent;
  /* 0x0005 */ unsigned char PromotePercent;
  /* 0x0006 */ unsigned char Spare[2];
}; /* size: 0x0008 */

struct PROCESSOR_IDLESTATE_POLICY
{
  /* 0x0000 */ unsigned short Revision;
  union
  {
    union
    {
      /* 0x0002 */ unsigned short AsUSHORT;
      struct /* bitfield */
      {
        /* 0x0002 */ unsigned short AllowScaling : 1; /* bit position: 0 */
        /* 0x0002 */ unsigned short Disabled : 1; /* bit position: 1 */
        /* 0x0002 */ unsigned short Reserved : 14; /* bit position: 2 */
      }; /* bitfield */
    }; /* size: 0x0002 */
  } /* size: 0x0002 */ Flags;
  /* 0x0004 */ unsigned long PolicyCount;
  /* 0x0008 */ struct PROCESSOR_IDLESTATE_INFO Policy[3];
}; /* size: 0x0020 */


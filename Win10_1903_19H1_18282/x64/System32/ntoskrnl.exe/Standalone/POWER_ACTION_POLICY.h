typedef enum
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8,
} TAG_UNNAMED_40, *PTAG_UNNAMED_40;

struct POWER_ACTION_POLICY
{
  /* 0x0000 */ enum _TAG_UNNAMED_40 Action;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long EventCode;
}; /* size: 0x000c */


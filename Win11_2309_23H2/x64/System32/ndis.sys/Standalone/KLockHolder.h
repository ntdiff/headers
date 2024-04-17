typedef enum _TAG_UNNAMED_78
{
  Unlocked = 0,
  Shared = 1,
  Exclusive = 2,
} TAG_UNNAMED_78, *PTAG_UNNAMED_78;

class KCriticalRegion
{
  /* 0x0000 */ BOOL m_Entered;
}; /* size: 0x0001 */

class KLockHolder
{
  /* 0x0000 */ enum _TAG_UNNAMED_78 m_State;
  /* 0x0008 */ class KPushLockBase& m_Lock;
  /* 0x0010 */ class KCriticalRegion m_Region;
}; /* size: 0x0018 */


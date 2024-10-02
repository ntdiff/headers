typedef struct _MI_GETPAGE_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned long EntireField;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long AtDpc : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PageLockHeld : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long RecursingToDemote : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long PageAttributeOptional : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long PreferZero : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long RequireZero : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long ColorAlignment : 1; /* bit position: 6 */
      /* 0x0000 */ unsigned long SystemUse : 1; /* bit position: 7 */
      /* 0x0000 */ unsigned long PreserveAvailable : 1; /* bit position: 8 */
      /* 0x0000 */ unsigned long IgnoreAvailable : 1; /* bit position: 9 */
      /* 0x0000 */ unsigned long ContendForListLocks : 1; /* bit position: 10 */
      /* 0x0000 */ unsigned long DontDemoteLargePages : 1; /* bit position: 11 */
      /* 0x0000 */ unsigned long NodeMandatory : 1; /* bit position: 12 */
      /* 0x0000 */ unsigned long ChannelMandatory : 1; /* bit position: 13 */
      /* 0x0000 */ unsigned long DontDemote : 1; /* bit position: 14 */
      /* 0x0000 */ unsigned long DontDemote64KPages : 1; /* bit position: 15 */
      /* 0x0000 */ unsigned long NoStandby : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long NoStandbySwap : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long OnlyStandby : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long FreeZeroQueryIncludeLarge : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long MustBeZero : 12; /* bit position: 20 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} MI_GETPAGE_FLAGS, *PMI_GETPAGE_FLAGS; /* size: 0x0004 */


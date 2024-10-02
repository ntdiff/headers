typedef struct _JOBOBJECT_WAKE_FILTER
{
  /* 0x0000 */ unsigned long HighEdgeFilter;
  /* 0x0004 */ unsigned long LowEdgeFilter;
} JOBOBJECT_WAKE_FILTER, *PJOBOBJECT_WAKE_FILTER; /* size: 0x0008 */

typedef struct _JOBOBJECT_FREEZE_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long FreezeOperation : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long FilterOperation : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long SwapOperation : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SkipGraphicsOptimizations : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned char Freeze;
  /* 0x0005 */ unsigned char Swap;
  /* 0x0006 */ unsigned char Reserved0[2];
  /* 0x0008 */ struct _JOBOBJECT_WAKE_FILTER WakeFilter;
} JOBOBJECT_FREEZE_INFORMATION, *PJOBOBJECT_FREEZE_INFORMATION; /* size: 0x0010 */


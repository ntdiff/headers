typedef struct _MUTANT_BASIC_INFORMATION
{
  /* 0x0000 */ long CurrentCount;
  /* 0x0004 */ unsigned char OwnedByCaller;
  /* 0x0005 */ unsigned char AbandonedState;
  /* 0x0006 */ char __PADDING__[2];
} MUTANT_BASIC_INFORMATION, *PMUTANT_BASIC_INFORMATION; /* size: 0x0008 */


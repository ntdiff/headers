typedef struct _SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION
{
  union
  {
    /* 0x0000 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Unlockable : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long UnlockApplied : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long UnlockIdValid : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned char UnlockId[32];
} SYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION, *PSYSTEM_CODEINTEGRITY_UNLOCK_INFORMATION; /* size: 0x0024 */


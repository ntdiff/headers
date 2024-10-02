typedef struct _KMCE_RECOVERY_CONTEXT
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ unsigned long Reserved;
  union
  {
    /* 0x0008 */ unsigned __int64 PhysicalAddress;
    /* 0x0008 */ void* Record;
  }; /* size: 0x0008 */
} KMCE_RECOVERY_CONTEXT, *PKMCE_RECOVERY_CONTEXT; /* size: 0x0010 */


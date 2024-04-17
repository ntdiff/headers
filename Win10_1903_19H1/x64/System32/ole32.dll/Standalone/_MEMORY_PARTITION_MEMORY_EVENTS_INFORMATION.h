typedef struct _MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION
{
  union
  {
    union
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned long CommitEvents : 1; /* bit position: 0 */
        /* 0x0000 */ unsigned long Spare : 31; /* bit position: 1 */
      }; /* bitfield */
      /* 0x0000 */ unsigned long AllFlags;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ Flags;
  /* 0x0004 */ unsigned long HandleAttributes;
  /* 0x0008 */ unsigned long DesiredAccess;
  /* 0x0010 */ void* LowCommitCondition;
  /* 0x0018 */ void* HighCommitCondition;
  /* 0x0020 */ void* MaximumCommitCondition;
} MEMORY_PARTITION_MEMORY_EVENTS_INFORMATION, *PMEMORY_PARTITION_MEMORY_EVENTS_INFORMATION; /* size: 0x0028 */


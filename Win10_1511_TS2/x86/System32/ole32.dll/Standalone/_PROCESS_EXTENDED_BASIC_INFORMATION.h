typedef struct _PROCESS_BASIC_INFORMATION
{
  /* 0x0000 */ long ExitStatus;
  /* 0x0004 */ struct _PEB* PebBaseAddress;
  /* 0x0008 */ unsigned long AffinityMask;
  /* 0x000c */ long BasePriority;
  /* 0x0010 */ unsigned long UniqueProcessId;
  /* 0x0014 */ unsigned long InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION, *PPROCESS_BASIC_INFORMATION; /* size: 0x0018 */

typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ struct _PROCESS_BASIC_INFORMATION BasicInfo;
  union
  {
    /* 0x001c */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x001c */ unsigned long IsProtectedProcess : 1; /* bit position: 0 */
      /* 0x001c */ unsigned long IsWow64Process : 1; /* bit position: 1 */
      /* 0x001c */ unsigned long IsProcessDeleting : 1; /* bit position: 2 */
      /* 0x001c */ unsigned long IsCrossSessionCreate : 1; /* bit position: 3 */
      /* 0x001c */ unsigned long IsFrozen : 1; /* bit position: 4 */
      /* 0x001c */ unsigned long IsBackground : 1; /* bit position: 5 */
      /* 0x001c */ unsigned long IsStronglyNamed : 1; /* bit position: 6 */
      /* 0x001c */ unsigned long IsSecureProcess : 1; /* bit position: 7 */
      /* 0x001c */ unsigned long SpareBits : 24; /* bit position: 8 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_EXTENDED_BASIC_INFORMATION, *PPROCESS_EXTENDED_BASIC_INFORMATION; /* size: 0x0020 */


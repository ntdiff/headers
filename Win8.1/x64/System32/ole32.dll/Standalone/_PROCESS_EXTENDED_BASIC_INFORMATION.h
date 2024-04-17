typedef struct _PROCESS_BASIC_INFORMATION
{
  /* 0x0000 */ long ExitStatus;
  /* 0x0008 */ struct _PEB* PebBaseAddress;
  /* 0x0010 */ unsigned __int64 AffinityMask;
  /* 0x0018 */ long BasePriority;
  /* 0x0020 */ unsigned __int64 UniqueProcessId;
  /* 0x0028 */ unsigned __int64 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION, *PPROCESS_BASIC_INFORMATION; /* size: 0x0030 */

typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ struct _PROCESS_BASIC_INFORMATION BasicInfo;
  union
  {
    /* 0x0038 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0038 */ unsigned long IsProtectedProcess : 1; /* bit position: 0 */
      /* 0x0038 */ unsigned long IsWow64Process : 1; /* bit position: 1 */
      /* 0x0038 */ unsigned long IsProcessDeleting : 1; /* bit position: 2 */
      /* 0x0038 */ unsigned long IsCrossSessionCreate : 1; /* bit position: 3 */
      /* 0x0038 */ unsigned long IsFrozen : 1; /* bit position: 4 */
      /* 0x0038 */ unsigned long IsBackground : 1; /* bit position: 5 */
      /* 0x0038 */ unsigned long IsStronglyNamed : 1; /* bit position: 6 */
      /* 0x0038 */ unsigned long SpareBits : 25; /* bit position: 7 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x003c */ long __PADDING__[1];
} PROCESS_EXTENDED_BASIC_INFORMATION, *PPROCESS_EXTENDED_BASIC_INFORMATION; /* size: 0x0040 */


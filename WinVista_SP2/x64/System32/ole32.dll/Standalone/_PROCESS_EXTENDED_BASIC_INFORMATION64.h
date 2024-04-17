typedef struct _PROCESS_BASIC_INFORMATION64
{
  /* 0x0000 */ long ExitStatus;
  /* 0x0004 */ unsigned int Pad1;
  /* 0x0008 */ unsigned __int64 PebBaseAddress;
  /* 0x0010 */ unsigned __int64 AffinityMask;
  /* 0x0018 */ long BasePriority;
  /* 0x001c */ unsigned int Pad2;
  /* 0x0020 */ unsigned __int64 UniqueProcessId;
  /* 0x0028 */ unsigned __int64 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION64, *PPROCESS_BASIC_INFORMATION64; /* size: 0x0030 */

typedef struct _PROCESS_EXTENDED_BASIC_INFORMATION64
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ struct _PROCESS_BASIC_INFORMATION64 BasicInfo;
  union
  {
    /* 0x0038 */ unsigned int Flags;
    struct /* bitfield */
    {
      /* 0x0038 */ unsigned int IsProtectedProcess : 1; /* bit position: 0 */
      /* 0x0038 */ unsigned int IsWow64Process : 1; /* bit position: 1 */
      /* 0x0038 */ unsigned int IsProcessDeleting : 1; /* bit position: 2 */
      /* 0x0038 */ unsigned int IsCrossSessionCreate : 1; /* bit position: 3 */
      /* 0x0038 */ unsigned int SpareBits : 28; /* bit position: 4 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x003c */ long __PADDING__[1];
} PROCESS_EXTENDED_BASIC_INFORMATION64, *PPROCESS_EXTENDED_BASIC_INFORMATION64; /* size: 0x0040 */


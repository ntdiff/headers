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


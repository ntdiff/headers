typedef struct _PROCESS_BASIC_INFORMATION
{
  /* 0x0000 */ long ExitStatus;
  /* 0x0008 */ struct _PEB* PebBaseAddress;
  /* 0x0010 */ unsigned __int64 AffinityMask;
  /* 0x0018 */ long BasePriority;
  /* 0x0020 */ unsigned __int64 UniqueProcessId;
  /* 0x0028 */ unsigned __int64 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION, *PPROCESS_BASIC_INFORMATION; /* size: 0x0030 */


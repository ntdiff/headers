typedef struct _PROCESS_BASIC_INFORMATION
{
  /* 0x0000 */ long ExitStatus;
  /* 0x0004 */ struct _PEB* PebBaseAddress;
  /* 0x0008 */ unsigned long AffinityMask;
  /* 0x000c */ long BasePriority;
  /* 0x0010 */ unsigned long UniqueProcessId;
  /* 0x0014 */ unsigned long InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION, *PPROCESS_BASIC_INFORMATION; /* size: 0x0018 */


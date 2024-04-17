typedef struct _SYSTEM_LOOKASIDE_INFORMATION
{
  /* 0x0000 */ unsigned short CurrentDepth;
  /* 0x0002 */ unsigned short MaximumDepth;
  /* 0x0004 */ unsigned long TotalAllocates;
  /* 0x0008 */ unsigned long AllocateMisses;
  /* 0x000c */ unsigned long TotalFrees;
  /* 0x0010 */ unsigned long FreeMisses;
  /* 0x0014 */ unsigned long Type;
  /* 0x0018 */ unsigned long Tag;
  /* 0x001c */ unsigned long Size;
} SYSTEM_LOOKASIDE_INFORMATION, *PSYSTEM_LOOKASIDE_INFORMATION; /* size: 0x0020 */


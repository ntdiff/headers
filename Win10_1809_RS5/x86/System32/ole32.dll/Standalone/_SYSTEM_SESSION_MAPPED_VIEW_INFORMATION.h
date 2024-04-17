typedef struct _SYSTEM_SESSION_MAPPED_VIEW_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long SessionId;
  /* 0x0008 */ unsigned long ViewFailures;
  /* 0x000c */ unsigned long NumberOfBytesAvailable;
  /* 0x0010 */ unsigned long NumberOfBytesAvailableContiguous;
} SYSTEM_SESSION_MAPPED_VIEW_INFORMATION, *PSYSTEM_SESSION_MAPPED_VIEW_INFORMATION; /* size: 0x0014 */


typedef struct _SYSTEM_POOLTAG
{
  union
  {
    /* 0x0000 */ unsigned char Tag[4];
    /* 0x0000 */ unsigned long TagUlong;
  }; /* size: 0x0004 */
  /* 0x0004 */ unsigned long PagedAllocs;
  /* 0x0008 */ unsigned long PagedFrees;
  /* 0x000c */ unsigned long PagedUsed;
  /* 0x0010 */ unsigned long NonPagedAllocs;
  /* 0x0014 */ unsigned long NonPagedFrees;
  /* 0x0018 */ unsigned long NonPagedUsed;
} SYSTEM_POOLTAG, *PSYSTEM_POOLTAG; /* size: 0x001c */

typedef struct _SYSTEM_SESSION_POOLTAG_INFORMATION
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned long SessionId;
  /* 0x0008 */ unsigned long Count;
  /* 0x000c */ struct _SYSTEM_POOLTAG TagInfo[1];
} SYSTEM_SESSION_POOLTAG_INFORMATION, *PSYSTEM_SESSION_POOLTAG_INFORMATION; /* size: 0x0028 */


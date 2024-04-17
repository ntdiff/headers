typedef struct _SYSTEM_BIGPOOL_ENTRY
{
  union
  {
    /* 0x0000 */ void* VirtualAddress;
    /* 0x0000 */ unsigned __int64 NonPaged : 1; /* bit position: 0 */
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 SizeInBytes;
  union
  {
    /* 0x0010 */ unsigned char Tag[4];
    /* 0x0010 */ unsigned long TagUlong;
  }; /* size: 0x0004 */
  /* 0x0014 */ long __PADDING__[1];
} SYSTEM_BIGPOOL_ENTRY, *PSYSTEM_BIGPOOL_ENTRY; /* size: 0x0018 */

typedef struct _SYSTEM_SESSION_BIGPOOL_INFORMATION
{
  /* 0x0000 */ unsigned __int64 NextEntryOffset;
  /* 0x0008 */ unsigned long SessionId;
  /* 0x000c */ unsigned long Count;
  /* 0x0010 */ struct _SYSTEM_BIGPOOL_ENTRY AllocatedInfo[1];
} SYSTEM_SESSION_BIGPOOL_INFORMATION, *PSYSTEM_SESSION_BIGPOOL_INFORMATION; /* size: 0x0028 */


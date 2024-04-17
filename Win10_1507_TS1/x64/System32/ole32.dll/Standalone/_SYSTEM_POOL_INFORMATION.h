typedef struct _SYSTEM_POOL_ENTRY
{
  /* 0x0000 */ unsigned char Allocated;
  /* 0x0001 */ unsigned char Spare0;
  /* 0x0002 */ unsigned short AllocatorBackTraceIndex;
  /* 0x0004 */ unsigned long Size;
  union
  {
    /* 0x0008 */ unsigned char Tag[4];
    /* 0x0008 */ unsigned long TagUlong;
    /* 0x0008 */ void* ProcessChargedQuota;
  }; /* size: 0x0008 */
} SYSTEM_POOL_ENTRY, *PSYSTEM_POOL_ENTRY; /* size: 0x0010 */

typedef struct _SYSTEM_POOL_INFORMATION
{
  /* 0x0000 */ unsigned __int64 TotalSize;
  /* 0x0008 */ void* FirstEntry;
  /* 0x0010 */ unsigned short EntryOverhead;
  /* 0x0012 */ unsigned char PoolTagPresent;
  /* 0x0013 */ unsigned char Spare0;
  /* 0x0014 */ unsigned long NumberOfEntries;
  /* 0x0018 */ struct _SYSTEM_POOL_ENTRY Entries[1];
} SYSTEM_POOL_INFORMATION, *PSYSTEM_POOL_INFORMATION; /* size: 0x0028 */


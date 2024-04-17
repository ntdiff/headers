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


typedef struct _SYSTEM_POOL_LIMIT_MEM_INFO
{
  /* 0x0000 */ unsigned __int64 MemoryLimit;
  /* 0x0008 */ unsigned __int64 NotificationLimit;
} SYSTEM_POOL_LIMIT_MEM_INFO, *PSYSTEM_POOL_LIMIT_MEM_INFO; /* size: 0x0010 */

typedef struct _WNF_STATE_NAME
{
  /* 0x0000 */ unsigned long Data[2];
} WNF_STATE_NAME, *PWNF_STATE_NAME; /* size: 0x0008 */

typedef struct _SYSTEM_POOL_LIMIT_INFO
{
  /* 0x0000 */ unsigned long PoolTag;
  /* 0x0008 */ struct _SYSTEM_POOL_LIMIT_MEM_INFO MemLimits[2];
  /* 0x0028 */ struct _WNF_STATE_NAME NotificationHandle;
} SYSTEM_POOL_LIMIT_INFO, *PSYSTEM_POOL_LIMIT_INFO; /* size: 0x0030 */

typedef struct _SYSTEM_POOL_LIMIT_INFORMATION
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long EntryCount;
  /* 0x0008 */ struct _SYSTEM_POOL_LIMIT_INFO LimitEntries[1];
} SYSTEM_POOL_LIMIT_INFORMATION, *PSYSTEM_POOL_LIMIT_INFORMATION; /* size: 0x0038 */


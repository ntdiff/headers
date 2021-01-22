typedef struct _POOL_LIMIT_INFO
{
  /* 0x0000 */ unsigned __int64 HardMemoryLimit;
  /* 0x0008 */ unsigned __int64 NotificationLimit;
  /* 0x0010 */ unsigned __int64 MemoryIssued;
} POOL_LIMIT_INFO, *PPOOL_LIMIT_INFO; /* size: 0x0018 */


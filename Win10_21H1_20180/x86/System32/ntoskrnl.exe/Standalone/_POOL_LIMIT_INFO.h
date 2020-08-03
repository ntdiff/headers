typedef struct _POOL_LIMIT_INFO
{
  /* 0x0000 */ unsigned long HardMemoryLimit;
  /* 0x0004 */ unsigned long NotificationLimit;
  /* 0x0008 */ unsigned long MemoryIssued;
} POOL_LIMIT_INFO, *PPOOL_LIMIT_INFO; /* size: 0x000c */


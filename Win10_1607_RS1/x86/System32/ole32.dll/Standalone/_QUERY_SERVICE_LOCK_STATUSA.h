typedef struct _QUERY_SERVICE_LOCK_STATUSA
{
  /* 0x0000 */ unsigned long fIsLocked;
  /* 0x0004 */ char* lpLockOwner;
  /* 0x0008 */ unsigned long dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSA, *PQUERY_SERVICE_LOCK_STATUSA; /* size: 0x000c */


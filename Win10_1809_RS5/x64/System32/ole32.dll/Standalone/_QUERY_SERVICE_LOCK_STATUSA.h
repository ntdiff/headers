typedef struct _QUERY_SERVICE_LOCK_STATUSA
{
  /* 0x0000 */ unsigned long fIsLocked;
  /* 0x0008 */ char* lpLockOwner;
  /* 0x0010 */ unsigned long dwLockDuration;
  /* 0x0014 */ long __PADDING__[1];
} QUERY_SERVICE_LOCK_STATUSA, *PQUERY_SERVICE_LOCK_STATUSA; /* size: 0x0018 */


typedef struct _QUERY_SERVICE_LOCK_STATUSW
{
  /* 0x0000 */ unsigned long fIsLocked;
  /* 0x0004 */ wchar_t* lpLockOwner;
  /* 0x0008 */ unsigned long dwLockDuration;
} QUERY_SERVICE_LOCK_STATUSW, *PQUERY_SERVICE_LOCK_STATUSW; /* size: 0x000c */


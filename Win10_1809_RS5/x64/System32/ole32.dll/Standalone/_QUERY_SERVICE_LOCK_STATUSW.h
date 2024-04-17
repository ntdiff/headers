typedef struct _QUERY_SERVICE_LOCK_STATUSW
{
  /* 0x0000 */ unsigned long fIsLocked;
  /* 0x0008 */ wchar_t* lpLockOwner;
  /* 0x0010 */ unsigned long dwLockDuration;
  /* 0x0014 */ long __PADDING__[1];
} QUERY_SERVICE_LOCK_STATUSW, *PQUERY_SERVICE_LOCK_STATUSW; /* size: 0x0018 */


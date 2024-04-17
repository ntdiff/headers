typedef struct _GLOBAL_SHARED_CRITICAL_SECTION
{
  /* 0x0000 */ long LockCount;
  /* 0x0004 */ long RecursionCount;
  /* 0x0008 */ unsigned long OwningThread;
} GLOBAL_SHARED_CRITICAL_SECTION, *PGLOBAL_SHARED_CRITICAL_SECTION; /* size: 0x000c */


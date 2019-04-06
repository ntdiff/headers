typedef struct _CACHE_MANAGER_CALLBACKS
{
  /* 0x0000 */ void* AcquireForLazyWrite /* function */;
  /* 0x0008 */ void* ReleaseFromLazyWrite /* function */;
  /* 0x0010 */ void* AcquireForReadAhead /* function */;
  /* 0x0018 */ void* ReleaseFromReadAhead /* function */;
} CACHE_MANAGER_CALLBACKS, *PCACHE_MANAGER_CALLBACKS; /* size: 0x0020 */


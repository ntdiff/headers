typedef struct _CACHE_MANAGER_CALLBACK_FUNCTIONS
{
  /* 0x0000 */ void* AcquireForLazyWriteEx /* function */;
  /* 0x0008 */ void* ReleaseFromLazyWrite /* function */;
  /* 0x0010 */ void* AcquireForReadAhead /* function */;
  /* 0x0018 */ void* ReleaseFromReadAhead /* function */;
} CACHE_MANAGER_CALLBACK_FUNCTIONS, *PCACHE_MANAGER_CALLBACK_FUNCTIONS; /* size: 0x0020 */


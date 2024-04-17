typedef struct _CACHE_MANAGER_CALLBACK_FUNCTIONS
{
  /* 0x0000 */ void* AcquireForLazyWriteEx /* function */;
  /* 0x0008 */ void* ReleaseFromLazyWrite /* function */;
  /* 0x0010 */ void* AcquireForReadAhead /* function */;
  /* 0x0018 */ void* ReleaseFromReadAhead /* function */;
} CACHE_MANAGER_CALLBACK_FUNCTIONS, *PCACHE_MANAGER_CALLBACK_FUNCTIONS; /* size: 0x0020 */

typedef struct _CACHE_MANAGER_CALLBACKS_EX
{
  /* 0x0000 */ unsigned short Version;
  /* 0x0002 */ unsigned short Size;
  /* 0x0008 */ struct _CACHE_MANAGER_CALLBACK_FUNCTIONS Functions;
} CACHE_MANAGER_CALLBACKS_EX, *PCACHE_MANAGER_CALLBACKS_EX; /* size: 0x0028 */


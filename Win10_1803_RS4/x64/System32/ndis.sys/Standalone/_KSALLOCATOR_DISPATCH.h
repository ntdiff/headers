typedef struct _KSALLOCATOR_DISPATCH
{
  /* 0x0000 */ void* InitializeAllocator /* function */;
  /* 0x0008 */ void* DeleteAllocator /* function */;
  /* 0x0010 */ void* Allocate /* function */;
  /* 0x0018 */ void* Free /* function */;
} KSALLOCATOR_DISPATCH, *PKSALLOCATOR_DISPATCH; /* size: 0x0020 */


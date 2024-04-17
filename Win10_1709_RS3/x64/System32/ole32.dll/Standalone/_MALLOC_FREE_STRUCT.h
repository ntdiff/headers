typedef struct _MALLOC_FREE_STRUCT
{
  /* 0x0000 */ void* pfnAllocate /* function */;
  /* 0x0008 */ void* pfnFree /* function */;
} MALLOC_FREE_STRUCT, *PMALLOC_FREE_STRUCT; /* size: 0x0010 */


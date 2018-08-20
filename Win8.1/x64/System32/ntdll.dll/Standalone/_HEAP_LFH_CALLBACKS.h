typedef struct _HEAP_LFH_CALLBACKS
{
  /* 0x0000 */ void* Allocate /* function */;
  /* 0x0008 */ void* Free /* function */;
  /* 0x0010 */ void* Commit /* function */;
  /* 0x0018 */ void* Decommit /* function */;
} HEAP_LFH_CALLBACKS, *PHEAP_LFH_CALLBACKS; /* size: 0x0020 */


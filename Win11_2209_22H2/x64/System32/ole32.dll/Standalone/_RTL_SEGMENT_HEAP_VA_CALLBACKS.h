typedef struct _RTL_SEGMENT_HEAP_VA_CALLBACKS
{
  /* 0x0000 */ void* CallbackContext;
  /* 0x0008 */ void* AllocateVirtualMemory /* function */;
  /* 0x0010 */ void* FreeVirtualMemory /* function */;
  /* 0x0018 */ void* QueryVirtualMemory /* function */;
} RTL_SEGMENT_HEAP_VA_CALLBACKS, *PRTL_SEGMENT_HEAP_VA_CALLBACKS; /* size: 0x0020 */


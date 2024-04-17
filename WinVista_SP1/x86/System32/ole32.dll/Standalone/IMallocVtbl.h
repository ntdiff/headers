struct IMallocVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Alloc /* function */;
  /* 0x0010 */ void* Realloc /* function */;
  /* 0x0014 */ void* Free /* function */;
  /* 0x0018 */ void* GetSize /* function */;
  /* 0x001c */ void* DidAlloc /* function */;
  /* 0x0020 */ void* HeapMinimize /* function */;
}; /* size: 0x0024 */


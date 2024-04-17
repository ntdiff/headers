struct IMallocVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* Alloc /* function */;
  /* 0x0020 */ void* Realloc /* function */;
  /* 0x0028 */ void* Free /* function */;
  /* 0x0030 */ void* GetSize /* function */;
  /* 0x0038 */ void* DidAlloc /* function */;
  /* 0x0040 */ void* HeapMinimize /* function */;
}; /* size: 0x0048 */


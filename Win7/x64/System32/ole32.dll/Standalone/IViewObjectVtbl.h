struct IViewObjectVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* Draw /* function */;
  /* 0x0020 */ void* GetColorSet /* function */;
  /* 0x0028 */ void* Freeze /* function */;
  /* 0x0030 */ void* Unfreeze /* function */;
  /* 0x0038 */ void* SetAdvise /* function */;
  /* 0x0040 */ void* GetAdvise /* function */;
}; /* size: 0x0048 */


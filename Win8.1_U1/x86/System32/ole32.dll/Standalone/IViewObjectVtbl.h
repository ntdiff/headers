struct IViewObjectVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* Draw /* function */;
  /* 0x0010 */ void* GetColorSet /* function */;
  /* 0x0014 */ void* Freeze /* function */;
  /* 0x0018 */ void* Unfreeze /* function */;
  /* 0x001c */ void* SetAdvise /* function */;
  /* 0x0020 */ void* GetAdvise /* function */;
}; /* size: 0x0024 */


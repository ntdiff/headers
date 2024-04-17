struct IMonikerVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetClassID /* function */;
  /* 0x0010 */ void* IsDirty /* function */;
  /* 0x0014 */ void* Load /* function */;
  /* 0x0018 */ void* Save /* function */;
  /* 0x001c */ void* GetSizeMax /* function */;
  /* 0x0020 */ void* BindToObject /* function */;
  /* 0x0024 */ void* BindToStorage /* function */;
  /* 0x0028 */ void* Reduce /* function */;
  /* 0x002c */ void* ComposeWith /* function */;
  /* 0x0030 */ void* Enum /* function */;
  /* 0x0034 */ void* IsEqual /* function */;
  /* 0x0038 */ void* Hash /* function */;
  /* 0x003c */ void* IsRunning /* function */;
  /* 0x0040 */ void* GetTimeOfLastChange /* function */;
  /* 0x0044 */ void* Inverse /* function */;
  /* 0x0048 */ void* CommonPrefixWith /* function */;
  /* 0x004c */ void* RelativePathTo /* function */;
  /* 0x0050 */ void* GetDisplayName /* function */;
  /* 0x0054 */ void* ParseDisplayName /* function */;
  /* 0x0058 */ void* IsSystemMoniker /* function */;
}; /* size: 0x005c */


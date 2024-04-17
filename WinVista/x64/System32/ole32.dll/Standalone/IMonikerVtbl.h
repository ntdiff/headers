struct IMonikerVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetClassID /* function */;
  /* 0x0020 */ void* IsDirty /* function */;
  /* 0x0028 */ void* Load /* function */;
  /* 0x0030 */ void* Save /* function */;
  /* 0x0038 */ void* GetSizeMax /* function */;
  /* 0x0040 */ void* BindToObject /* function */;
  /* 0x0048 */ void* BindToStorage /* function */;
  /* 0x0050 */ void* Reduce /* function */;
  /* 0x0058 */ void* ComposeWith /* function */;
  /* 0x0060 */ void* Enum /* function */;
  /* 0x0068 */ void* IsEqual /* function */;
  /* 0x0070 */ void* Hash /* function */;
  /* 0x0078 */ void* IsRunning /* function */;
  /* 0x0080 */ void* GetTimeOfLastChange /* function */;
  /* 0x0088 */ void* Inverse /* function */;
  /* 0x0090 */ void* CommonPrefixWith /* function */;
  /* 0x0098 */ void* RelativePathTo /* function */;
  /* 0x00a0 */ void* GetDisplayName /* function */;
  /* 0x00a8 */ void* ParseDisplayName /* function */;
  /* 0x00b0 */ void* IsSystemMoniker /* function */;
}; /* size: 0x00b8 */


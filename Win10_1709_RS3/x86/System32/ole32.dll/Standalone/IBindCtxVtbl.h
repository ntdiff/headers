struct IBindCtxVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* RegisterObjectBound /* function */;
  /* 0x0010 */ void* RevokeObjectBound /* function */;
  /* 0x0014 */ void* ReleaseBoundObjects /* function */;
  /* 0x0018 */ void* SetBindOptions /* function */;
  /* 0x001c */ void* GetBindOptions /* function */;
  /* 0x0020 */ void* GetRunningObjectTable /* function */;
  /* 0x0024 */ void* RegisterObjectParam /* function */;
  /* 0x0028 */ void* GetObjectParam /* function */;
  /* 0x002c */ void* EnumObjectParam /* function */;
  /* 0x0030 */ void* RevokeObjectParam /* function */;
}; /* size: 0x0034 */


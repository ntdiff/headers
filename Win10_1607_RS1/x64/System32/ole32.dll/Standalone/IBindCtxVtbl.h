struct IBindCtxVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* RegisterObjectBound /* function */;
  /* 0x0020 */ void* RevokeObjectBound /* function */;
  /* 0x0028 */ void* ReleaseBoundObjects /* function */;
  /* 0x0030 */ void* SetBindOptions /* function */;
  /* 0x0038 */ void* GetBindOptions /* function */;
  /* 0x0040 */ void* GetRunningObjectTable /* function */;
  /* 0x0048 */ void* RegisterObjectParam /* function */;
  /* 0x0050 */ void* GetObjectParam /* function */;
  /* 0x0058 */ void* EnumObjectParam /* function */;
  /* 0x0060 */ void* RevokeObjectParam /* function */;
}; /* size: 0x0068 */


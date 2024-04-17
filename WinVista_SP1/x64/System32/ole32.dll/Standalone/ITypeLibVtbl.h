struct ITypeLibVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetTypeInfoCount /* function */;
  /* 0x0020 */ void* GetTypeInfo /* function */;
  /* 0x0028 */ void* GetTypeInfoType /* function */;
  /* 0x0030 */ void* GetTypeInfoOfGuid /* function */;
  /* 0x0038 */ void* GetLibAttr /* function */;
  /* 0x0040 */ void* GetTypeComp /* function */;
  /* 0x0048 */ void* GetDocumentation /* function */;
  /* 0x0050 */ void* IsName /* function */;
  /* 0x0058 */ void* FindName /* function */;
  /* 0x0060 */ void* ReleaseTLibAttr /* function */;
}; /* size: 0x0068 */


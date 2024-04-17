struct ITypeLibVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetTypeInfoCount /* function */;
  /* 0x0010 */ void* GetTypeInfo /* function */;
  /* 0x0014 */ void* GetTypeInfoType /* function */;
  /* 0x0018 */ void* GetTypeInfoOfGuid /* function */;
  /* 0x001c */ void* GetLibAttr /* function */;
  /* 0x0020 */ void* GetTypeComp /* function */;
  /* 0x0024 */ void* GetDocumentation /* function */;
  /* 0x0028 */ void* IsName /* function */;
  /* 0x002c */ void* FindName /* function */;
  /* 0x0030 */ void* ReleaseTLibAttr /* function */;
}; /* size: 0x0034 */


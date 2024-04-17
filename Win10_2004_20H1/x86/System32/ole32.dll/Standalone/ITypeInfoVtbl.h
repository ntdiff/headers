struct ITypeInfoVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0004 */ void* AddRef /* function */;
  /* 0x0008 */ void* Release /* function */;
  /* 0x000c */ void* GetTypeAttr /* function */;
  /* 0x0010 */ void* GetTypeComp /* function */;
  /* 0x0014 */ void* GetFuncDesc /* function */;
  /* 0x0018 */ void* GetVarDesc /* function */;
  /* 0x001c */ void* GetNames /* function */;
  /* 0x0020 */ void* GetRefTypeOfImplType /* function */;
  /* 0x0024 */ void* GetImplTypeFlags /* function */;
  /* 0x0028 */ void* GetIDsOfNames /* function */;
  /* 0x002c */ void* Invoke /* function */;
  /* 0x0030 */ void* GetDocumentation /* function */;
  /* 0x0034 */ void* GetDllEntry /* function */;
  /* 0x0038 */ void* GetRefTypeInfo /* function */;
  /* 0x003c */ void* AddressOfMember /* function */;
  /* 0x0040 */ void* CreateInstance /* function */;
  /* 0x0044 */ void* GetMops /* function */;
  /* 0x0048 */ void* GetContainingTypeLib /* function */;
  /* 0x004c */ void* ReleaseTypeAttr /* function */;
  /* 0x0050 */ void* ReleaseFuncDesc /* function */;
  /* 0x0054 */ void* ReleaseVarDesc /* function */;
}; /* size: 0x0058 */


struct ITypeInfoVtbl
{
  /* 0x0000 */ void* QueryInterface /* function */;
  /* 0x0008 */ void* AddRef /* function */;
  /* 0x0010 */ void* Release /* function */;
  /* 0x0018 */ void* GetTypeAttr /* function */;
  /* 0x0020 */ void* GetTypeComp /* function */;
  /* 0x0028 */ void* GetFuncDesc /* function */;
  /* 0x0030 */ void* GetVarDesc /* function */;
  /* 0x0038 */ void* GetNames /* function */;
  /* 0x0040 */ void* GetRefTypeOfImplType /* function */;
  /* 0x0048 */ void* GetImplTypeFlags /* function */;
  /* 0x0050 */ void* GetIDsOfNames /* function */;
  /* 0x0058 */ void* Invoke /* function */;
  /* 0x0060 */ void* GetDocumentation /* function */;
  /* 0x0068 */ void* GetDllEntry /* function */;
  /* 0x0070 */ void* GetRefTypeInfo /* function */;
  /* 0x0078 */ void* AddressOfMember /* function */;
  /* 0x0080 */ void* CreateInstance /* function */;
  /* 0x0088 */ void* GetMops /* function */;
  /* 0x0090 */ void* GetContainingTypeLib /* function */;
  /* 0x0098 */ void* ReleaseTypeAttr /* function */;
  /* 0x00a0 */ void* ReleaseFuncDesc /* function */;
  /* 0x00a8 */ void* ReleaseVarDesc /* function */;
}; /* size: 0x00b0 */


struct tagProxyFileInfo
{
  /* 0x0000 */ struct tagCInterfaceProxyVtbl* const* pProxyVtblList;
  /* 0x0008 */ struct tagCInterfaceStubVtbl* const* pStubVtblList;
  /* 0x0010 */ const char* const* pNamesArray;
  /* 0x0018 */ const struct _GUID** pDelegatedIIDs;
  /* 0x0020 */ void* const pIIDLookupRtn /* function */;
  /* 0x0028 */ unsigned short TableSize;
  /* 0x002a */ unsigned short TableVersion;
  /* 0x0030 */ const struct _GUID** pAsyncIIDLookup;
  /* 0x0038 */ __int64 Filler2;
  /* 0x0040 */ __int64 Filler3;
  /* 0x0048 */ __int64 Filler4;
}; /* size: 0x0050 */


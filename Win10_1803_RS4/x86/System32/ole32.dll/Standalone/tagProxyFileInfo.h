struct tagProxyFileInfo
{
  /* 0x0000 */ struct tagCInterfaceProxyVtbl* const* pProxyVtblList;
  /* 0x0004 */ struct tagCInterfaceStubVtbl* const* pStubVtblList;
  /* 0x0008 */ const char* const* pNamesArray;
  /* 0x000c */ const struct _GUID** pDelegatedIIDs;
  /* 0x0010 */ void* const pIIDLookupRtn /* function */;
  /* 0x0014 */ unsigned short TableSize;
  /* 0x0016 */ unsigned short TableVersion;
  /* 0x0018 */ const struct _GUID** pAsyncIIDLookup;
  /* 0x001c */ long Filler2;
  /* 0x0020 */ long Filler3;
  /* 0x0024 */ long Filler4;
}; /* size: 0x0028 */


struct tagQICONTEXT
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0008 */ struct AsyncIRemUnknown2* pARU;
  /* 0x0010 */ unsigned short cIIDs;
  /* 0x0018 */ struct _GUID* pIIDs;
  /* 0x0020 */ HRESULT hr;
  /* 0x0028 */ struct tagREMQIRESULT* pRemQiRes;
  /* 0x0030 */ struct tagIPIDEntry* pIPIDEntry;
  /* 0x0038 */ struct IMarshal* pIM;
  /* 0x0040 */ HRESULT* phr;
  /* 0x0048 */ struct tagMInterfacePointer** ppMIFs;
  /* 0x0050 */ unsigned char data[1];
  /* 0x0051 */ char __PADDING__[7];
}; /* size: 0x0058 */


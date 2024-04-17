struct tagQICONTEXT
{
  /* 0x0000 */ unsigned long dwFlags;
  /* 0x0004 */ struct AsyncIRemUnknown2* pARU;
  /* 0x0008 */ unsigned short cIIDs;
  /* 0x000c */ struct _GUID* pIIDs;
  /* 0x0010 */ HRESULT hr;
  /* 0x0014 */ struct tagREMQIRESULT* pRemQiRes;
  /* 0x0018 */ struct tagIPIDEntry* pIPIDEntry;
  /* 0x001c */ struct IMarshal* pIM;
  /* 0x0020 */ HRESULT* phr;
  /* 0x0024 */ struct tagMInterfacePointer** ppMIFs;
  /* 0x0028 */ unsigned char data[1];
  /* 0x0029 */ char __PADDING__[3];
}; /* size: 0x002c */


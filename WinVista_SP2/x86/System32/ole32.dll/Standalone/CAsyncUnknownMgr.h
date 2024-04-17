class CAsyncUnknownMgr::CPrivUnknown
{
}; /* size: 0x0004 */

struct tagMULTI_QI
{
  /* 0x0000 */ const struct _GUID* pIID;
  /* 0x0004 */ struct IUnknown* pItf;
  /* 0x0008 */ HRESULT hr;
}; /* size: 0x000c */

class CAsyncUnknownMgr
{
  /* 0x0018 */ class CAsyncUnknownMgr::CPrivUnknown _privUnk;
  /* 0x001c */ unsigned long _dwFlags;
  /* 0x0020 */ class CClientCallMgr* _pNextMgr;
  /* 0x0024 */ unsigned long _cRefs;
  /* 0x0028 */ struct IUnknown* _pUnkOuter;
  /* 0x002c */ class CStdIdentity* _pStdId;
  /* 0x0030 */ struct IUnknown* _pARUObj;
  /* 0x0034 */ struct AsyncIRemUnknown2* _pARU;
  /* 0x0038 */ struct tagMULTI_QI _MQI;
  /* 0x0044 */ unsigned long _ulRefs;
  /* 0x0048 */ struct tagQICONTEXT* _pQIC;
  /* 0x004c */ unsigned long _cAcquired;
  /* 0x0050 */ unsigned long _cMQIs;
  /* 0x0054 */ struct _GUID* _pIIDs;
  /* 0x0058 */ struct tagMULTI_QI** _ppMQI;
  /* 0x005c */ struct tagMULTI_QI* _pMQISave;
}; /* size: 0x0060 */


class CAsyncUnknownMgr::CPrivUnknown
{
}; /* size: 0x0008 */

struct tagMULTI_QI
{
  /* 0x0000 */ const struct _GUID* pIID;
  /* 0x0008 */ struct IUnknown* pItf;
  /* 0x0010 */ HRESULT hr;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

class CAsyncUnknownMgr
{
  /* 0x0028 */ class CAsyncUnknownMgr::CPrivUnknown _privUnk;
  /* 0x0030 */ unsigned long _dwFlags;
  /* 0x0038 */ class CClientCallMgr* _pNextMgr;
  /* 0x0040 */ unsigned long _cRefs;
  /* 0x0048 */ struct IUnknown* _pUnkOuter;
  /* 0x0050 */ class CStdIdentity* _pStdId;
  /* 0x0058 */ struct IUnknown* _pARUObj;
  /* 0x0060 */ struct AsyncIRemUnknown2* _pARU;
  /* 0x0068 */ struct tagMULTI_QI _MQI;
  /* 0x0080 */ unsigned long _ulRefs;
  /* 0x0088 */ struct tagQICONTEXT* _pQIC;
  /* 0x0090 */ unsigned long _cAcquired;
  /* 0x0094 */ unsigned long _cMQIs;
  /* 0x0098 */ struct _GUID* _pIIDs;
  /* 0x00a0 */ struct tagMULTI_QI** _ppMQI;
  /* 0x00a8 */ struct tagMULTI_QI* _pMQISave;
}; /* size: 0x00b0 */


struct tagPropsOutInfo
{
  /* 0x0000 */ unsigned long cIfs;
  /* 0x0008 */ struct _GUID* piid;
  /* 0x0010 */ HRESULT* phresults;
  /* 0x0018 */ struct tagMInterfacePointer** ppIntfData;
}; /* size: 0x0020 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class ActivationPropertiesOut::OutSerializer
{
  /* 0x0018 */ struct tagPropsOutInfo _info;
  /* 0x0038 */ void** _ppvObj;
  /* 0x0040 */ unsigned long _size;
  /* 0x0048 */ struct tagCOMVERSION* _pClientCOMVersion;
  /* 0x0050 */ struct _GUID _pIIDs[10];
  /* 0x00f0 */ struct IUnknown* _pObject;
  /* 0x00f8 */ int _fBrokenRefCount;
  /* 0x00fc */ int _fLockedClassFactory;
}; /* size: 0x0100 */

struct tagScmReplyInfoData
{
  /* 0x0000 */ struct tagCustomPrivResolverInfo* pResolverInfo;
  /* 0x0008 */ struct _customREMOTE_REPLY_SCM_INFO* remoteReply;
}; /* size: 0x0010 */

class ScmReplyInfo
{
  /* 0x0020 */ struct tagScmReplyInfoData _scmReplyInfoData;
}; /* size: 0x0030 */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

class ActivationPropertiesOut
{
  /* 0x0210 */ class ActivationPropertiesOut::OutSerializer* _pOutSer;
  /* 0x0218 */ class ActivationPropertiesOut::OutSerializer _outSer;
  /* 0x0318 */ class ScmReplyInfo _scmReplyInfo;
  /* 0x0348 */ struct tagCOMVERSION _clientCOMVersion;
  /* 0x034c */ int _fBrokenRefCount;
}; /* size: 0x0350 */


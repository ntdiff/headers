struct tagPropsOutInfo
{
  /* 0x0000 */ unsigned long cIfs;
  /* 0x0004 */ struct _GUID* piid;
  /* 0x0008 */ HRESULT* phresults;
  /* 0x000c */ struct tagMInterfacePointer** ppIntfData;
}; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class ActivationPropertiesOut::OutSerializer
{
  /* 0x0010 */ struct tagPropsOutInfo _info;
  /* 0x0020 */ struct IUnknown* _pUnk;
  /* 0x0024 */ void** _ppvObj;
  /* 0x0028 */ unsigned long _size;
  /* 0x002c */ struct tagCOMVERSION* _pClientCOMVersion;
  /* 0x0030 */ struct _GUID _pIIDs[10];
  /* 0x00d0 */ int _fBrokenRefCount;
  /* 0x00d4 */ int _fToReleaseIFD;
}; /* size: 0x00d8 */

struct tagScmReplyInfoData
{
  /* 0x0000 */ struct tagCustomPrivResolverInfo* pResolverInfo;
  /* 0x0004 */ struct _customREMOTE_REPLY_SCM_INFO* remoteReply;
}; /* size: 0x0008 */

class ScmReplyInfo
{
  /* 0x0014 */ struct tagScmReplyInfoData _scmReplyInfoData;
}; /* size: 0x001c */

struct tagCOMVERSION
{
  /* 0x0000 */ unsigned short MajorVersion;
  /* 0x0002 */ unsigned short MinorVersion;
}; /* size: 0x0004 */

class ActivationPropertiesOut
{
  /* 0x01ac */ class ActivationPropertiesOut::OutSerializer* _pOutSer;
  /* 0x01b0 */ class ActivationPropertiesOut::OutSerializer _outSer;
  /* 0x0288 */ class ScmReplyInfo _scmReplyInfo;
  /* 0x02a4 */ struct tagCOMVERSION _clientCOMVersion;
  /* 0x02a8 */ int _fBrokenRefCount;
}; /* size: 0x02ac */


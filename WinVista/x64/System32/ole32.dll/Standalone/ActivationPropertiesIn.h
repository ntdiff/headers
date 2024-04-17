enum tagACTIVATION_STAGE
{
  CLIENT_CONTEXT_STAGE = 1,
  CLIENT_MACHINE_STAGE = 2,
  SERVER_MACHINE_STAGE = 3,
  SERVER_PROCESS_STAGE = 4,
  SERVER_CONTEXT_STAGE = 5,
};

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
  /* 0x0038 */ struct IUnknown* _pUnk;
  /* 0x0040 */ void** _ppvObj;
  /* 0x0048 */ unsigned long _size;
  /* 0x0050 */ struct tagCOMVERSION* _pClientCOMVersion;
  /* 0x0058 */ struct _GUID _pIIDs[10];
  /* 0x00f8 */ int _fBrokenRefCount;
  /* 0x00fc */ int _fToReleaseIFD;
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

struct tagSecurityInfoData
{
  /* 0x0000 */ unsigned long dwAuthnFlags;
  /* 0x0008 */ struct _COSERVERINFO* pServerInfo;
  /* 0x0010 */ struct _COAUTHIDENTITY* pAuthIdentityInfo;
}; /* size: 0x0018 */

class SecurityInfo
{
  /* 0x0028 */ struct tagSecurityInfoData _securityInfoData;
  /* 0x0040 */ struct tagSecurityInfoData _securityInfoDataFixedUp;
  /* 0x0058 */ unsigned long _dwFixupServerInfoBufSize;
}; /* size: 0x0060 */

struct tagLocationInfoData
{
  /* 0x0000 */ wchar_t* machineName;
  /* 0x0008 */ unsigned long processId;
  /* 0x000c */ unsigned long apartmentId;
  /* 0x0010 */ unsigned long contextId;
  /* 0x0014 */ long __PADDING__[1];
}; /* size: 0x0018 */

class ServerLocationInfo
{
  /* 0x0020 */ struct tagLocationInfoData _locationInfoData;
  /* 0x0038 */ class CObjectContext* _pObjectContext;
  /* 0x0040 */ struct ISpecialSystemProperties* _pISSP;
}; /* size: 0x0048 */

struct tagInstantiationInfoData
{
  /* 0x0000 */ struct _GUID classId;
  /* 0x0010 */ unsigned long classCtx;
  /* 0x0014 */ unsigned long actvflags;
  /* 0x0018 */ int fIsSurrogate;
  /* 0x001c */ unsigned long cIID;
  /* 0x0020 */ unsigned long instFlag;
  /* 0x0028 */ struct _GUID* pIID;
  /* 0x0030 */ unsigned long thisSize;
  /* 0x0034 */ struct tagCOMVERSION clientCOMVersion;
}; /* size: 0x0038 */

class InstantiationInfo
{
  /* 0x0020 */ struct tagInstantiationInfoData _instantiationInfoData;
  /* 0x0058 */ struct _GUID _pIIDs[10];
}; /* size: 0x00f8 */

struct tagActivationContextInfoData
{
  /* 0x0000 */ int clientOK;
  /* 0x0004 */ int bReserved1;
  /* 0x0008 */ unsigned long dwReserved1;
  /* 0x000c */ unsigned long dwReserved2;
  /* 0x0010 */ struct tagMInterfacePointer* pIFDClientCtx;
  /* 0x0018 */ struct tagMInterfacePointer* pIFDPrototypeCtx;
}; /* size: 0x0020 */

class ContextInfo
{
  /* 0x0028 */ struct tagActivationContextInfoData _contextInfoData;
  /* 0x0048 */ struct _GUID _ctxOverride;
  /* 0x0058 */ class CObjectContext* _pClientCtx;
  /* 0x0060 */ class CObjectContext* _pPrototypeCtx;
  /* 0x0068 */ int _toReleaseIFD;
}; /* size: 0x0070 */

struct tagInstanceInfoData
{
  /* 0x0000 */ wchar_t* fileName;
  /* 0x0008 */ unsigned long mode;
  /* 0x0010 */ struct tagMInterfacePointer* ifdROT;
  /* 0x0018 */ struct tagMInterfacePointer* ifdStg;
}; /* size: 0x0020 */

class InstanceInfo
{
  /* 0x0020 */ struct tagInstanceInfoData _instanceInfoData;
  /* 0x0040 */ struct IStorage* _pstg;
}; /* size: 0x0048 */

struct tagScmRequestInfoData
{
  /* 0x0000 */ struct tagCustomPrivScmInfo* pScmInfo;
  /* 0x0008 */ struct _customREMOTE_REQUEST_SCM_INFO* remoteRequest;
}; /* size: 0x0010 */

class ScmRequestInfo
{
  /* 0x0020 */ struct tagScmRequestInfoData _scmRequestInfoData;
}; /* size: 0x0030 */

struct tagSpecialPropertiesData
{
  /* 0x0000 */ unsigned long dwSessionId;
  /* 0x0004 */ int fRemoteThisSessionId;
  /* 0x0008 */ int fClientImpersonating;
  /* 0x000c */ int fPartitionIDPresent;
  /* 0x0010 */ unsigned long dwDefaultAuthnLvl;
  /* 0x0014 */ struct _GUID guidPartition;
  /* 0x0024 */ unsigned long dwPRTFlags;
  /* 0x0028 */ unsigned long dwOrigClsctx;
  /* 0x002c */ unsigned long dwFlags;
  /* 0x0030 */ unsigned long dwPid;
  /* 0x0038 */ unsigned __int64 hwnd;
  /* 0x0040 */ unsigned long dwReserved[5];
  /* 0x0054 */ long __PADDING__[1];
}; /* size: 0x0058 */

class SpecialProperties
{
  /* 0x0020 */ struct tagSpecialPropertiesData _data;
}; /* size: 0x0078 */

class ActivationPropertiesIn
{
  /* 0x0218 */ enum tagACTIVATION_STAGE _stage;
  /* 0x021c */ unsigned long _cCustomAct;
  /* 0x0220 */ unsigned long _customIndex;
  /* 0x0224 */ unsigned long _dwInitialContext;
  /* 0x0228 */ int _delegated;
  /* 0x0230 */ void* _clientToken;
  /* 0x0238 */ int _fUseSystemIdentity;
  /* 0x023c */ int _fComplusOnly;
  /* 0x0240 */ struct IComClassInfo* _pClassInfo;
  /* 0x0248 */ struct ISystemActivator** _customActList;
  /* 0x0250 */ class InstantiationInfo* _pinst;
  /* 0x0258 */ class InstanceInfo* _pPersist;
  /* 0x0260 */ class ContextInfo* _pContextInfo;
  /* 0x0268 */ class ServerLocationInfo* _pServerLocationInfo;
  /* 0x0270 */ class SecurityInfo* _pSecurityInfo;
  /* 0x0278 */ class SpecialProperties* _pSpecialProperties;
  /* 0x0280 */ class ActivationPropertiesOut _actOut;
  /* 0x05d0 */ class SecurityInfo _securityInfo;
  /* 0x0630 */ class ServerLocationInfo _serverLocationInfo;
  /* 0x0678 */ class InstantiationInfo _instantiationInfo;
  /* 0x0770 */ class ContextInfo _contextInfo;
  /* 0x07e0 */ class InstanceInfo _instanceInfo;
  /* 0x0828 */ class ScmRequestInfo _scmRequestInfo;
  /* 0x0858 */ class SpecialProperties _specialProperties;
  /* 0x08d0 */ void* _pDip;
  /* 0x08d8 */ struct IClassFactory* _pCF;
}; /* size: 0x08e0 */


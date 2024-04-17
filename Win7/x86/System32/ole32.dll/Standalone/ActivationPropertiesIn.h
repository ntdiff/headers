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

struct tagSecurityInfoData
{
  /* 0x0000 */ unsigned long dwAuthnFlags;
  /* 0x0004 */ struct _COSERVERINFO* pServerInfo;
  /* 0x0008 */ struct _COAUTHIDENTITY* pAuthIdentityInfo;
}; /* size: 0x000c */

class SecurityInfo
{
  /* 0x0018 */ struct tagSecurityInfoData _securityInfoData;
  /* 0x0024 */ struct tagSecurityInfoData _securityInfoDataFixedUp;
  /* 0x0030 */ unsigned long _dwFixupServerInfoBufSize;
}; /* size: 0x0034 */

struct tagLocationInfoData
{
  /* 0x0000 */ unsigned short* machineName;
  /* 0x0004 */ unsigned long processId;
  /* 0x0008 */ unsigned long apartmentId;
  /* 0x000c */ unsigned long contextId;
}; /* size: 0x0010 */

class ServerLocationInfo
{
  /* 0x0014 */ struct tagLocationInfoData _locationInfoData;
  /* 0x0024 */ class CObjectContext* _pObjectContext;
  /* 0x0028 */ struct ISpecialSystemProperties* _pISSP;
}; /* size: 0x002c */

struct tagInstantiationInfoData
{
  /* 0x0000 */ struct _GUID classId;
  /* 0x0010 */ unsigned long classCtx;
  /* 0x0014 */ unsigned long actvflags;
  /* 0x0018 */ int fIsSurrogate;
  /* 0x001c */ unsigned long cIID;
  /* 0x0020 */ unsigned long instFlag;
  /* 0x0024 */ struct _GUID* pIID;
  /* 0x0028 */ unsigned long thisSize;
  /* 0x002c */ struct tagCOMVERSION clientCOMVersion;
}; /* size: 0x0030 */

class InstantiationInfo
{
  /* 0x0014 */ struct tagInstantiationInfoData _instantiationInfoData;
  /* 0x0044 */ struct _GUID _pIIDs[10];
}; /* size: 0x00e4 */

struct tagActivationContextInfoData
{
  /* 0x0000 */ int clientOK;
  /* 0x0004 */ int bReserved1;
  /* 0x0008 */ unsigned long dwReserved1;
  /* 0x000c */ unsigned long dwReserved2;
  /* 0x0010 */ struct tagMInterfacePointer* pIFDClientCtx;
  /* 0x0014 */ struct tagMInterfacePointer* pIFDPrototypeCtx;
}; /* size: 0x0018 */

class ContextInfo
{
  /* 0x0018 */ struct tagActivationContextInfoData _contextInfoData;
  /* 0x0030 */ struct _GUID _ctxOverride;
  /* 0x0040 */ class CObjectContext* _pClientCtx;
  /* 0x0044 */ class CObjectContext* _pPrototypeCtx;
  /* 0x0048 */ int _toReleaseIFD;
}; /* size: 0x004c */

struct tagInstanceInfoData
{
  /* 0x0000 */ unsigned short* fileName;
  /* 0x0004 */ unsigned long mode;
  /* 0x0008 */ struct tagMInterfacePointer* ifdROT;
  /* 0x000c */ struct tagMInterfacePointer* ifdStg;
}; /* size: 0x0010 */

class InstanceInfo
{
  /* 0x0014 */ struct tagInstanceInfoData _instanceInfoData;
  /* 0x0024 */ struct IStorage* _pstg;
}; /* size: 0x0028 */

struct tagScmRequestInfoData
{
  /* 0x0000 */ struct tagCustomPrivScmInfo* pScmInfo;
  /* 0x0004 */ struct _customREMOTE_REQUEST_SCM_INFO* remoteRequest;
}; /* size: 0x0008 */

class ScmRequestInfo
{
  /* 0x0014 */ struct tagScmRequestInfoData _scmRequestInfoData;
}; /* size: 0x001c */

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
  /* 0x0018 */ struct tagSpecialPropertiesData _data;
}; /* size: 0x0070 */

class ActivationPropertiesIn
{
  /* 0x01b0 */ enum tagACTIVATION_STAGE _stage;
  /* 0x01b4 */ unsigned long _cCustomAct;
  /* 0x01b8 */ unsigned long _customIndex;
  /* 0x01bc */ unsigned long _dwInitialContext;
  /* 0x01c0 */ int _delegated;
  /* 0x01c4 */ void* _clientToken;
  /* 0x01c8 */ int _fUseSystemIdentity;
  /* 0x01cc */ int _fComplusOnly;
  /* 0x01d0 */ struct IComClassInfo* _pClassInfo;
  /* 0x01d4 */ struct ISystemActivator** _customActList;
  /* 0x01d8 */ class InstantiationInfo* _pinst;
  /* 0x01dc */ class InstanceInfo* _pPersist;
  /* 0x01e0 */ class ContextInfo* _pContextInfo;
  /* 0x01e4 */ class ServerLocationInfo* _pServerLocationInfo;
  /* 0x01e8 */ class SecurityInfo* _pSecurityInfo;
  /* 0x01ec */ class SpecialProperties* _pSpecialProperties;
  /* 0x01f0 */ class ActivationPropertiesOut _actOut;
  /* 0x049c */ class SecurityInfo _securityInfo;
  /* 0x04d0 */ class ServerLocationInfo _serverLocationInfo;
  /* 0x04fc */ class InstantiationInfo _instantiationInfo;
  /* 0x05e0 */ class ContextInfo _contextInfo;
  /* 0x062c */ class InstanceInfo _instanceInfo;
  /* 0x0654 */ class ScmRequestInfo _scmRequestInfo;
  /* 0x0670 */ class SpecialProperties _specialProperties;
  /* 0x06e0 */ void* _pDip;
  /* 0x06e4 */ struct IClassFactory* _pCF;
}; /* size: 0x06e8 */


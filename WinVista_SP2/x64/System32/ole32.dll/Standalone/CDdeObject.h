struct CDdeObject::CUnknownImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

struct CDdeObject::COleObjectImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

struct CDdeObject::CDataObjectImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

struct CDdeObject::CPersistStgImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

struct CDdeObject::CProxyManagerImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

struct CDdeObject::COleItemContainerImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

struct CDdeObject::CRpcStubBufferImpl
{
  /* 0x0008 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDdeConnectionTable
{
  /* 0x0000 */ void* m_h;
  /* 0x0008 */ unsigned long m_cinfo;
}; /* size: 0x0010 */

class CDdeObject
{
  /* 0x0000 */ int m_fDoingSendOnDataChange;
  /* 0x0004 */ unsigned long m_cRefCount;
  /* 0x0008 */ struct CDdeObject::CUnknownImpl m_Unknown;
  /* 0x0018 */ struct CDdeObject::COleObjectImpl m_Ole;
  /* 0x0028 */ struct CDdeObject::CDataObjectImpl m_Data;
  /* 0x0038 */ struct CDdeObject::CPersistStgImpl m_PersistStg;
  /* 0x0048 */ struct CDdeObject::CProxyManagerImpl m_ProxyMgr;
  /* 0x0058 */ struct CDdeObject::COleItemContainerImpl m_OleItemContainer;
  /* 0x0068 */ struct CDdeObject::CRpcStubBufferImpl m_RpcStubBuffer;
  /* 0x0078 */ unsigned long m_refs;
  /* 0x007c */ unsigned long m_ulObjType;
  /* 0x0080 */ struct _GUID m_clsid;
  /* 0x0090 */ unsigned short m_aClass;
  /* 0x0092 */ unsigned short m_aExeName;
  /* 0x0094 */ unsigned short m_aTopic;
  /* 0x0096 */ unsigned short m_aItem;
  /* 0x0098 */ int m_bRunning;
  /* 0x00a0 */ struct IUnknown* m_pUnkOuter;
  /* 0x00a8 */ struct IOleClientSite* m_pOleClientSite;
  /* 0x00b0 */ struct IStorage* m_pstg;
  /* 0x00b8 */ int m_bInitNew;
  /* 0x00bc */ int m_bOldSvr;
  /* 0x00c0 */ void* m_hNative;
  /* 0x00c8 */ void* m_hPict;
  /* 0x00d0 */ void* m_hExtra;
  /* 0x00d8 */ unsigned short m_cfPict;
  /* 0x00da */ unsigned short m_cfExtra;
  /* 0x00dc */ int m_fDidSendOnClose;
  /* 0x00e0 */ int m_fNoStdCloseDoc;
  /* 0x00e4 */ int m_fDidStdCloseDoc;
  /* 0x00e8 */ int m_fDidStdOpenDoc;
  /* 0x00ec */ int m_fDidGetObject;
  /* 0x00f0 */ int m_fDidLaunchApp;
  /* 0x00f4 */ int m_fUpdateOnSave;
  /* 0x00f8 */ int m_fGotCloseData;
  /* 0x00fc */ unsigned long m_cLocks;
  /* 0x0100 */ int m_fVisible;
  /* 0x0104 */ int m_fWasEverVisible;
  /* 0x0108 */ int m_fCalledOnShow;
  /* 0x010c */ unsigned long m_chk;
  /* 0x0110 */ struct tagDVTARGETDEVICE* m_ptd;
  /* 0x0118 */ int m_iAdvClose;
  /* 0x011c */ int m_iAdvSave;
  /* 0x0120 */ int m_iAdvChange;
  /* 0x0124 */ int m_fDidAdvNative;
  /* 0x0128 */ unsigned short m_wTerminate;
  /* 0x0130 */ struct IDataAdviseHolder* m_pDataAdvHolder;
  /* 0x0138 */ struct IOleAdviseHolder* m_pOleAdvHolder;
  /* 0x0140 */ class CDdeConnectionTable m_ConnectionTable;
  /* 0x0150 */ class DDE_CHANNEL* m_pSysChannel;
  /* 0x0158 */ class DDE_CHANNEL* m_pDocChannel;
}; /* size: 0x0160 */


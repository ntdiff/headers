struct CDdeObject::CUnknownImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

struct CDdeObject::COleObjectImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

struct CDdeObject::CDataObjectImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

struct CDdeObject::CPersistStgImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

struct CDdeObject::CProxyManagerImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

struct CDdeObject::COleItemContainerImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

struct CDdeObject::CRpcStubBufferImpl
{
  /* 0x0004 */ class CDdeObject* m_pDdeObject;
}; /* size: 0x0008 */

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
  /* 0x0004 */ unsigned long m_cinfo;
}; /* size: 0x0008 */

class CDdeObject
{
  /* 0x0000 */ int m_fDoingSendOnDataChange;
  /* 0x0004 */ unsigned long m_cRefCount;
  /* 0x0008 */ struct CDdeObject::CUnknownImpl m_Unknown;
  /* 0x0010 */ struct CDdeObject::COleObjectImpl m_Ole;
  /* 0x0018 */ struct CDdeObject::CDataObjectImpl m_Data;
  /* 0x0020 */ struct CDdeObject::CPersistStgImpl m_PersistStg;
  /* 0x0028 */ struct CDdeObject::CProxyManagerImpl m_ProxyMgr;
  /* 0x0030 */ struct CDdeObject::COleItemContainerImpl m_OleItemContainer;
  /* 0x0038 */ struct CDdeObject::CRpcStubBufferImpl m_RpcStubBuffer;
  /* 0x0040 */ unsigned long m_refs;
  /* 0x0044 */ unsigned long m_ulObjType;
  /* 0x0048 */ struct _GUID m_clsid;
  /* 0x0058 */ unsigned short m_aClass;
  /* 0x005a */ unsigned short m_aExeName;
  /* 0x005c */ unsigned short m_aTopic;
  /* 0x005e */ unsigned short m_aItem;
  /* 0x0060 */ int m_bRunning;
  /* 0x0064 */ struct IUnknown* m_pUnkOuter;
  /* 0x0068 */ struct IOleClientSite* m_pOleClientSite;
  /* 0x006c */ struct IStorage* m_pstg;
  /* 0x0070 */ int m_bInitNew;
  /* 0x0074 */ int m_bOldSvr;
  /* 0x0078 */ void* m_hNative;
  /* 0x007c */ void* m_hPict;
  /* 0x0080 */ void* m_hExtra;
  /* 0x0084 */ unsigned short m_cfPict;
  /* 0x0086 */ unsigned short m_cfExtra;
  /* 0x0088 */ int m_fDidSendOnClose;
  /* 0x008c */ int m_fNoStdCloseDoc;
  /* 0x0090 */ int m_fDidStdCloseDoc;
  /* 0x0094 */ int m_fDidStdOpenDoc;
  /* 0x0098 */ int m_fDidGetObject;
  /* 0x009c */ int m_fDidLaunchApp;
  /* 0x00a0 */ int m_fUpdateOnSave;
  /* 0x00a4 */ int m_fGotCloseData;
  /* 0x00a8 */ unsigned long m_cLocks;
  /* 0x00ac */ int m_fVisible;
  /* 0x00b0 */ int m_fWasEverVisible;
  /* 0x00b4 */ int m_fCalledOnShow;
  /* 0x00b8 */ unsigned long m_chk;
  /* 0x00bc */ struct tagDVTARGETDEVICE* m_ptd;
  /* 0x00c0 */ int m_iAdvClose;
  /* 0x00c4 */ int m_iAdvSave;
  /* 0x00c8 */ int m_iAdvChange;
  /* 0x00cc */ int m_fDidAdvNative;
  /* 0x00d0 */ unsigned short m_wTerminate;
  /* 0x00d4 */ struct IDataAdviseHolder* m_pDataAdvHolder;
  /* 0x00d8 */ struct IOleAdviseHolder* m_pOleAdvHolder;
  /* 0x00dc */ class CDdeConnectionTable m_ConnectionTable;
  /* 0x00e4 */ class DDE_CHANNEL* m_pSysChannel;
  /* 0x00e8 */ class DDE_CHANNEL* m_pDocChannel;
}; /* size: 0x00ec */


enum CHK
{
  chkDdeSrvr = 4660,
  chkDefClient = 22136,
};

class CDdeServerCallMgr
{
  /* 0x0018 */ class CDefClient* m_pDefClient;
  /* 0x0020 */ class CDDEServer* m_pDDEServer;
}; /* size: 0x0028 */

enum tagSERVERCALLEX
{
  SERVERCALLEX_ISHANDLED = 0,
  SERVERCALLEX_REJECTED = 1,
  SERVERCALLEX_RETRYLATER = 2,
  SERVERCALLEX_ERROR = 3,
  SERVERCALLEX_CANCELED = 5,
};

struct EXECUTEACK
{
  /* 0x0000 */ int f;
  /* 0x0008 */ void* hdata;
  /* 0x0010 */ struct HWND__* hwndFrom;
  /* 0x0018 */ struct HWND__* hwndTo;
}; /* size: 0x0020 */

struct CDefClient::CUnknownImpl
{
  /* 0x0008 */ class CDefClient* m_pDefClient;
}; /* size: 0x0010 */

struct CDefClient::COleClientSiteImpl
{
  /* 0x0008 */ class CDefClient* m_pDefClient;
}; /* size: 0x0010 */

struct CDefClient::CAdviseSinkImpl
{
  /* 0x0008 */ class CDefClient* m_pDefClient;
}; /* size: 0x0010 */

class CDefClient
{
  /* 0x0000 */ enum CHK m_chk;
  /* 0x0008 */ class CDdeServerCallMgr m_pCallMgr;
  /* 0x0030 */ enum tagSERVERCALLEX m_CallState;
  /* 0x0038 */ struct IUnknown* m_pUnkOuter;
  /* 0x0040 */ struct IOleObject* m_lpoleObj;
  /* 0x0048 */ struct IDataObject* m_lpdataObj;
  /* 0x0050 */ int m_bCreateInst;
  /* 0x0054 */ int m_bTerminate;
  /* 0x0058 */ int m_termNo;
  /* 0x005c */ unsigned short m_aItem;
  /* 0x0060 */ void* m_hcli;
  /* 0x0068 */ class CDefClient* m_lpNextItem;
  /* 0x0070 */ int m_bContainer;
  /* 0x0074 */ int m_cRef;
  /* 0x0078 */ struct HWND__* m_hwnd;
  /* 0x0080 */ void* m_hdevInfo;
  /* 0x0088 */ void* m_hcliInfo;
  /* 0x0090 */ int m_fDidRealSetHostNames;
  /* 0x0094 */ int m_fDidSetClientSite;
  /* 0x0098 */ int m_fGotDdeAdvise;
  /* 0x009c */ int m_fCreatedNotConnected;
  /* 0x00a0 */ int m_fInOnClose;
  /* 0x00a4 */ int m_fInOleSave;
  /* 0x00a8 */ struct EXECUTEACK m_ExecuteAck;
  /* 0x00c8 */ unsigned long m_dwConnectionOleObj;
  /* 0x00cc */ unsigned long m_dwConnectionDataObj;
  /* 0x00d0 */ struct ILockBytes* m_plkbytNative;
  /* 0x00d8 */ struct IStorage* m_pstgNative;
  /* 0x00e0 */ int m_fRunningInSDI;
  /* 0x00e8 */ class CDDEServer* m_psrvrParent;
  /* 0x00f0 */ struct tagDVTARGETDEVICE* m_ptd;
  /* 0x00f8 */ int m_fGotStdCloseDoc;
  /* 0x00fc */ int m_fGotEditNoPokeNativeYet;
  /* 0x0100 */ int m_fLocked;
  /* 0x0104 */ int m_fCallData;
  /* 0x0108 */ int m_fEmbed;
  /* 0x010c */ int m_cClients;
  /* 0x0110 */ class CDefClient* m_pdoc;
  /* 0x0118 */ struct CDefClient::CUnknownImpl m_Unknown;
  /* 0x0128 */ struct CDefClient::COleClientSiteImpl m_OleClientSite;
  /* 0x0138 */ struct CDefClient::CAdviseSinkImpl m_AdviseSink;
}; /* size: 0x0148 */


enum CHK
{
  chkDdeSrvr = 4660,
  chkDefClient = 22136,
};

class CDdeServerCallMgr
{
  /* 0x000c */ class CDefClient* m_pDefClient;
  /* 0x0010 */ class CDDEServer* m_pDDEServer;
}; /* size: 0x0014 */

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
  /* 0x0004 */ void* hdata;
  /* 0x0008 */ struct HWND__* hwndFrom;
  /* 0x000c */ struct HWND__* hwndTo;
}; /* size: 0x0010 */

struct CDefClient::CUnknownImpl
{
  /* 0x0004 */ class CDefClient* m_pDefClient;
}; /* size: 0x0008 */

struct CDefClient::COleClientSiteImpl
{
  /* 0x0004 */ class CDefClient* m_pDefClient;
}; /* size: 0x0008 */

struct CDefClient::CAdviseSinkImpl
{
  /* 0x0004 */ class CDefClient* m_pDefClient;
}; /* size: 0x0008 */

class CDefClient
{
  /* 0x0000 */ enum CHK m_chk;
  /* 0x0004 */ class CDdeServerCallMgr m_pCallMgr;
  /* 0x0018 */ enum tagSERVERCALLEX m_CallState;
  /* 0x001c */ struct IUnknown* m_pUnkOuter;
  /* 0x0020 */ struct IOleObject* m_lpoleObj;
  /* 0x0024 */ struct IDataObject* m_lpdataObj;
  /* 0x0028 */ int m_bCreateInst;
  /* 0x002c */ int m_bTerminate;
  /* 0x0030 */ int m_termNo;
  /* 0x0034 */ unsigned short m_aItem;
  /* 0x0038 */ void* m_hcli;
  /* 0x003c */ class CDefClient* m_lpNextItem;
  /* 0x0040 */ int m_bContainer;
  /* 0x0044 */ int m_cRef;
  /* 0x0048 */ struct HWND__* m_hwnd;
  /* 0x004c */ void* m_hdevInfo;
  /* 0x0050 */ void* m_hcliInfo;
  /* 0x0054 */ int m_fDidRealSetHostNames;
  /* 0x0058 */ int m_fDidSetClientSite;
  /* 0x005c */ int m_fGotDdeAdvise;
  /* 0x0060 */ int m_fCreatedNotConnected;
  /* 0x0064 */ int m_fInOnClose;
  /* 0x0068 */ int m_fInOleSave;
  /* 0x006c */ struct EXECUTEACK m_ExecuteAck;
  /* 0x007c */ unsigned long m_dwConnectionOleObj;
  /* 0x0080 */ unsigned long m_dwConnectionDataObj;
  /* 0x0084 */ struct ILockBytes* m_plkbytNative;
  /* 0x0088 */ struct IStorage* m_pstgNative;
  /* 0x008c */ int m_fRunningInSDI;
  /* 0x0090 */ class CDDEServer* m_psrvrParent;
  /* 0x0094 */ struct tagDVTARGETDEVICE* m_ptd;
  /* 0x0098 */ int m_fGotStdCloseDoc;
  /* 0x009c */ int m_fGotEditNoPokeNativeYet;
  /* 0x00a0 */ int m_fLocked;
  /* 0x00a4 */ int m_fCallData;
  /* 0x00a8 */ int m_fEmbed;
  /* 0x00ac */ int m_cClients;
  /* 0x00b0 */ class CDefClient* m_pdoc;
  /* 0x00b4 */ struct CDefClient::CUnknownImpl m_Unknown;
  /* 0x00bc */ struct CDefClient::COleClientSiteImpl m_OleClientSite;
  /* 0x00c4 */ struct CDefClient::CAdviseSinkImpl m_AdviseSink;
}; /* size: 0x00cc */


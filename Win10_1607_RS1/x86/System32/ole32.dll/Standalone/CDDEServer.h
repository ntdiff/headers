typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDdeServerCallMgr
{
  /* 0x000c */ class CDefClient* m_pDefClient;
  /* 0x0010 */ class CDDEServer* m_pDDEServer;
}; /* size: 0x0014 */

enum CNVTYP
{
  cnvtypNone = 0,
  cnvtypConvertTo = 1,
  cnvtypTreatAs = 2,
};

enum CHK
{
  chkDdeSrvr = 4660,
  chkDefClient = 22136,
};

class CDDEServer
{
  /* 0x0000 */ struct _GUID m_clsid;
  /* 0x0010 */ unsigned long m_dwClassFactoryKey;
  /* 0x0014 */ struct IClassFactory* m_pClassFactory;
  /* 0x0018 */ class CDdeServerCallMgr m_pCallMgr;
  /* 0x002c */ int m_bTerminate;
  /* 0x0030 */ struct HWND__* m_hwnd;
  /* 0x0034 */ void* m_hcli;
  /* 0x0038 */ int m_termNo;
  /* 0x003c */ int m_cSrvrClients;
  /* 0x0040 */ unsigned long m_fcfFlags;
  /* 0x0044 */ enum CNVTYP m_cnvtyp;
  /* 0x0048 */ enum CHK m_chk;
  /* 0x004c */ unsigned short m_aClass;
  /* 0x004e */ unsigned short m_aOriginalClass;
  /* 0x0050 */ unsigned short m_aExe;
  /* 0x0054 */ int m_fDoNotDestroyWindow;
}; /* size: 0x0058 */


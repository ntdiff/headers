typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CDdeServerCallMgr
{
  /* 0x0018 */ class CDefClient* m_pDefClient;
  /* 0x0020 */ class CDDEServer* m_pDDEServer;
}; /* size: 0x0028 */

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
  /* 0x0018 */ struct IClassFactory* m_pClassFactory;
  /* 0x0020 */ class CDdeServerCallMgr m_pCallMgr;
  /* 0x0048 */ int m_bTerminate;
  /* 0x0050 */ struct HWND__* m_hwnd;
  /* 0x0058 */ void* m_hcli;
  /* 0x0060 */ int m_termNo;
  /* 0x0064 */ int m_cSrvrClients;
  /* 0x0068 */ unsigned long m_fcfFlags;
  /* 0x006c */ enum CNVTYP m_cnvtyp;
  /* 0x0070 */ enum CHK m_chk;
  /* 0x0074 */ unsigned short m_aClass;
  /* 0x0076 */ unsigned short m_aOriginalClass;
  /* 0x0078 */ unsigned short m_aExe;
  /* 0x007c */ int m_fDoNotDestroyWindow;
}; /* size: 0x0080 */


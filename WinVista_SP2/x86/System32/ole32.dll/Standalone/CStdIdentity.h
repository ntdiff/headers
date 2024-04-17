class CStdIdentity::CInternalUnk
{
}; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CStdIdentity
{
  /* 0x00a0 */ class CStdIdentity::CInternalUnk m_InternalUnk;
  /* 0x00a8 */ unsigned long m_refs;
  /* 0x00ac */ unsigned long m_flags;
  /* 0x00b0 */ struct IUnknown* m_pUnkOuter;
  /* 0x00b4 */ struct IUnknown* m_pUnkControl;
  /* 0x00b8 */ void* m_pVtableAddress;
  /* 0x00bc */ struct IExternalConnection* m_pIEC;
  /* 0x00c0 */ struct _GUID m_moid;
  /* 0x00d0 */ unsigned long m_dwAptId;
  /* 0x00d4 */ long m_cStrongRefs;
  /* 0x00d8 */ long m_cWeakRefs;
  /* 0x00dc */ HRESULT m_ConnStatus;
  /* 0x00e0 */ void* m_pVoid;
}; /* size: 0x00e4 */


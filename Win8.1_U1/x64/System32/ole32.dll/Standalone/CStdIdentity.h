class CStdIdentity::CInternalUnk
{
}; /* size: 0x0010 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

class CStdIdentity
{
  /* 0x0120 */ class CStdIdentity::CInternalUnk m_InternalUnk;
  /* 0x0130 */ unsigned long m_refs;
  /* 0x0134 */ unsigned long m_flags;
  /* 0x0138 */ struct IUnknown* m_pUnkOuter;
  /* 0x0140 */ struct IUnknown* m_pUnkControl;
  /* 0x0148 */ void* m_pVtableAddress;
  /* 0x0150 */ struct IExternalConnection* m_pIEC;
  /* 0x0158 */ struct _GUID m_moid;
  /* 0x0168 */ unsigned long m_dwAptId;
  /* 0x016c */ volatile long m_cStrongRefs;
  /* 0x0170 */ volatile long m_cWeakRefs;
  /* 0x0174 */ long m_cMarshalsInProgress;
  /* 0x0178 */ long m_cMarshalsInCall;
  /* 0x017c */ long m_cSameProcessDirectMarshals;
  /* 0x0180 */ HRESULT m_ConnStatus;
  /* 0x0188 */ void* m_pVoid;
}; /* size: 0x0190 */


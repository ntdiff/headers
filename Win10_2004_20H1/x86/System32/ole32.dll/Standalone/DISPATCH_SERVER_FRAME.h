struct FRAME_Invoke
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0004 */ long dispIdMember;
  /* 0x0008 */ struct _GUID* piid;
  /* 0x000c */ unsigned long lcid;
  /* 0x0010 */ unsigned short wFlags;
  /* 0x0014 */ struct tagDISPPARAMS* pDispParams;
  /* 0x0018 */ struct tagVARIANT* pVarResult;
  /* 0x001c */ struct tagEXCEPINFO* pExcepInfo;
  /* 0x0020 */ unsigned int* puArgErr;
}; /* size: 0x0024 */

struct DISPATCH_SERVER_FRAME
{
  /* 0x002c */ struct FRAME_Invoke m_memoryFrame;
  /* 0x0050 */ int m_fDoneStubPrecheck;
  /* 0x0054 */ int m_fDoneStubPostcheck;
}; /* size: 0x0058 */


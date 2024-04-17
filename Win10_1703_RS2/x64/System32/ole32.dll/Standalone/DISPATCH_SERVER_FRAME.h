struct FRAME_Invoke
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0008 */ long dispIdMember;
  /* 0x000c */ char __pad1[4];
  /* 0x0010 */ struct _GUID* piid;
  /* 0x0018 */ unsigned long lcid;
  /* 0x001c */ char __pad3[4];
  /* 0x0020 */ unsigned short wFlags;
  /* 0x0022 */ char __pad4[4];
  /* 0x0028 */ struct tagDISPPARAMS* pDispParams;
  /* 0x0030 */ struct tagVARIANT* pVarResult;
  /* 0x0038 */ struct tagEXCEPINFO* pExcepInfo;
  /* 0x0040 */ unsigned int* puArgErr;
}; /* size: 0x0048 */

struct DISPATCH_SERVER_FRAME
{
  /* 0x0058 */ struct FRAME_Invoke m_memoryFrame;
  /* 0x00a0 */ int m_fDoneStubPrecheck;
  /* 0x00a4 */ int m_fDoneStubPostcheck;
}; /* size: 0x00a8 */


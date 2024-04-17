struct FRAME_RemoteInvoke
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0004 */ long dispIdMember;
  /* 0x0008 */ struct _GUID* piid;
  /* 0x000c */ unsigned long lcid;
  /* 0x0010 */ unsigned long dwFlags;
  /* 0x0014 */ struct tagDISPPARAMS* pDispParams;
  /* 0x0018 */ struct tagVARIANT* pVarResult;
  /* 0x001c */ struct tagEXCEPINFO* pExcepInfo;
  /* 0x0020 */ unsigned int* puArgErr;
  /* 0x0024 */ unsigned int cVarRef;
  /* 0x0028 */ unsigned int* rgVarRefIdx;
  /* 0x002c */ struct tagVARIANT* rgVarRef;
}; /* size: 0x0030 */


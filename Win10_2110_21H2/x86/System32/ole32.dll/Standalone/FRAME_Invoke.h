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


typedef struct _PARAM_STRUCT
{
  /* 0x0000 */ struct IDispatch* This;
  /* 0x0008 */ long dispIdMember;
  /* 0x000c */ char Pad0[4];
  /* 0x0010 */ const struct _GUID* const riid;
  /* 0x0018 */ unsigned long lcid;
  /* 0x001c */ char Pad1[4];
  /* 0x0020 */ unsigned long dwFlags;
  /* 0x0024 */ char Pad2[4];
  /* 0x0028 */ struct tagDISPPARAMS* pDispParams;
  /* 0x0030 */ struct tagVARIANT* pVarResult;
  /* 0x0038 */ struct tagEXCEPINFO* pExcepInfo;
  /* 0x0040 */ unsigned int* pArgErr;
  /* 0x0048 */ unsigned int cVarRef;
  /* 0x004c */ char Pad3[4];
  /* 0x0050 */ unsigned int* rgVarRefIdx;
  /* 0x0058 */ struct tagVARIANT* rgVarRef;
  /* 0x0060 */ HRESULT _RetVal;
  /* 0x0064 */ long __PADDING__[1];
} PARAM_STRUCT, *PPARAM_STRUCT; /* size: 0x0068 */


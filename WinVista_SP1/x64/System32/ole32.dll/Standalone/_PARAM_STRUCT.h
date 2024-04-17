typedef struct _PARAM_STRUCT
{
  /* 0x0000 */ struct IEnumSTATPROPSTG* This;
  /* 0x0008 */ unsigned long celt;
  /* 0x000c */ char Pad0[4];
  /* 0x0010 */ struct tagSTATPROPSTG* rgelt;
  /* 0x0018 */ unsigned long* pceltFetched;
  /* 0x0020 */ HRESULT _RetVal;
  /* 0x0024 */ long __PADDING__[1];
} PARAM_STRUCT, *PPARAM_STRUCT; /* size: 0x0028 */


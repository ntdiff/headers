typedef struct _PARAM_STRUCT
{
  /* 0x0000 */ struct IEnumSTATPROPSETSTG* This;
  /* 0x0004 */ unsigned long celt;
  /* 0x0008 */ struct tagSTATPROPSETSTG* rgelt;
  /* 0x000c */ unsigned long* pceltFetched;
  /* 0x0010 */ HRESULT _RetVal;
} PARAM_STRUCT, *PPARAM_STRUCT; /* size: 0x0014 */


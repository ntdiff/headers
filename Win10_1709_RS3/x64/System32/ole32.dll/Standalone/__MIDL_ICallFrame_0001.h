typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct __MIDL_ICallFrame_0001
{
  /* 0x0000 */ unsigned long iMethod;
  /* 0x0004 */ int fHasInValues;
  /* 0x0008 */ int fHasInOutValues;
  /* 0x000c */ int fHasOutValues;
  /* 0x0010 */ int fDerivesFromIDispatch;
  /* 0x0014 */ long cInInterfacesMax;
  /* 0x0018 */ long cInOutInterfacesMax;
  /* 0x001c */ long cOutInterfacesMax;
  /* 0x0020 */ long cTopLevelInInterfaces;
  /* 0x0024 */ struct _GUID iid;
  /* 0x0034 */ unsigned long cMethod;
  /* 0x0038 */ unsigned long cParams;
} _MIDL_ICallFrame_0001, *P_MIDL_ICallFrame_0001; /* size: 0x003c */


typedef union _userHMETAFILEPICT::__MIDL_IWinTypes_0005
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct _remoteMETAFILEPICT* hRemote;
    /* 0x0000 */ __int64 hInproc64;
  }; /* size: 0x0008 */
} userHMETAFILEPICT::__MIDL_IWinTypes_0005, *PuserHMETAFILEPICT::__MIDL_IWinTypes_0005; /* size: 0x0008 */

typedef struct _userHMETAFILEPICT
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _userHMETAFILEPICT::__MIDL_IWinTypes_0005 u;
} userHMETAFILEPICT, *PuserHMETAFILEPICT; /* size: 0x0010 */


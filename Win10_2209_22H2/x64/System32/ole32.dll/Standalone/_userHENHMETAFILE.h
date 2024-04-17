typedef union _userHENHMETAFILE::__MIDL_IWinTypes_0006
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct _BYTE_BLOB* hRemote;
    /* 0x0000 */ __int64 hInproc64;
  }; /* size: 0x0008 */
} userHENHMETAFILE::__MIDL_IWinTypes_0006, *PuserHENHMETAFILE::__MIDL_IWinTypes_0006; /* size: 0x0008 */

typedef struct _userHENHMETAFILE
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _userHENHMETAFILE::__MIDL_IWinTypes_0006 u;
} userHENHMETAFILE, *PuserHENHMETAFILE; /* size: 0x0010 */


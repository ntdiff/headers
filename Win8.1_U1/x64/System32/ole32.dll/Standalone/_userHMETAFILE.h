typedef union _userHMETAFILE::__MIDL_IWinTypes_0004
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct _BYTE_BLOB* hRemote;
    /* 0x0000 */ __int64 hInproc64;
  }; /* size: 0x0008 */
} userHMETAFILE::__MIDL_IWinTypes_0004, *PuserHMETAFILE::__MIDL_IWinTypes_0004; /* size: 0x0008 */

typedef struct _userHMETAFILE
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _userHMETAFILE::__MIDL_IWinTypes_0004 u;
} userHMETAFILE, *PuserHMETAFILE; /* size: 0x0010 */


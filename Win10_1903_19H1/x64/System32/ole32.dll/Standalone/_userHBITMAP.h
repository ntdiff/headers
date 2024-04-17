typedef union _userHBITMAP::__MIDL_IWinTypes_0007
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct _userBITMAP* hRemote;
    /* 0x0000 */ __int64 hInproc64;
  }; /* size: 0x0008 */
} userHBITMAP::__MIDL_IWinTypes_0007, *PuserHBITMAP::__MIDL_IWinTypes_0007; /* size: 0x0008 */

typedef struct _userHBITMAP
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _userHBITMAP::__MIDL_IWinTypes_0007 u;
} userHBITMAP, *PuserHBITMAP; /* size: 0x0010 */


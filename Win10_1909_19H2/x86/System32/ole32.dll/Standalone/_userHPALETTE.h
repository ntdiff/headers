typedef union _userHPALETTE::__MIDL_IWinTypes_0008
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct tagLOGPALETTE* hRemote;
    /* 0x0000 */ __int64 hInproc64;
  }; /* size: 0x0008 */
} userHPALETTE::__MIDL_IWinTypes_0008, *PuserHPALETTE::__MIDL_IWinTypes_0008; /* size: 0x0008 */

typedef struct _userHPALETTE
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _userHPALETTE::__MIDL_IWinTypes_0008 u;
} userHPALETTE, *PuserHPALETTE; /* size: 0x0010 */


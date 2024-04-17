typedef union _userHGLOBAL::__MIDL_IWinTypes_0003
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ struct _FLAGGED_BYTE_BLOB* hRemote;
    /* 0x0000 */ __int64 hInproc64;
  }; /* size: 0x0008 */
} userHGLOBAL::__MIDL_IWinTypes_0003, *PuserHGLOBAL::__MIDL_IWinTypes_0003; /* size: 0x0008 */

typedef struct _userHGLOBAL
{
  /* 0x0000 */ long fContext;
  /* 0x0008 */ union _userHGLOBAL::__MIDL_IWinTypes_0003 u;
} userHGLOBAL, *PuserHGLOBAL; /* size: 0x0010 */


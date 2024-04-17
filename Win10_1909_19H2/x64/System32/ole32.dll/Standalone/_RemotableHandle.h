typedef union _RemotableHandle::__MIDL_IWinTypes_0009
{
  union
  {
    /* 0x0000 */ long hInproc;
    /* 0x0000 */ long hRemote;
  }; /* size: 0x0004 */
} RemotableHandle::__MIDL_IWinTypes_0009, *PRemotableHandle::__MIDL_IWinTypes_0009; /* size: 0x0004 */

typedef struct _RemotableHandle
{
  /* 0x0000 */ long fContext;
  /* 0x0004 */ union _RemotableHandle::__MIDL_IWinTypes_0009 u;
} RemotableHandle, *PRemotableHandle; /* size: 0x0008 */


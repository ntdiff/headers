typedef struct _CStdProxyBufferMap
{
  /* 0x0000 */ struct IUnknown* pBaseProxy;
} CStdProxyBufferMap, *PCStdProxyBufferMap; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _NdrDcomAsyncFlags
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long AsyncMsgSet : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned long BeginStarted : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned long BeginDone : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned long FinishStarted : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned long FinishDone : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned long BeginError : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned long FinishError : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned long InvokeForwarded : 1; /* bit position: 7 */
    /* 0x0000 */ unsigned long Unused : 24; /* bit position: 8 */
  }; /* bitfield */
} NdrDcomAsyncFlags, *PNdrDcomAsyncFlags; /* size: 0x0004 */

typedef struct _NdrDcomAsyncCallState
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Lock;
  /* 0x0008 */ void* pAsyncMsg;
  /* 0x0010 */ struct _NdrDcomAsyncFlags Flags;
  /* 0x0014 */ HRESULT Hr;
} NdrDcomAsyncCallState, *PNdrDcomAsyncCallState; /* size: 0x0018 */

struct tagCStdAsyncProxyBuffer
{
  /* 0x0000 */ const struct IRpcProxyBufferVtbl* lpVtbl;
  /* 0x0008 */ const void* pProxyVtbl;
  /* 0x0010 */ long RefCount;
  /* 0x0018 */ struct IUnknown* punkOuter;
  /* 0x0020 */ struct IRpcChannelBuffer* pChannel;
  /* 0x0028 */ struct _CStdProxyBufferMap map;
  /* 0x0030 */ struct IRpcProxyBuffer* pBaseProxyBuffer;
  /* 0x0038 */ struct IPSFactoryBuffer* pPSFactory;
  /* 0x0040 */ struct _GUID iidBase;
  /* 0x0050 */ const struct ICallFactoryVtbl* pCallFactoryVtbl;
  /* 0x0058 */ const struct _GUID* pSyncIID;
  /* 0x0060 */ const struct IReleaseMarshalBuffersVtbl* pRMBVtbl;
  /* 0x0068 */ struct _NdrDcomAsyncCallState CallState;
}; /* size: 0x0080 */


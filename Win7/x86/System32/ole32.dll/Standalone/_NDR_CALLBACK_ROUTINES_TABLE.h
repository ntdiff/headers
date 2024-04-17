typedef struct _NDR_CALLBACK_ROUTINES_TABLE
{
  /* 0x0000 */ void* NdrpServerMarshal /* function */;
  /* 0x0004 */ void* NdrpServerOutInit /* function */;
  /* 0x0008 */ void* NdrpSizing /* function */;
  /* 0x000c */ void* NdrClientZeroOut /* function */;
  /* 0x0010 */ void* I_RpcSetNDRSlot /* function */;
  /* 0x0014 */ void* I_RpcGetAndSetNDRSlot /* function */;
  /* 0x0018 */ void* I_RpcGetNDRSlot /* function */;
  /* 0x001c */ void* NdrpClientMarshal /* function */;
  /* 0x0020 */ void* NdrpClientUnMarshal /* function */;
  /* 0x0024 */ void* NdrpFreeMemoryList /* function */;
  /* 0x0028 */ void* NdrpFreeParams /* function */;
  /* 0x002c */ void* NdrpServerUnMarshal /* function */;
  /* 0x0030 */ void* NdrpPerformRpcInitialization /* function */;
  /* 0x0034 */ void* GlobalMutexClearExternal /* function */;
  /* 0x0038 */ void* GlobalMutexRequestExternal /* function */;
  /* 0x003c */ void* PrintCurrentStackTrace /* function */;
  /* 0x0040 */ void* NdrpCheckMIDLRobust /* function */;
  /* 0x0044 */ void* DbgPrintUUID /* function */;
  /* 0x0048 */ void* NdrpAddCorrelationData /* function */;
  /* 0x004c */ void* NdrpRecordCustomUnmarshal /* function */;
  /* 0x0050 */ void* NdrpComputeConformance /* function */;
  /* 0x0054 */ void* NdrpLogIIDMisMatchEvent /* function */;
  /* 0x0058 */ void* const* pfnMemSizeRoutines /* function */;
  /* 0x005c */ void* const* pfnConvertRoutines /* function */;
  /* 0x0060 */ void* const* pfnFreeRoutines /* function */;
  /* 0x0064 */ void* const* pfnMarshallRoutines /* function */;
  /* 0x0068 */ void* const* pfnSizeRoutines /* function */;
  /* 0x006c */ void* const* pfnUnmarshallRoutines /* function */;
  /* 0x0070 */ void* GetRpcVerifierSettings /* function */;
  /* 0x0074 */ int gfRPCVerifierEnabled;
  /* 0x0078 */ void* AllocWrapper /* function */;
  /* 0x007c */ void* FreeWrapper /* function */;
} NDR_CALLBACK_ROUTINES_TABLE, *PNDR_CALLBACK_ROUTINES_TABLE; /* size: 0x0080 */


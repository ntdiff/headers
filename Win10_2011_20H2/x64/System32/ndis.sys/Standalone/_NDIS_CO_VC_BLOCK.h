typedef struct _NDIS_CO_VC_BLOCK
{
  /* 0x0000 */ unsigned long References;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned __int64 Lock;
  /* 0x0010 */ struct _NDIS_OPEN_BLOCK* ClientOpen;
  /* 0x0018 */ void* ClientContext;
  /* 0x0020 */ struct _NDIS_CO_VC_PTR_BLOCK* pProxyVcPtr;
  /* 0x0028 */ struct _NDIS_CO_VC_PTR_BLOCK* pClientVcPtr;
  /* 0x0030 */ void* CoSendCompleteHandler /* function */;
  /* 0x0038 */ void* CoReceivePacketHandler /* function */;
  /* 0x0040 */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x0048 */ void* CoReceiveNetBufferListsHandler /* function */;
  /* 0x0050 */ struct _NDIS_OPEN_BLOCK* CallMgrOpen;
  /* 0x0058 */ void* CallMgrContext;
  /* 0x0060 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0068 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x0070 */ void* CmModifyCallQoSHandler /* function */;
  /* 0x0078 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0080 */ void* MiniportContext;
  /* 0x0088 */ unsigned __int64 VcId;
} NDIS_CO_VC_BLOCK, *PNDIS_CO_VC_BLOCK; /* size: 0x0090 */


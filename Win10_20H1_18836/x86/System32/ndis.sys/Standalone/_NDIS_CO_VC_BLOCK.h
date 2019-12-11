typedef struct _NDIS_CO_VC_BLOCK
{
  /* 0x0000 */ unsigned long References;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ unsigned long Lock;
  /* 0x000c */ struct _NDIS_OPEN_BLOCK* ClientOpen;
  /* 0x0010 */ void* ClientContext;
  /* 0x0014 */ struct _NDIS_CO_VC_PTR_BLOCK* pProxyVcPtr;
  /* 0x0018 */ struct _NDIS_CO_VC_PTR_BLOCK* pClientVcPtr;
  /* 0x001c */ void* CoSendCompleteHandler /* function */;
  /* 0x0020 */ void* CoReceivePacketHandler /* function */;
  /* 0x0024 */ void* CoSendNetBufferListsCompleteHandler /* function */;
  /* 0x0028 */ void* CoReceiveNetBufferListsHandler /* function */;
  /* 0x002c */ struct _NDIS_OPEN_BLOCK* CallMgrOpen;
  /* 0x0030 */ void* CallMgrContext;
  /* 0x0034 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0038 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x003c */ void* CmModifyCallQoSHandler /* function */;
  /* 0x0040 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0044 */ void* MiniportContext;
  /* 0x0048 */ unsigned __int64 VcId;
} NDIS_CO_VC_BLOCK, *PNDIS_CO_VC_BLOCK; /* size: 0x0050 */


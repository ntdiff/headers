typedef struct _NDIS_CO_PARTY_BLOCK
{
  /* 0x0000 */ struct _NDIS_CO_VC_PTR_BLOCK* VcPtr;
  /* 0x0004 */ void* CallMgrContext;
  /* 0x0008 */ void* ClientContext;
  /* 0x000c */ void* ClIncomingDropPartyHandler /* function */;
  /* 0x0010 */ void* ClDropPartyCompleteHandler /* function */;
} NDIS_CO_PARTY_BLOCK, *PNDIS_CO_PARTY_BLOCK; /* size: 0x0014 */


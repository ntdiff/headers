typedef struct _NDIS_CO_SAP_BLOCK
{
  /* 0x0000 */ void* CallMgrContext;
  /* 0x0008 */ void* ClientContext;
  /* 0x0010 */ struct _NDIS_CO_AF_BLOCK* AfBlock;
  /* 0x0018 */ struct CO_SAP* Sap;
  /* 0x0020 */ unsigned long Flags;
  /* 0x0024 */ long References;
  /* 0x0028 */ unsigned __int64 Lock;
} NDIS_CO_SAP_BLOCK, *PNDIS_CO_SAP_BLOCK; /* size: 0x0030 */


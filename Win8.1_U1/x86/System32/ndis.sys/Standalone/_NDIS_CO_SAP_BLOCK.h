typedef struct _NDIS_CO_SAP_BLOCK
{
  /* 0x0000 */ void* CallMgrContext;
  /* 0x0004 */ void* ClientContext;
  /* 0x0008 */ struct _NDIS_CO_AF_BLOCK* AfBlock;
  /* 0x000c */ struct CO_SAP* Sap;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ long References;
  /* 0x0018 */ unsigned long Lock;
} NDIS_CO_SAP_BLOCK, *PNDIS_CO_SAP_BLOCK; /* size: 0x001c */


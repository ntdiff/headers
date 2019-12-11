typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _NDIS_PD_BLOCK
{
  /* 0x0000 */ struct _NDIS_MINIPORT_BLOCK* Miniport;
  /* 0x0008 */ unsigned long DiagnosticCode;
  /* 0x000c */ unsigned char PDEnabledRegistryValue;
  /* 0x000d */ unsigned char PDBuffersManagedByDriver;
  /* 0x000e */ unsigned char PDNonDmaAdapter;
  /* 0x0010 */ unsigned long PDDomainId;
  /* 0x0014 */ unsigned long PDDmaAddressWidth;
  /* 0x0018 */ struct _NDIS_PD_CONFIG* PDCurrentConfig;
  /* 0x0020 */ unsigned long PDCurrentConfigSize;
  /* 0x0024 */ unsigned long PDCurrentConfigBufferSize;
  /* 0x0028 */ struct _LIST_ENTRY PDClientList;
  /* 0x0038 */ struct _LIST_ENTRY PDBlockListLink;
  /* 0x0048 */ void* PDBMDomain;
  /* 0x0050 */ struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__* PDBMDomainMemberHandle;
} NDIS_PD_BLOCK, *PNDIS_PD_BLOCK; /* size: 0x0058 */


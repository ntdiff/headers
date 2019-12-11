typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_SRIOV_VF_CONFIG_STATE
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned short VFId;
  /* 0x0008 */ unsigned long BlockId;
  /* 0x000c */ unsigned long Length;
} NDIS_SRIOV_VF_CONFIG_STATE, *PNDIS_SRIOV_VF_CONFIG_STATE; /* size: 0x0010 */


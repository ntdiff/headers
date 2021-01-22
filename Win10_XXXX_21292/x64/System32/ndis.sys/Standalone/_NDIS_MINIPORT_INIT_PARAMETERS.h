typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef union _NET_LUID_LH
{
  union
  {
    /* 0x0000 */ unsigned __int64 Value;
    struct
    {
      struct /* bitfield */
      {
        /* 0x0000 */ unsigned __int64 Reserved : 24; /* bit position: 0 */
        /* 0x0000 */ unsigned __int64 NetLuidIndex : 24; /* bit position: 24 */
        /* 0x0000 */ unsigned __int64 IfType : 16; /* bit position: 48 */
      }; /* bitfield */
    } /* size: 0x0008 */ Info;
  }; /* size: 0x0008 */
} NET_LUID_LH, *PNET_LUID_LH; /* size: 0x0008 */

typedef struct _NDIS_MINIPORT_INIT_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ struct _CM_PARTIAL_RESOURCE_LIST* AllocatedResources;
  /* 0x0010 */ void* IMDeviceInstanceContext;
  /* 0x0018 */ void* MiniportAddDeviceContext;
  /* 0x0020 */ unsigned long IfIndex;
  /* 0x0028 */ union _NET_LUID_LH NetLuid;
  /* 0x0030 */ struct _NDIS_PORT_AUTHENTICATION_PARAMETERS* DefaultPortAuthStates;
  /* 0x0038 */ struct _NDIS_PCI_DEVICE_CUSTOM_PROPERTIES* PciDeviceCustomProperties;
} NDIS_MINIPORT_INIT_PARAMETERS, *PNDIS_MINIPORT_INIT_PARAMETERS; /* size: 0x0040 */


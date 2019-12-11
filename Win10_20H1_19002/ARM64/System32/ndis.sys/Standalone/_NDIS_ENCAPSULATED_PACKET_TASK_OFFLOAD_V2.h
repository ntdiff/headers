typedef struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO::_VXLAN_INFO
{
  /* 0x0000 */ unsigned short VxlanUDPPortNumber;
  /* 0x0002 */ unsigned short VxlanUDPPortNumberConfigurable : 1; /* bit position: 0 */
} NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO::_VXLAN_INFO, *PNDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO::_VXLAN_INFO; /* size: 0x0004 */

typedef union _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO
{
  union
  {
    /* 0x0000 */ struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO::_VXLAN_INFO VxlanInfo;
    /* 0x0000 */ unsigned long Value;
  }; /* size: 0x0004 */
} NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO, *PNDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO; /* size: 0x0004 */

typedef struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TransmitChecksumOffloadSupported : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReceiveChecksumOffloadSupported : 4; /* bit position: 4 */
    /* 0x0000 */ unsigned long LsoV2Supported : 4; /* bit position: 8 */
    /* 0x0000 */ unsigned long RssSupported : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned long VmqSupported : 4; /* bit position: 16 */
    /* 0x0000 */ unsigned long Reserved : 12; /* bit position: 20 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long MaxHeaderSizeSupported;
  /* 0x0008 */ union _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2::_ENCAPSULATION_PROTOCOL_INFO EncapsulationProtocolInfo;
  /* 0x000c */ unsigned long Reserved1;
  /* 0x0010 */ unsigned long Reserved2;
} NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2, *PNDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2; /* size: 0x0014 */


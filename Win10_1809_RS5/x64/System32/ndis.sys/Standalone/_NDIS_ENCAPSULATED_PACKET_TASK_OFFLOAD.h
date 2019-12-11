typedef struct _NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned long TransmitChecksumOffloadSupported : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned long ReceiveChecksumOffloadSupported : 4; /* bit position: 4 */
    /* 0x0000 */ unsigned long LsoV2Supported : 4; /* bit position: 8 */
    /* 0x0000 */ unsigned long RssSupported : 4; /* bit position: 12 */
    /* 0x0000 */ unsigned long VmqSupported : 4; /* bit position: 16 */
  }; /* bitfield */
  /* 0x0004 */ unsigned long MaxHeaderSizeSupported;
} NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD, *PNDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD; /* size: 0x0008 */


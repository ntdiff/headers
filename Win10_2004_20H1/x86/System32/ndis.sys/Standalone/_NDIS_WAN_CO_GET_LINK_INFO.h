typedef struct _NDIS_WAN_CO_GET_LINK_INFO
{
  /* 0x0000 */ unsigned long MaxSendFrameSize;
  /* 0x0004 */ unsigned long MaxRecvFrameSize;
  /* 0x0008 */ unsigned long SendFramingBits;
  /* 0x000c */ unsigned long RecvFramingBits;
  /* 0x0010 */ unsigned long SendCompressionBits;
  /* 0x0014 */ unsigned long RecvCompressionBits;
  /* 0x0018 */ unsigned long SendACCM;
  /* 0x001c */ unsigned long RecvACCM;
} NDIS_WAN_CO_GET_LINK_INFO, *PNDIS_WAN_CO_GET_LINK_INFO; /* size: 0x0020 */


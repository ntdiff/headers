typedef struct _NDIS_WAN_CO_INFO
{
  /* 0x0000 */ unsigned long MaxFrameSize;
  /* 0x0004 */ unsigned long MaxSendWindow;
  /* 0x0008 */ unsigned long FramingBits;
  /* 0x000c */ unsigned long DesiredACCM;
} NDIS_WAN_CO_INFO, *PNDIS_WAN_CO_INFO; /* size: 0x0010 */


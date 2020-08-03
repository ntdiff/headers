typedef struct _NDIS_PACKET_OOB_DATA
{
  union
  {
    /* 0x0000 */ unsigned __int64 TimeToSend;
    /* 0x0000 */ unsigned __int64 TimeSent;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned __int64 TimeReceived;
  /* 0x0010 */ unsigned int HeaderSize;
  /* 0x0014 */ unsigned int SizeMediaSpecificInfo;
  /* 0x0018 */ void* MediaSpecificInformation;
  /* 0x0020 */ int Status;
  /* 0x0024 */ long __PADDING__[1];
} NDIS_PACKET_OOB_DATA, *PNDIS_PACKET_OOB_DATA; /* size: 0x0028 */


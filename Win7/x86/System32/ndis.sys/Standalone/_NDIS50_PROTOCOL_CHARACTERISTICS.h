typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _NDIS50_PROTOCOL_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorNdisVersion;
  /* 0x0001 */ unsigned char MinorNdisVersion;
  /* 0x0002 */ unsigned short Filler;
  union
  {
    /* 0x0004 */ unsigned int Reserved;
    /* 0x0004 */ unsigned int Flags;
  }; /* size: 0x0004 */
  /* 0x0008 */ void* OpenAdapterCompleteHandler /* function */;
  /* 0x000c */ void* CloseAdapterCompleteHandler /* function */;
  union
  {
    /* 0x0010 */ void* SendCompleteHandler /* function */;
    /* 0x0010 */ void* WanSendCompleteHandler /* function */;
  }; /* size: 0x0004 */
  union
  {
    /* 0x0014 */ void* TransferDataCompleteHandler /* function */;
    /* 0x0014 */ void* WanTransferDataCompleteHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0018 */ void* ResetCompleteHandler /* function */;
  /* 0x001c */ void* RequestCompleteHandler /* function */;
  union
  {
    /* 0x0020 */ void* ReceiveHandler /* function */;
    /* 0x0020 */ void* WanReceiveHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0024 */ void* ReceiveCompleteHandler /* function */;
  /* 0x0028 */ void* StatusHandler /* function */;
  /* 0x002c */ void* StatusCompleteHandler /* function */;
  /* 0x0030 */ struct _UNICODE_STRING Name;
  /* 0x0038 */ void* ReceivePacketHandler /* function */;
  /* 0x003c */ void* BindAdapterHandler /* function */;
  /* 0x0040 */ void* UnbindAdapterHandler /* function */;
  /* 0x0044 */ void* PnPEventHandler /* function */;
  /* 0x0048 */ void* UnloadHandler /* function */;
  /* 0x004c */ void* ReservedHandlers[4];
  /* 0x005c */ void* CoSendCompleteHandler /* function */;
  /* 0x0060 */ void* CoStatusHandler /* function */;
  /* 0x0064 */ void* CoReceivePacketHandler /* function */;
  /* 0x0068 */ void* CoAfRegisterNotifyHandler /* function */;
} NDIS50_PROTOCOL_CHARACTERISTICS, *PNDIS50_PROTOCOL_CHARACTERISTICS; /* size: 0x006c */


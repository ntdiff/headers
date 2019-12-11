typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _NDIS40_PROTOCOL_CHARACTERISTICS
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
  /* 0x0010 */ void* CloseAdapterCompleteHandler /* function */;
  union
  {
    /* 0x0018 */ void* SendCompleteHandler /* function */;
    /* 0x0018 */ void* WanSendCompleteHandler /* function */;
  }; /* size: 0x0008 */
  union
  {
    /* 0x0020 */ void* TransferDataCompleteHandler /* function */;
    /* 0x0020 */ void* WanTransferDataCompleteHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* ResetCompleteHandler /* function */;
  /* 0x0030 */ void* RequestCompleteHandler /* function */;
  union
  {
    /* 0x0038 */ void* ReceiveHandler /* function */;
    /* 0x0038 */ void* WanReceiveHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0040 */ void* ReceiveCompleteHandler /* function */;
  /* 0x0048 */ void* StatusHandler /* function */;
  /* 0x0050 */ void* StatusCompleteHandler /* function */;
  /* 0x0058 */ struct _UNICODE_STRING Name;
  /* 0x0068 */ void* ReceivePacketHandler /* function */;
  /* 0x0070 */ void* BindAdapterHandler /* function */;
  /* 0x0078 */ void* UnbindAdapterHandler /* function */;
  /* 0x0080 */ void* PnPEventHandler /* function */;
  /* 0x0088 */ void* UnloadHandler /* function */;
} NDIS40_PROTOCOL_CHARACTERISTICS, *PNDIS40_PROTOCOL_CHARACTERISTICS; /* size: 0x0090 */


typedef struct _NDIS50_MINIPORT_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorNdisVersion;
  /* 0x0001 */ unsigned char MinorNdisVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* CheckForHangHandler /* function */;
  /* 0x0010 */ void* DisableInterruptHandler /* function */;
  /* 0x0018 */ void* EnableInterruptHandler /* function */;
  /* 0x0020 */ void* HaltHandler /* function */;
  /* 0x0028 */ void* HandleInterruptHandler /* function */;
  /* 0x0030 */ void* InitializeHandler /* function */;
  /* 0x0038 */ void* ISRHandler /* function */;
  /* 0x0040 */ void* QueryInformationHandler /* function */;
  /* 0x0048 */ void* ReconfigureHandler /* function */;
  /* 0x0050 */ void* ResetHandler /* function */;
  union
  {
    /* 0x0058 */ void* SendHandler /* function */;
    /* 0x0058 */ void* WanSendHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0060 */ void* SetInformationHandler /* function */;
  union
  {
    /* 0x0068 */ void* TransferDataHandler /* function */;
    /* 0x0068 */ void* WanTransferDataHandler /* function */;
  }; /* size: 0x0008 */
  /* 0x0070 */ void* ReturnPacketHandler /* function */;
  /* 0x0078 */ void* SendPacketsHandler /* function */;
  /* 0x0080 */ void* AllocateCompleteHandler /* function */;
  /* 0x0088 */ void* CoCreateVcHandler /* function */;
  /* 0x0090 */ void* CoDeleteVcHandler /* function */;
  /* 0x0098 */ void* CoActivateVcHandler /* function */;
  /* 0x00a0 */ void* CoDeactivateVcHandler /* function */;
  /* 0x00a8 */ void* CoSendPacketsHandler /* function */;
  /* 0x00b0 */ void* CoRequestHandler /* function */;
} NDIS50_MINIPORT_CHARACTERISTICS, *PNDIS50_MINIPORT_CHARACTERISTICS; /* size: 0x00b8 */


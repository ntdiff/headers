typedef struct _NDIS50_MINIPORT_CHARACTERISTICS
{
  /* 0x0000 */ unsigned char MajorNdisVersion;
  /* 0x0001 */ unsigned char MinorNdisVersion;
  /* 0x0002 */ unsigned short Filler;
  /* 0x0004 */ unsigned int Reserved;
  /* 0x0008 */ void* CheckForHangHandler /* function */;
  /* 0x000c */ void* DisableInterruptHandler /* function */;
  /* 0x0010 */ void* EnableInterruptHandler /* function */;
  /* 0x0014 */ void* HaltHandler /* function */;
  /* 0x0018 */ void* HandleInterruptHandler /* function */;
  /* 0x001c */ void* InitializeHandler /* function */;
  /* 0x0020 */ void* ISRHandler /* function */;
  /* 0x0024 */ void* QueryInformationHandler /* function */;
  /* 0x0028 */ void* ReconfigureHandler /* function */;
  /* 0x002c */ void* ResetHandler /* function */;
  union
  {
    /* 0x0030 */ void* SendHandler /* function */;
    /* 0x0030 */ void* WanSendHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x0034 */ void* SetInformationHandler /* function */;
  union
  {
    /* 0x0038 */ void* TransferDataHandler /* function */;
    /* 0x0038 */ void* WanTransferDataHandler /* function */;
  }; /* size: 0x0004 */
  /* 0x003c */ void* ReturnPacketHandler /* function */;
  /* 0x0040 */ void* SendPacketsHandler /* function */;
  /* 0x0044 */ void* AllocateCompleteHandler /* function */;
  /* 0x0048 */ void* CoCreateVcHandler /* function */;
  /* 0x004c */ void* CoDeleteVcHandler /* function */;
  /* 0x0050 */ void* CoActivateVcHandler /* function */;
  /* 0x0054 */ void* CoDeactivateVcHandler /* function */;
  /* 0x0058 */ void* CoSendPacketsHandler /* function */;
  /* 0x005c */ void* CoRequestHandler /* function */;
} NDIS50_MINIPORT_CHARACTERISTICS, *PNDIS50_MINIPORT_CHARACTERISTICS; /* size: 0x0060 */

typedef struct _NDIS51_MINIPORT_CHARACTERISTICS
{
  union
  {
    /* 0x0000 */ struct _NDIS50_MINIPORT_CHARACTERISTICS Ndis50Chars;
    struct
    {
      /* 0x0000 */ unsigned char MajorNdisVersion;
      /* 0x0001 */ unsigned char MinorNdisVersion;
      /* 0x0002 */ unsigned short Filler;
      /* 0x0004 */ unsigned int Reserved;
      /* 0x0008 */ void* CheckForHangHandler /* function */;
      /* 0x000c */ void* DisableInterruptHandler /* function */;
      /* 0x0010 */ void* EnableInterruptHandler /* function */;
      /* 0x0014 */ void* HaltHandler /* function */;
      /* 0x0018 */ void* HandleInterruptHandler /* function */;
      /* 0x001c */ void* InitializeHandler /* function */;
      /* 0x0020 */ void* ISRHandler /* function */;
      /* 0x0024 */ void* QueryInformationHandler /* function */;
      /* 0x0028 */ void* ReconfigureHandler /* function */;
      /* 0x002c */ void* ResetHandler /* function */;
      union
      {
        /* 0x0030 */ void* SendHandler /* function */;
        /* 0x0030 */ void* WanSendHandler /* function */;
      }; /* size: 0x0004 */
      /* 0x0034 */ void* SetInformationHandler /* function */;
      union
      {
        /* 0x0038 */ void* TransferDataHandler /* function */;
        /* 0x0038 */ void* WanTransferDataHandler /* function */;
      }; /* size: 0x0004 */
      /* 0x003c */ void* ReturnPacketHandler /* function */;
      /* 0x0040 */ void* SendPacketsHandler /* function */;
      /* 0x0044 */ void* AllocateCompleteHandler /* function */;
      /* 0x0048 */ void* CoCreateVcHandler /* function */;
      /* 0x004c */ void* CoDeleteVcHandler /* function */;
      /* 0x0050 */ void* CoActivateVcHandler /* function */;
      /* 0x0054 */ void* CoDeactivateVcHandler /* function */;
      /* 0x0058 */ void* CoSendPacketsHandler /* function */;
      /* 0x005c */ void* CoRequestHandler /* function */;
    }; /* size: 0x0060 */
  }; /* size: 0x0060 */
  /* 0x0060 */ void* CancelSendPacketsHandler /* function */;
  /* 0x0064 */ void* PnPEventNotifyHandler /* function */;
  /* 0x0068 */ void* AdapterShutdownHandler /* function */;
  /* 0x006c */ void* Reserved1;
  /* 0x0070 */ void* Reserved2;
  /* 0x0074 */ void* Reserved3;
  /* 0x0078 */ void* Reserved4;
} NDIS51_MINIPORT_CHARACTERISTICS, *PNDIS51_MINIPORT_CHARACTERISTICS; /* size: 0x007c */


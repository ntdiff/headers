typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PD_BUFFER_VIRTUAL_SUBNET_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned int VirtualSubnetId : 24; /* bit position: 0 */
    /* 0x0000 */ unsigned int Reserved : 8; /* bit position: 24 */
  }; /* bitfield */
} PD_BUFFER_VIRTUAL_SUBNET_INFO, *PPD_BUFFER_VIRTUAL_SUBNET_INFO; /* size: 0x0004 */

typedef struct _PD_BUFFER_8021Q_INFO
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned short UserPriority : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned short CanonicalFormatId : 1; /* bit position: 3 */
    /* 0x0000 */ unsigned short VlanId : 12; /* bit position: 4 */
  }; /* bitfield */
} PD_BUFFER_8021Q_INFO, *PPD_BUFFER_8021Q_INFO; /* size: 0x0002 */

typedef struct _PD_BUFFER
{
  /* 0x0000 */ struct _PD_BUFFER* NextPDBuffer;
  /* 0x0008 */ struct _PD_BUFFER* NextPartialPDBuffer;
  /* 0x0010 */ void* PDClientReserved;
  /* 0x0018 */ void* PDClientContext;
  /* 0x0020 */ unsigned char* DataBufferVirtualAddress;
  /* 0x0028 */ union _LARGE_INTEGER DataBufferDmaLogicalAddress;
  /* 0x0030 */ unsigned long DataBufferSize;
  /* 0x0034 */ unsigned short PDClientContextSize;
  /* 0x0036 */ unsigned short Attributes;
  /* 0x0038 */ unsigned short Flags;
  /* 0x003a */ unsigned short DataStart;
  /* 0x003c */ unsigned long DataLength;
  struct
  {
    union
    {
      /* 0x0040 */ unsigned __int64 RxFilterContext;
      /* 0x0040 */ unsigned __int64 GftFlowEntryId;
    }; /* size: 0x0008 */
    /* 0x0048 */ unsigned long RxHashValue;
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x004c */ unsigned long RxIPHeaderChecksumSucceeded : 1; /* bit position: 0 */
          /* 0x004c */ unsigned long RxTCPChecksumSucceeded : 1; /* bit position: 1 */
          /* 0x004c */ unsigned long RxUDPChecksumSucceeded : 1; /* bit position: 2 */
          /* 0x004c */ unsigned long RxIPHeaderChecksumFailed : 1; /* bit position: 3 */
          /* 0x004c */ unsigned long RxTCPChecksumFailed : 1; /* bit position: 4 */
          /* 0x004c */ unsigned long RxUDPChecksumFailed : 1; /* bit position: 5 */
          /* 0x004c */ unsigned long RxHashComputed : 1; /* bit position: 6 */
          /* 0x004c */ unsigned long RxHashWithL4PortNumbers : 1; /* bit position: 7 */
          /* 0x004c */ unsigned long RxGftExceptionPacket : 1; /* bit position: 8 */
          /* 0x004c */ unsigned long RxGftCopyPacket : 1; /* bit position: 9 */
          /* 0x004c */ unsigned long RxGftSamplePacket : 1; /* bit position: 10 */
          /* 0x004c */ unsigned long RxReserved1 : 5; /* bit position: 11 */
          /* 0x004c */ unsigned long RxCoalescedSegCount : 16; /* bit position: 16 */
        }; /* bitfield */
        /* 0x0050 */ unsigned long RxRscTcpTimestampDelta;
      }; /* size: 0x0008 */
      /* 0x004c */ unsigned long RxOffloads[2];
    }; /* size: 0x0008 */
    union
    {
      struct
      {
        struct /* bitfield */
        {
          /* 0x0054 */ unsigned long TxIsIPv4 : 1; /* bit position: 0 */
          /* 0x0054 */ unsigned long TxIsIPv6 : 1; /* bit position: 1 */
          /* 0x0054 */ unsigned long TxTransportHeaderOffset : 10; /* bit position: 2 */
          /* 0x0054 */ unsigned long TxMSS : 20; /* bit position: 12 */
        }; /* bitfield */
        struct /* bitfield */
        {
          /* 0x0058 */ unsigned long TxComputeIPHeaderChecksum : 1; /* bit position: 0 */
          /* 0x0058 */ unsigned long TxComputeTCPChecksum : 1; /* bit position: 1 */
          /* 0x0058 */ unsigned long TxComputeUDPChecksum : 1; /* bit position: 2 */
          /* 0x0058 */ unsigned long TxIsEncapsulatedPacket : 1; /* bit position: 3 */
          /* 0x0058 */ unsigned long TxInnerPacketOffsetsValid : 1; /* bit position: 4 */
          /* 0x0058 */ unsigned long TxReserved1 : 11; /* bit position: 5 */
          /* 0x0058 */ unsigned long TxInnerFrameOffset : 8; /* bit position: 16 */
          /* 0x0058 */ unsigned long TxInnerIpHeaderRelativeOffset : 6; /* bit position: 24 */
          /* 0x0058 */ unsigned long TxInnerIsIPv6 : 1; /* bit position: 30 */
          /* 0x0058 */ unsigned long TxInnerTcpOptionsPresent : 1; /* bit position: 31 */
        }; /* bitfield */
      }; /* size: 0x0008 */
      /* 0x0054 */ unsigned long TxOffloads[2];
    }; /* size: 0x0008 */
    /* 0x005c */ struct _PD_BUFFER_VIRTUAL_SUBNET_INFO VirtualSubnetInfo;
    /* 0x0060 */ struct _PD_BUFFER_8021Q_INFO Ieee8021qInfo;
    /* 0x0062 */ unsigned short GftSourceVPortId;
    /* 0x0064 */ unsigned long Reserved;
    /* 0x0068 */ unsigned __int64 ProviderScratch;
  } /* size: 0x0030 */ MetaDataV0;
} PD_BUFFER, *PPD_BUFFER; /* size: 0x0070 */


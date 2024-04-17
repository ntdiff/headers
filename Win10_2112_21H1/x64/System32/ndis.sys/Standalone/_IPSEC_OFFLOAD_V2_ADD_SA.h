typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _IPSEC_OFFLOAD_V2_OPERATION
{
  IPsecOffloadV2Ah = 1,
  IPsecOffloadV2Esp = 2,
  IPsecOffloadV2Max = 3,
} IPSEC_OFFLOAD_V2_OPERATION, *PIPSEC_OFFLOAD_V2_OPERATION;

typedef struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO
{
  /* 0x0000 */ unsigned long Identifier;
  /* 0x0004 */ unsigned long KeyLength;
  /* 0x0008 */ unsigned long KeyOffsetBytes;
  /* 0x000c */ unsigned long AdditionalInfo;
} IPSEC_OFFLOAD_V2_ALGORITHM_INFO, *PIPSEC_OFFLOAD_V2_ALGORITHM_INFO; /* size: 0x0010 */

typedef struct _IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION
{
  /* 0x0000 */ unsigned long Flags;
  /* 0x0004 */ enum _IPSEC_OFFLOAD_V2_OPERATION Operation;
  /* 0x0008 */ unsigned long Spi;
  /* 0x000c */ struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO AuthenticationAlgorithm;
  /* 0x001c */ struct _IPSEC_OFFLOAD_V2_ALGORITHM_INFO EncryptionAlgorithm;
  /* 0x002c */ unsigned long SequenceNumberHighOrder;
} IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION, *PIPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION; /* size: 0x0030 */

typedef struct _IPSEC_OFFLOAD_V2_ADD_SA
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ struct _IPSEC_OFFLOAD_V2_ADD_SA* Next;
  /* 0x0010 */ unsigned long NumExtHdrs;
  /* 0x0014 */ unsigned long Flags;
  union
  {
    struct
    {
      /* 0x0018 */ unsigned long SrcAddr;
      /* 0x001c */ unsigned long DestAddr;
    } /* size: 0x0008 */ IPv4Endpoints;
    struct
    {
      /* 0x0018 */ unsigned char SrcAddr[16];
      /* 0x0028 */ unsigned char DestAddr[16];
    } /* size: 0x0020 */ IPv6Endpoints;
  }; /* size: 0x0020 */
  /* 0x0038 */ void* OffloadHandle;
  /* 0x0040 */ unsigned long UdpEspEncapsulation;
  /* 0x0044 */ struct _IPSEC_OFFLOAD_V2_SECURITY_ASSOCIATION SecAssoc[2];
  /* 0x00a4 */ unsigned long KeyLength;
  /* 0x00a8 */ unsigned char KeyData[1];
  /* 0x00a9 */ char __PADDING__[7];
} IPSEC_OFFLOAD_V2_ADD_SA, *PIPSEC_OFFLOAD_V2_ADD_SA; /* size: 0x00b0 */


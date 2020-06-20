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

typedef struct _IPSEC_OFFLOAD_V2_UPDATE_SA
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* OffloadHandle;
  /* 0x0010 */ enum _IPSEC_OFFLOAD_V2_OPERATION Operation;
  /* 0x0014 */ unsigned long Spi;
  /* 0x0018 */ unsigned long SequenceNumberHighOrder;
  /* 0x001c */ long __PADDING__[1];
} IPSEC_OFFLOAD_V2_UPDATE_SA, *PIPSEC_OFFLOAD_V2_UPDATE_SA; /* size: 0x0020 */


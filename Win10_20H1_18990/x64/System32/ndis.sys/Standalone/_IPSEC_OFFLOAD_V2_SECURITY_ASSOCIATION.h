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


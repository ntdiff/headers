typedef struct _HAL_HV_DMA_DOMAIN_INFO
{
  /* 0x0000 */ unsigned long DomainId;
  /* 0x0004 */ unsigned char IsStage1;
  /* 0x0005 */ char __PADDING__[3];
} HAL_HV_DMA_DOMAIN_INFO, *PHAL_HV_DMA_DOMAIN_INFO; /* size: 0x0008 */

typedef struct _HAL_HV_DMA_CREATE_DOMAIN_INFO
{
  /* 0x0000 */ struct _HAL_HV_DMA_DOMAIN_INFO DomainInfo;
  /* 0x0008 */ unsigned char InheritPassthroughDomain;
  /* 0x0009 */ unsigned char ForwardProgressRequired;
  /* 0x000a */ char __PADDING__[2];
} HAL_HV_DMA_CREATE_DOMAIN_INFO, *PHAL_HV_DMA_CREATE_DOMAIN_INFO; /* size: 0x000c */


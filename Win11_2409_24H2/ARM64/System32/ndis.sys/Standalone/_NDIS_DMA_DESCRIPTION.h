typedef enum _DMA_WIDTH
{
  Width8Bits = 0,
  Width16Bits = 1,
  Width32Bits = 2,
  Width64Bits = 3,
  WidthNoWrap = 4,
  MaximumDmaWidth = 5,
} DMA_WIDTH, *PDMA_WIDTH;

typedef enum _DMA_SPEED
{
  Compatible = 0,
  TypeA = 1,
  TypeB = 2,
  TypeC = 3,
  TypeF = 4,
  MaximumDmaSpeed = 5,
} DMA_SPEED, *PDMA_SPEED;

typedef struct _NDIS_DMA_DESCRIPTION
{
  /* 0x0000 */ unsigned char DemandMode;
  /* 0x0001 */ unsigned char AutoInitialize;
  /* 0x0002 */ unsigned char DmaChannelSpecified;
  /* 0x0004 */ enum _DMA_WIDTH DmaWidth;
  /* 0x0008 */ enum _DMA_SPEED DmaSpeed;
  /* 0x000c */ unsigned long DmaPort;
  /* 0x0010 */ unsigned long DmaChannel;
} NDIS_DMA_DESCRIPTION, *PNDIS_DMA_DESCRIPTION; /* size: 0x0014 */


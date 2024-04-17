typedef struct _DMA_CONFIGURATION_BYTE0
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Channel : 3; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 3; /* bit position: 3 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} DMA_CONFIGURATION_BYTE0, *PDMA_CONFIGURATION_BYTE0; /* size: 0x0001 */

typedef struct _DMA_CONFIGURATION_BYTE1
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Reserved0 : 2; /* bit position: 0 */
    /* 0x0000 */ unsigned char TransferSize : 2; /* bit position: 2 */
    /* 0x0000 */ unsigned char Timing : 2; /* bit position: 4 */
    /* 0x0000 */ unsigned char Reserved1 : 2; /* bit position: 6 */
  }; /* bitfield */
} DMA_CONFIGURATION_BYTE1, *PDMA_CONFIGURATION_BYTE1; /* size: 0x0001 */

typedef struct _EISA_DMA_CONFIGURATION
{
  /* 0x0000 */ struct _DMA_CONFIGURATION_BYTE0 ConfigurationByte0;
  /* 0x0001 */ struct _DMA_CONFIGURATION_BYTE1 ConfigurationByte1;
} EISA_DMA_CONFIGURATION, *PEISA_DMA_CONFIGURATION; /* size: 0x0002 */


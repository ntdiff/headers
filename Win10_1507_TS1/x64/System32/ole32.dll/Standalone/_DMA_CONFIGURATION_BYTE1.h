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


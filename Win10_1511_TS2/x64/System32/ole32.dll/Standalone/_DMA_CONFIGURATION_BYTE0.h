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


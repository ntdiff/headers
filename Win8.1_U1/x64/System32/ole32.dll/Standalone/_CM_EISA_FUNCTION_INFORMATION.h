typedef struct _EISA_MEMORY_TYPE
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char ReadWrite : 1; /* bit position: 0 */
    /* 0x0000 */ unsigned char Cached : 1; /* bit position: 1 */
    /* 0x0000 */ unsigned char Reserved0 : 1; /* bit position: 2 */
    /* 0x0000 */ unsigned char Type : 2; /* bit position: 3 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Reserved1 : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} EISA_MEMORY_TYPE, *PEISA_MEMORY_TYPE; /* size: 0x0001 */

typedef struct _EISA_MEMORY_CONFIGURATION
{
  /* 0x0000 */ struct _EISA_MEMORY_TYPE ConfigurationByte;
  /* 0x0001 */ unsigned char DataSize;
  /* 0x0002 */ unsigned short AddressLowWord;
  /* 0x0004 */ unsigned char AddressHighByte;
  /* 0x0005 */ unsigned short MemorySize;
} EISA_MEMORY_CONFIGURATION, *PEISA_MEMORY_CONFIGURATION; /* size: 0x0007 */

typedef struct _EISA_IRQ_DESCRIPTOR
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char Interrupt : 4; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 1; /* bit position: 4 */
    /* 0x0000 */ unsigned char LevelTriggered : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} EISA_IRQ_DESCRIPTOR, *PEISA_IRQ_DESCRIPTOR; /* size: 0x0001 */

typedef struct _EISA_IRQ_CONFIGURATION
{
  /* 0x0000 */ struct _EISA_IRQ_DESCRIPTOR ConfigurationByte;
  /* 0x0001 */ unsigned char Reserved;
} EISA_IRQ_CONFIGURATION, *PEISA_IRQ_CONFIGURATION; /* size: 0x0002 */

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

typedef struct _EISA_PORT_DESCRIPTOR
{
  struct /* bitfield */
  {
    /* 0x0000 */ unsigned char NumberPorts : 5; /* bit position: 0 */
    /* 0x0000 */ unsigned char Reserved : 1; /* bit position: 5 */
    /* 0x0000 */ unsigned char Shared : 1; /* bit position: 6 */
    /* 0x0000 */ unsigned char MoreEntries : 1; /* bit position: 7 */
  }; /* bitfield */
} EISA_PORT_DESCRIPTOR, *PEISA_PORT_DESCRIPTOR; /* size: 0x0001 */

typedef struct _EISA_PORT_CONFIGURATION
{
  /* 0x0000 */ struct _EISA_PORT_DESCRIPTOR Configuration;
  /* 0x0001 */ unsigned short PortAddress;
} EISA_PORT_CONFIGURATION, *PEISA_PORT_CONFIGURATION; /* size: 0x0003 */

typedef struct _CM_EISA_FUNCTION_INFORMATION
{
  /* 0x0000 */ unsigned long CompressedId;
  /* 0x0004 */ unsigned char IdSlotFlags1;
  /* 0x0005 */ unsigned char IdSlotFlags2;
  /* 0x0006 */ unsigned char MinorRevision;
  /* 0x0007 */ unsigned char MajorRevision;
  /* 0x0008 */ unsigned char Selections[26];
  /* 0x0022 */ unsigned char FunctionFlags;
  /* 0x0023 */ unsigned char TypeString[80];
  /* 0x0073 */ struct _EISA_MEMORY_CONFIGURATION EisaMemory[9];
  /* 0x00b2 */ struct _EISA_IRQ_CONFIGURATION EisaIrq[7];
  /* 0x00c0 */ struct _EISA_DMA_CONFIGURATION EisaDma[4];
  /* 0x00c8 */ struct _EISA_PORT_CONFIGURATION EisaPort[20];
  /* 0x0104 */ unsigned char InitializationData[60];
} CM_EISA_FUNCTION_INFORMATION, *PCM_EISA_FUNCTION_INFORMATION; /* size: 0x0140 */


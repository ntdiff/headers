typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_INTERRUPT_TYPE
{
  NDIS_CONNECT_LINE_BASED = 1,
  NDIS_CONNECT_MESSAGE_BASED = 2,
} NDIS_INTERRUPT_TYPE, *PNDIS_INTERRUPT_TYPE;

typedef struct _NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0008 */ void* InterruptHandler /* function */;
  /* 0x0010 */ void* InterruptDpcHandler /* function */;
  /* 0x0018 */ void* DisableInterruptHandler /* function */;
  /* 0x0020 */ void* EnableInterruptHandler /* function */;
  /* 0x0028 */ unsigned char MsiSupported;
  /* 0x0029 */ unsigned char MsiSyncWithAllMessages;
  /* 0x0030 */ void* MessageInterruptHandler /* function */;
  /* 0x0038 */ void* MessageInterruptDpcHandler /* function */;
  /* 0x0040 */ void* DisableMessageInterruptHandler /* function */;
  /* 0x0048 */ void* EnableMessageInterruptHandler /* function */;
  /* 0x0050 */ enum _NDIS_INTERRUPT_TYPE InterruptType;
  /* 0x0058 */ struct _IO_INTERRUPT_MESSAGE_INFO* MessageInfoTable;
} NDIS_MINIPORT_INTERRUPT_CHARACTERISTICS, *PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS; /* size: 0x0060 */


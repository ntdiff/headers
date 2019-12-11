typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_INTERRUPT_MODERATION
{
  NdisInterruptModerationUnknown = 0,
  NdisInterruptModerationNotSupported = 1,
  NdisInterruptModerationEnabled = 2,
  NdisInterruptModerationDisabled = 3,
} NDIS_INTERRUPT_MODERATION, *PNDIS_INTERRUPT_MODERATION;

typedef struct _NDIS_INTERRUPT_MODERATION_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ unsigned long Flags;
  /* 0x0008 */ enum _NDIS_INTERRUPT_MODERATION InterruptModeration;
} NDIS_INTERRUPT_MODERATION_PARAMETERS, *PNDIS_INTERRUPT_MODERATION_PARAMETERS; /* size: 0x000c */


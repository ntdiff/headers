typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef struct _NDIS_MINIPORT_RESTART_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ struct _NDIS_RESTART_ATTRIBUTES* RestartAttributes;
  /* 0x0008 */ unsigned long Flags;
} NDIS_MINIPORT_RESTART_PARAMETERS, *PNDIS_MINIPORT_RESTART_PARAMETERS; /* size: 0x000c */


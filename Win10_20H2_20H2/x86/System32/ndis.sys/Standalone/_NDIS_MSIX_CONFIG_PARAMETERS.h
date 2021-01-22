typedef struct _NDIS_OBJECT_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Revision;
  /* 0x0002 */ unsigned short Size;
} NDIS_OBJECT_HEADER, *PNDIS_OBJECT_HEADER; /* size: 0x0004 */

typedef enum _NDIS_MSIX_TABLE_CONFIG
{
  NdisMSIXTableConfigSetTableEntry = 0,
  NdisMSIXTableConfigMaskTableEntry = 1,
  NdisMSIXTableConfigUnmaskTableEntry = 2,
  NdisMSIXTableConfigMax = 3,
} NDIS_MSIX_TABLE_CONFIG, *PNDIS_MSIX_TABLE_CONFIG;

typedef struct _NDIS_MSIX_CONFIG_PARAMETERS
{
  /* 0x0000 */ struct _NDIS_OBJECT_HEADER Header;
  /* 0x0004 */ enum _NDIS_MSIX_TABLE_CONFIG ConfigOperation;
  /* 0x0008 */ unsigned long TableEntry;
  /* 0x000c */ unsigned long MessageNumber;
} NDIS_MSIX_CONFIG_PARAMETERS, *PNDIS_MSIX_CONFIG_PARAMETERS; /* size: 0x0010 */


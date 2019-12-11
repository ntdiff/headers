typedef enum _NDIS_MSIX_TABLE_CONFIG
{
  NdisMSIXTableConfigSetTableEntry = 0,
  NdisMSIXTableConfigMaskTableEntry = 1,
  NdisMSIXTableConfigUnmaskTableEntry = 2,
  NdisMSIXTableConfigMax = 3,
} NDIS_MSIX_TABLE_CONFIG, *PNDIS_MSIX_TABLE_CONFIG;


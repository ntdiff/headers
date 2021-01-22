typedef enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE
{
  CommonBufferConfigTypeLogicalAddressLimits = 0,
  CommonBufferConfigTypeSubSection = 1,
  CommonBufferConfigTypeHardwareAccessPermissions = 2,
  CommonBufferConfigTypeMax = 3,
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE, *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE;

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE
{
  CommonBufferHardwareAccessReadOnly = 0,
  CommonBufferHardwareAccessWriteOnly = 1,
  CommonBufferHardwareAccessReadWrite = 2,
  CommonBufferHardwareAccessMax = 3,
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE, *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE;

typedef struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION
{
  /* 0x0000 */ enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE ConfigType;
  union
  {
    struct
    {
      /* 0x0008 */ union _LARGE_INTEGER MinimumAddress;
      /* 0x0010 */ union _LARGE_INTEGER MaximumAddress;
    } /* size: 0x0010 */ LogicalAddressLimits;
    struct
    {
      /* 0x0008 */ unsigned __int64 Offset;
      /* 0x0010 */ unsigned long Length;
      /* 0x0014 */ long __PADDING__[1];
    } /* size: 0x0010 */ SubSection;
    /* 0x0008 */ enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType;
    /* 0x0008 */ unsigned __int64 Reserved[4];
  }; /* size: 0x0020 */
} DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION, *PDMA_COMMON_BUFFER_EXTENDED_CONFIGURATION; /* size: 0x0028 */


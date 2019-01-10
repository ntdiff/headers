typedef enum _PEP_ACPI_RESOURCE_TYPE
{
  PepAcpiMemory = 0,
  PepAcpiIoPort = 1,
  PepAcpiInterrupt = 2,
  PepAcpiGpioIo = 3,
  PepAcpiGpioInt = 4,
  PepAcpiSpbI2c = 5,
  PepAcpiSpbSpi = 6,
  PepAcpiSpbUart = 7,
  PepAcpiExtendedMemory = 8,
  PepAcpiExtendedIo = 9,
} PEP_ACPI_RESOURCE_TYPE, *PPEP_ACPI_RESOURCE_TYPE;

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

typedef struct _PEP_ACPI_IO_MEMORY_RESOURCE
{
  /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
  /* 0x0004 */ unsigned char Information;
  /* 0x0008 */ union _LARGE_INTEGER MinimumAddress;
  /* 0x0010 */ union _LARGE_INTEGER MaximumAddress;
  /* 0x0018 */ unsigned long Alignment;
  /* 0x001c */ unsigned long Length;
} PEP_ACPI_IO_MEMORY_RESOURCE, *PPEP_ACPI_IO_MEMORY_RESOURCE; /* size: 0x0020 */

typedef enum _KINTERRUPT_MODE
{
  LevelSensitive = 0,
  Latched = 1,
} KINTERRUPT_MODE, *PKINTERRUPT_MODE;

typedef enum _KINTERRUPT_POLARITY
{
  InterruptPolarityUnknown = 0,
  InterruptActiveHigh = 1,
  InterruptRisingEdge = 1,
  InterruptActiveLow = 2,
  InterruptFallingEdge = 2,
  InterruptActiveBoth = 3,
  InterruptActiveBothTriggerLow = 3,
  InterruptActiveBothTriggerHigh = 4,
} KINTERRUPT_POLARITY, *PKINTERRUPT_POLARITY;

typedef union _PEP_ACPI_RESOURCE_FLAGS
{
  union
  {
    /* 0x0000 */ unsigned long AsULong;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Shared : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Wake : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long ResourceUsage : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long SlaveMode : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long AddressingMode : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long SharedMode : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PEP_ACPI_RESOURCE_FLAGS, *PPEP_ACPI_RESOURCE_FLAGS; /* size: 0x0004 */

typedef struct _PEP_ACPI_INTERRUPT_RESOURCE
{
  /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
  /* 0x0004 */ enum _KINTERRUPT_MODE InterruptType;
  /* 0x0008 */ enum _KINTERRUPT_POLARITY InterruptPolarity;
  /* 0x000c */ union _PEP_ACPI_RESOURCE_FLAGS Flags;
  /* 0x0010 */ unsigned char Count;
  /* 0x0018 */ unsigned long* Pins;
} PEP_ACPI_INTERRUPT_RESOURCE, *PPEP_ACPI_INTERRUPT_RESOURCE; /* size: 0x0020 */

typedef enum _GPIO_PIN_CONFIG_TYPE
{
  PullDefault = 0,
  PullUp = 1,
  PullDown = 2,
  PullNone = 3,
} GPIO_PIN_CONFIG_TYPE, *PGPIO_PIN_CONFIG_TYPE;

typedef enum _GPIO_PIN_IORESTRICTION_TYPE
{
  IoRestrictionNone = 0,
  IoRestrictionInputOnly = 1,
  IoRestrictionOutputOnly = 2,
  IoRestrictionNoneAndPreserve = 3,
} GPIO_PIN_IORESTRICTION_TYPE, *PGPIO_PIN_IORESTRICTION_TYPE;

typedef struct _PEP_ACPI_GPIO_RESOURCE
{
  /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
  /* 0x0004 */ union _PEP_ACPI_RESOURCE_FLAGS Flags;
  /* 0x0008 */ enum _KINTERRUPT_MODE InterruptType;
  /* 0x000c */ enum _KINTERRUPT_POLARITY InterruptPolarity;
  /* 0x0010 */ enum _GPIO_PIN_CONFIG_TYPE PinConfig;
  /* 0x0014 */ enum _GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType;
  /* 0x0018 */ unsigned short DriveStrength;
  /* 0x001a */ unsigned short DebounceTimeout;
  /* 0x0020 */ wchar_t* PinTable;
  /* 0x0028 */ unsigned short PinCount;
  /* 0x002a */ unsigned char ResourceSourceIndex;
  /* 0x0030 */ struct _UNICODE_STRING* ResourceSourceName;
  /* 0x0038 */ unsigned char* VendorData;
  /* 0x0040 */ unsigned short VendorDataLength;
  /* 0x0042 */ char __PADDING__[6];
} PEP_ACPI_GPIO_RESOURCE, *PPEP_ACPI_GPIO_RESOURCE; /* size: 0x0048 */

typedef struct _PEP_ACPI_SPB_RESOURCE
{
  /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
  /* 0x0004 */ union _PEP_ACPI_RESOURCE_FLAGS Flags;
  /* 0x0008 */ unsigned short TypeSpecificFlags;
  /* 0x000a */ unsigned char ResourceSourceIndex;
  /* 0x0010 */ struct _UNICODE_STRING* ResourceSourceName;
  /* 0x0018 */ char* VendorData;
  /* 0x0020 */ unsigned short VendorDataLength;
  /* 0x0022 */ char __PADDING__[6];
} PEP_ACPI_SPB_RESOURCE, *PPEP_ACPI_SPB_RESOURCE; /* size: 0x0028 */

typedef struct _PEP_ACPI_SPB_I2C_RESOURCE
{
  /* 0x0000 */ struct _PEP_ACPI_SPB_RESOURCE SpbCommon;
  /* 0x0028 */ unsigned long ConnectionSpeed;
  /* 0x002c */ unsigned short SlaveAddress;
  /* 0x002e */ char __PADDING__[2];
} PEP_ACPI_SPB_I2C_RESOURCE, *PPEP_ACPI_SPB_I2C_RESOURCE; /* size: 0x0030 */

typedef struct _PEP_ACPI_SPB_SPI_RESOURCE
{
  /* 0x0000 */ struct _PEP_ACPI_SPB_RESOURCE SpbCommon;
  /* 0x0028 */ unsigned long ConnectionSpeed;
  /* 0x002c */ unsigned char DataBitLength;
  /* 0x002d */ unsigned char Phase;
  /* 0x002e */ unsigned char Polarity;
  /* 0x0030 */ unsigned short DeviceSelection;
  /* 0x0032 */ char __PADDING__[6];
} PEP_ACPI_SPB_SPI_RESOURCE, *PPEP_ACPI_SPB_SPI_RESOURCE; /* size: 0x0038 */

typedef struct _PEP_ACPI_SPB_UART_RESOURCE
{
  /* 0x0000 */ struct _PEP_ACPI_SPB_RESOURCE SpbCommon;
  /* 0x0028 */ unsigned long BaudRate;
  /* 0x002c */ unsigned short RxBufferSize;
  /* 0x002e */ unsigned short TxBufferSize;
  /* 0x0030 */ unsigned char Parity;
  /* 0x0031 */ unsigned char LinesInUse;
  /* 0x0032 */ char __PADDING__[6];
} PEP_ACPI_SPB_UART_RESOURCE, *PPEP_ACPI_SPB_UART_RESOURCE; /* size: 0x0038 */

typedef struct _PEP_ACPI_EXTENDED_ADDRESS
{
  /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
  /* 0x0004 */ union _PEP_ACPI_RESOURCE_FLAGS Flags;
  /* 0x0008 */ unsigned char ResourceFlags;
  /* 0x0009 */ unsigned char GeneralFlags;
  /* 0x000a */ unsigned char TypeSpecificFlags;
  /* 0x000b */ unsigned char RevisionId;
  /* 0x000c */ unsigned char Reserved;
  /* 0x0010 */ unsigned __int64 Granularity;
  /* 0x0018 */ unsigned __int64 MinimumAddress;
  /* 0x0020 */ unsigned __int64 MaximumAddress;
  /* 0x0028 */ unsigned __int64 TranslationAddress;
  /* 0x0030 */ unsigned __int64 AddressLength;
  /* 0x0038 */ unsigned __int64 TypeAttribute;
  /* 0x0040 */ struct _UNICODE_STRING* DescriptorName;
} PEP_ACPI_EXTENDED_ADDRESS, *PPEP_ACPI_EXTENDED_ADDRESS; /* size: 0x0048 */

typedef union _PEP_ACPI_RESOURCE
{
  union
  {
    /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
    /* 0x0000 */ struct _PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;
    /* 0x0000 */ struct _PEP_ACPI_INTERRUPT_RESOURCE Interrupt;
    /* 0x0000 */ struct _PEP_ACPI_GPIO_RESOURCE Gpio;
    /* 0x0000 */ struct _PEP_ACPI_SPB_I2C_RESOURCE SpbI2c;
    /* 0x0000 */ struct _PEP_ACPI_SPB_SPI_RESOURCE SpbSpi;
    /* 0x0000 */ struct _PEP_ACPI_SPB_UART_RESOURCE SpbUart;
    /* 0x0000 */ struct _PEP_ACPI_EXTENDED_ADDRESS ExtendedAddress;
  }; /* size: 0x0048 */
} PEP_ACPI_RESOURCE, *PPEP_ACPI_RESOURCE; /* size: 0x0048 */


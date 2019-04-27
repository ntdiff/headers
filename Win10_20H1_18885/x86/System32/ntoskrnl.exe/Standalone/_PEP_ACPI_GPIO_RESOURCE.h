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
  /* 0x001c */ wchar_t* PinTable;
  /* 0x0020 */ unsigned short PinCount;
  /* 0x0022 */ unsigned char ResourceSourceIndex;
  /* 0x0024 */ struct _UNICODE_STRING* ResourceSourceName;
  /* 0x0028 */ unsigned char* VendorData;
  /* 0x002c */ unsigned short VendorDataLength;
  /* 0x002e */ char __PADDING__[2];
} PEP_ACPI_GPIO_RESOURCE, *PPEP_ACPI_GPIO_RESOURCE; /* size: 0x0030 */


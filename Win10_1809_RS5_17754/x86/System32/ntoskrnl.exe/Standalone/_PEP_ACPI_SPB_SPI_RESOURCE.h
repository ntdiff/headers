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

typedef struct _PEP_ACPI_SPB_RESOURCE
{
  /* 0x0000 */ enum _PEP_ACPI_RESOURCE_TYPE Type;
  /* 0x0004 */ union _PEP_ACPI_RESOURCE_FLAGS Flags;
  /* 0x0008 */ unsigned short TypeSpecificFlags;
  /* 0x000a */ unsigned char ResourceSourceIndex;
  /* 0x000c */ struct _UNICODE_STRING* ResourceSourceName;
  /* 0x0010 */ char* VendorData;
  /* 0x0014 */ unsigned short VendorDataLength;
  /* 0x0016 */ char __PADDING__[2];
} PEP_ACPI_SPB_RESOURCE, *PPEP_ACPI_SPB_RESOURCE; /* size: 0x0018 */

typedef struct _PEP_ACPI_SPB_SPI_RESOURCE
{
  /* 0x0000 */ struct _PEP_ACPI_SPB_RESOURCE SpbCommon;
  /* 0x0018 */ unsigned long ConnectionSpeed;
  /* 0x001c */ unsigned char DataBitLength;
  /* 0x001d */ unsigned char Phase;
  /* 0x001e */ unsigned char Polarity;
  /* 0x0020 */ unsigned short DeviceSelection;
  /* 0x0022 */ char __PADDING__[2];
} PEP_ACPI_SPB_SPI_RESOURCE, *PPEP_ACPI_SPB_SPI_RESOURCE; /* size: 0x0024 */


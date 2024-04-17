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


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


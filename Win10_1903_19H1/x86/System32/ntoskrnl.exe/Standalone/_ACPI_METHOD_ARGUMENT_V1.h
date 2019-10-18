typedef struct _ACPI_METHOD_ARGUMENT_V1
{
  /* 0x0000 */ unsigned short Type;
  /* 0x0002 */ unsigned short DataLength;
  union
  {
    /* 0x0004 */ unsigned long Argument;
    struct
    {
      /* 0x0004 */ unsigned char Data[1];
      /* 0x0005 */ char __PADDING__[3];
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
} ACPI_METHOD_ARGUMENT_V1, *PACPI_METHOD_ARGUMENT_V1; /* size: 0x0008 */


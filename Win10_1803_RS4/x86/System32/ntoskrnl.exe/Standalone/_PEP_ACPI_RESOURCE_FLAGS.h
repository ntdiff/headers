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


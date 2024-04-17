typedef struct _SYSTEM_ACPI_AUDIT_INFORMATION
{
  /* 0x0000 */ unsigned long RsdpCount;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned long SameRsdt : 1; /* bit position: 0 */
    /* 0x0004 */ unsigned long SlicPresent : 1; /* bit position: 1 */
    /* 0x0004 */ unsigned long SlicDifferent : 1; /* bit position: 2 */
  }; /* bitfield */
} SYSTEM_ACPI_AUDIT_INFORMATION, *PSYSTEM_ACPI_AUDIT_INFORMATION; /* size: 0x0008 */


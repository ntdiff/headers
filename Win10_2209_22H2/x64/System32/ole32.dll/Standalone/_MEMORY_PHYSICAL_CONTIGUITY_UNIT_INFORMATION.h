typedef struct _MEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long State : 2; /* bit position: 0 */
      /* 0x0000 */ unsigned long Reserved : 30; /* bit position: 2 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AllInformation;
  }; /* size: 0x0004 */
} MEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION, *PMEMORY_PHYSICAL_CONTIGUITY_UNIT_INFORMATION; /* size: 0x0004 */


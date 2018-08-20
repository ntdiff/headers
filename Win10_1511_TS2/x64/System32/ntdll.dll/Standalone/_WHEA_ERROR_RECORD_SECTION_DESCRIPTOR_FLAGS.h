typedef union _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Primary : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long ContainmentWarning : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Reset : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long ThresholdExceeded : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long ResourceNotAvailable : 1; /* bit position: 4 */
      /* 0x0000 */ unsigned long LatentError : 1; /* bit position: 5 */
      /* 0x0000 */ unsigned long Reserved : 26; /* bit position: 6 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS, *PWHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS; /* size: 0x0004 */


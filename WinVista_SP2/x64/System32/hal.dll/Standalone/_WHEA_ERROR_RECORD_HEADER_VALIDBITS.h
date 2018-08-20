typedef union _WHEA_ERROR_RECORD_HEADER_VALIDBITS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Timestamp : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long PlatformId : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long PartitionId : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long Reserved : 29; /* bit position: 3 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_ERROR_RECORD_HEADER_VALIDBITS, *PWHEA_ERROR_RECORD_HEADER_VALIDBITS; /* size: 0x0004 */


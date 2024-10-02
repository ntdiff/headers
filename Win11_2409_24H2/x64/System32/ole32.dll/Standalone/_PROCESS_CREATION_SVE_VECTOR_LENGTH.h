typedef union _PROCESS_CREATION_SVE_VECTOR_LENGTH
{
  union
  {
    /* 0x0000 */ unsigned long Data;
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long VectorLength : 24; /* bit position: 0 */
      /* 0x0000 */ unsigned long FlagsReserved : 8; /* bit position: 24 */
    }; /* bitfield */
  }; /* size: 0x0004 */
} PROCESS_CREATION_SVE_VECTOR_LENGTH, *PPROCESS_CREATION_SVE_VECTOR_LENGTH; /* size: 0x0004 */


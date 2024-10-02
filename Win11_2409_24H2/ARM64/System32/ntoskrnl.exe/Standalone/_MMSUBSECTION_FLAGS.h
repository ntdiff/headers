typedef union _MMSUBSECTION_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SubsectionAccessed : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Protection : 5; /* bit position: 1 */
      /* 0x0000 */ unsigned long StartingSector4132 : 10; /* bit position: 6 */
      /* 0x0000 */ unsigned long SubsectionStatic : 1; /* bit position: 16 */
      /* 0x0000 */ unsigned long GlobalMemory : 1; /* bit position: 17 */
      /* 0x0000 */ unsigned long Spare : 1; /* bit position: 18 */
      /* 0x0000 */ unsigned long OnDereferenceList : 1; /* bit position: 19 */
      /* 0x0000 */ unsigned long SectorEndOffset : 12; /* bit position: 20 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireField;
  }; /* size: 0x0004 */
} MMSUBSECTION_FLAGS, *PMMSUBSECTION_FLAGS; /* size: 0x0004 */


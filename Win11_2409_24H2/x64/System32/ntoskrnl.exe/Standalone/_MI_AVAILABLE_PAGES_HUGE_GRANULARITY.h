typedef union _MI_AVAILABLE_PAGES_HUGE_GRANULARITY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long SmallAvailablePages : 19; /* bit position: 0 */
      /* 0x0000 */ unsigned long LargeFreeZeroPages : 10; /* bit position: 19 */
      /* 0x0000 */ unsigned long Spare : 2; /* bit position: 29 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireValue;
    /* 0x0000 */ long EntireValueSigned;
    /* 0x0000 */ volatile long EntireValueVolatile;
  }; /* size: 0x0004 */
} MI_AVAILABLE_PAGES_HUGE_GRANULARITY, *PMI_AVAILABLE_PAGES_HUGE_GRANULARITY; /* size: 0x0004 */


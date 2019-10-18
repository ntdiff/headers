typedef union _MM_STORE_KEY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long KeyLow : 28; /* bit position: 0 */
      /* 0x0000 */ unsigned long KeyHigh : 4; /* bit position: 28 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long EntireKey;
  }; /* size: 0x0004 */
} MM_STORE_KEY, *PMM_STORE_KEY; /* size: 0x0004 */


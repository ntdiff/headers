typedef union _MM_STORE_KEY
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 KeyLow : 60; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 KeyHigh : 4; /* bit position: 60 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 EntireKey;
  }; /* size: 0x0008 */
} MM_STORE_KEY, *PMM_STORE_KEY; /* size: 0x0008 */


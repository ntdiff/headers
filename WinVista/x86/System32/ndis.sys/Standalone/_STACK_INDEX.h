typedef union _STACK_INDEX
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ unsigned long XferDataIndex;
      /* 0x0004 */ unsigned long Index;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} STACK_INDEX, *PSTACK_INDEX; /* size: 0x0008 */


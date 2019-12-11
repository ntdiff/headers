typedef union _STACK_INDEX
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    /* 0x0000 */ unsigned __int64 Reserved;
  }; /* size: 0x0008 */
  /* 0x0008 */ unsigned long XferDataIndex;
  /* 0x000c */ unsigned long Index;
} STACK_INDEX, *PSTACK_INDEX; /* size: 0x0010 */


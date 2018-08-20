typedef struct _RTL_STACK_TRACE_ENTRY
{
  union
  {
    /* 0x0000 */ struct _RTL_STACK_TRACE_ENTRY* HashChain;
    /* 0x0000 */ struct _RTL_STACK_TRACE_ENTRY* FreeChain;
  }; /* size: 0x0008 */
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned short TraceCount : 11; /* bit position: 0 */
    /* 0x0008 */ unsigned short BlockDepth : 5; /* bit position: 11 */
  }; /* bitfield */
  /* 0x000a */ unsigned short IndexHigh;
  /* 0x000c */ unsigned short Index;
  /* 0x000e */ unsigned short Depth;
  /* 0x0010 */ void* BackTrace[32];
} RTL_STACK_TRACE_ENTRY, *PRTL_STACK_TRACE_ENTRY; /* size: 0x0110 */


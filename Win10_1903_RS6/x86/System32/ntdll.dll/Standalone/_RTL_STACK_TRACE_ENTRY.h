typedef struct _RTL_STD_LIST_ENTRY
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY* Next;
} RTL_STD_LIST_ENTRY, *PRTL_STD_LIST_ENTRY; /* size: 0x0004 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _RTL_STACK_TRACE_ENTRY
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY HashChain;
  struct /* bitfield */
  {
    /* 0x0004 */ unsigned short TraceCount : 11; /* bit position: 0 */
    /* 0x0004 */ unsigned short BlockDepth : 5; /* bit position: 11 */
  }; /* bitfield */
  /* 0x0006 */ unsigned short IndexHigh;
  /* 0x0008 */ unsigned short Index;
  /* 0x000a */ unsigned short Depth;
  union
  {
    /* 0x000c */ void* BackTrace[32];
    struct
    {
      /* 0x000c */ struct _SINGLE_LIST_ENTRY FreeChain;
      /* 0x0010 */ long __PADDING__[31];
    }; /* size: 0x0080 */
  }; /* size: 0x0080 */
} RTL_STACK_TRACE_ENTRY, *PRTL_STACK_TRACE_ENTRY; /* size: 0x008c */


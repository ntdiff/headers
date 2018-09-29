typedef struct _RTL_STD_LIST_ENTRY
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY* Next;
} RTL_STD_LIST_ENTRY, *PRTL_STD_LIST_ENTRY; /* size: 0x0008 */

typedef struct _SLIST_ENTRY
{
  /* 0x0000 */ struct _SLIST_ENTRY* Next;
  /* 0x0008 */ long __PADDING__[2];
} SLIST_ENTRY, *PSLIST_ENTRY; /* size: 0x0010 */

typedef struct _RTL_STACK_TRACE_ENTRY
{
  /* 0x0000 */ struct _RTL_STD_LIST_ENTRY HashChain;
  struct /* bitfield */
  {
    /* 0x0008 */ unsigned short TraceCount : 11; /* bit position: 0 */
    /* 0x0008 */ unsigned short BlockDepth : 5; /* bit position: 11 */
  }; /* bitfield */
  /* 0x000a */ unsigned short IndexHigh;
  /* 0x000c */ unsigned short Index;
  /* 0x000e */ unsigned short Depth;
  union
  {
    /* 0x0010 */ void* BackTrace[32];
    struct
    {
      /* 0x0010 */ struct _SLIST_ENTRY FreeChain;
      /* 0x0020 */ long __PADDING__[60];
    }; /* size: 0x0100 */
  }; /* size: 0x0100 */
} RTL_STACK_TRACE_ENTRY, *PRTL_STACK_TRACE_ENTRY; /* size: 0x0110 */


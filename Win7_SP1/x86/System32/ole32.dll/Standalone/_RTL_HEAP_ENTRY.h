typedef struct _RTL_HEAP_ENTRY
{
  /* 0x0000 */ unsigned long Size;
  /* 0x0004 */ unsigned short Flags;
  /* 0x0006 */ unsigned short AllocatorBackTraceIndex;
  union
  {
    union
    {
      struct
      {
        /* 0x0008 */ unsigned long Settable;
        /* 0x000c */ unsigned long Tag;
      } /* size: 0x0008 */ s1;
      struct
      {
        /* 0x0008 */ unsigned long CommittedSize;
        /* 0x000c */ void* FirstBlock;
      } /* size: 0x0008 */ s2;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u;
} RTL_HEAP_ENTRY, *PRTL_HEAP_ENTRY; /* size: 0x0010 */


typedef struct _RTL_HEAP_ENTRY
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ unsigned short Flags;
  /* 0x000a */ unsigned short AllocatorBackTraceIndex;
  union
  {
    union
    {
      struct
      {
        /* 0x0010 */ unsigned __int64 Settable;
        /* 0x0018 */ unsigned long Tag;
        /* 0x001c */ long __PADDING__[1];
      } /* size: 0x0010 */ s1;
      struct
      {
        /* 0x0010 */ unsigned __int64 CommittedSize;
        /* 0x0018 */ void* FirstBlock;
      } /* size: 0x0010 */ s2;
    }; /* size: 0x0010 */
  } /* size: 0x0010 */ u;
} RTL_HEAP_ENTRY, *PRTL_HEAP_ENTRY; /* size: 0x0020 */


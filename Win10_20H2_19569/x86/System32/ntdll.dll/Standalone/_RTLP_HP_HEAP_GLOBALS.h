typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA
{
  /* 0x0000 */ unsigned long CommitLimitBytes;
  /* 0x0004 */ unsigned long CommitLimitFailureCode;
  /* 0x0008 */ unsigned long MaxAllocationSizeBytes;
  /* 0x000c */ unsigned long AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA; /* size: 0x0010 */

typedef struct _RTLP_HP_HEAP_GLOBALS
{
  /* 0x0000 */ unsigned long HeapKey;
  /* 0x0004 */ unsigned long LfhKey;
  /* 0x0008 */ struct _HEAP_FAILURE_INFORMATION* FailureInfo;
  /* 0x000c */ struct _RTL_HEAP_MEMORY_LIMIT_DATA CommitLimitData;
  union
  {
    /* 0x001c */ unsigned long Flags;
    struct
    {
      struct /* bitfield */
      {
        /* 0x001c */ unsigned long ErmsSupported : 1; /* bit position: 0 */
        /* 0x001c */ unsigned long ErmsChecked : 1; /* bit position: 1 */
      }; /* bitfield */
    } /* size: 0x0004 */ FlagsBits;
  }; /* size: 0x0004 */
  /* 0x0020 */ long __PADDING__[8];
} RTLP_HP_HEAP_GLOBALS, *PRTLP_HP_HEAP_GLOBALS; /* size: 0x0040 */


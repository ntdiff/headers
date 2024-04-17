typedef struct _RTL_SPARSE_BITMAP_PARAMETER
{
  /* 0x0000 */ unsigned __int64 BitCountMax;
  /* 0x0008 */ unsigned long MetadataSizePerBit;
  /* 0x000c */ unsigned long BitsPerRange;
  /* 0x0010 */ unsigned long RangeCountMax;
  /* 0x0014 */ void* AllocateRoutine /* function */;
  /* 0x0018 */ void* FreeRoutine /* function */;
  struct /* bitfield */
  {
    /* 0x001c */ unsigned long DefaultBitsSet : 1; /* bit position: 0 */
    /* 0x001c */ unsigned long SparseRangeArray : 1; /* bit position: 1 */
    /* 0x001c */ unsigned long NoInternalLocking : 1; /* bit position: 2 */
    /* 0x001c */ unsigned long SpareFlags : 29; /* bit position: 3 */
  }; /* bitfield */
} RTL_SPARSE_BITMAP_PARAMETER, *PRTL_SPARSE_BITMAP_PARAMETER; /* size: 0x0020 */


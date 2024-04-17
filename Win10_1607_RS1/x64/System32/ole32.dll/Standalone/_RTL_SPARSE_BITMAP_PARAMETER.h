typedef struct _RTL_SPARSE_BITMAP_PARAMETER
{
  /* 0x0000 */ unsigned __int64 BitCountMax;
  /* 0x0008 */ unsigned long MetadataSizePerBit;
  /* 0x000c */ unsigned long BitsPerRange;
  /* 0x0010 */ unsigned long RangeCountMax;
  /* 0x0018 */ void* AllocateRoutine /* function */;
  /* 0x0020 */ void* FreeRoutine /* function */;
  struct /* bitfield */
  {
    /* 0x0028 */ unsigned long DefaultBitsSet : 1; /* bit position: 0 */
    /* 0x0028 */ unsigned long SparseRangeArray : 1; /* bit position: 1 */
    /* 0x0028 */ unsigned long NoInternalLocking : 1; /* bit position: 2 */
    /* 0x0028 */ unsigned long SpareFlags : 29; /* bit position: 3 */
  }; /* bitfield */
  /* 0x002c */ long __PADDING__[1];
} RTL_SPARSE_BITMAP_PARAMETER, *PRTL_SPARSE_BITMAP_PARAMETER; /* size: 0x0030 */


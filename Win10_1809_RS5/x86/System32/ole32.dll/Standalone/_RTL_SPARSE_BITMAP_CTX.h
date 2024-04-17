typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _RTL_SPARSE_BITMAP_CTX
{
  /* 0x0000 */ unsigned long Lock;
  /* 0x0004 */ struct _RTL_SPARSE_BITMAP_RANGE** BitmapRanges;
  /* 0x0008 */ struct _RTL_BITMAP RangeArrayCommitStatus;
  /* 0x0010 */ void* AllocateRoutine /* function */;
  /* 0x0014 */ void* FreeRoutine /* function */;
  /* 0x0018 */ unsigned long RangeCount;
  /* 0x001c */ unsigned long RangeIndexLimit;
  /* 0x0020 */ unsigned long BitsPerRange;
  /* 0x0024 */ unsigned long RangeCountMax;
  /* 0x0028 */ unsigned long RangeMetadataOffset;
  /* 0x002c */ unsigned long MetadataSizePerBit;
  struct /* bitfield */
  {
    /* 0x0030 */ unsigned long DefaultBitsSet : 1; /* bit position: 0 */
    /* 0x0030 */ unsigned long SparseRangeArray : 1; /* bit position: 1 */
    /* 0x0030 */ unsigned long NoInternalLocking : 1; /* bit position: 2 */
    /* 0x0030 */ unsigned long SpareFlags : 29; /* bit position: 3 */
  }; /* bitfield */
} RTL_SPARSE_BITMAP_CTX, *PRTL_SPARSE_BITMAP_CTX; /* size: 0x0034 */


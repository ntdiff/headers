typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0008 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0010 */

typedef struct _RTL_SPARSE_BITMAP_CTX
{
  /* 0x0000 */ unsigned __int64 Lock;
  /* 0x0008 */ struct _RTL_SPARSE_BITMAP_RANGE** BitmapRanges;
  /* 0x0010 */ struct _RTL_BITMAP RangeArrayCommitStatus;
  /* 0x0020 */ void* AllocateRoutine /* function */;
  /* 0x0028 */ void* FreeRoutine /* function */;
  /* 0x0030 */ unsigned long RangeCount;
  /* 0x0034 */ unsigned long RangeIndexLimit;
  /* 0x0038 */ unsigned long BitsPerRange;
  /* 0x003c */ unsigned long RangeCountMax;
  /* 0x0040 */ unsigned long RangeMetadataOffset;
  /* 0x0044 */ unsigned long MetadataSizePerBit;
  struct /* bitfield */
  {
    /* 0x0048 */ unsigned long DefaultBitsSet : 1; /* bit position: 0 */
    /* 0x0048 */ unsigned long SparseRangeArray : 1; /* bit position: 1 */
    /* 0x0048 */ unsigned long NoInternalLocking : 1; /* bit position: 2 */
    /* 0x0048 */ unsigned long SpareFlags : 29; /* bit position: 3 */
  }; /* bitfield */
  /* 0x004c */ long __PADDING__[1];
} RTL_SPARSE_BITMAP_CTX, *PRTL_SPARSE_BITMAP_CTX; /* size: 0x0050 */


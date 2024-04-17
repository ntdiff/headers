typedef struct _RTL_BITMAP
{
  /* 0x0000 */ unsigned long SizeOfBitMap;
  /* 0x0004 */ unsigned long* Buffer;
} RTL_BITMAP, *PRTL_BITMAP; /* size: 0x0008 */

typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef struct _RTL_SPARSE_BITMAP_RANGE
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long Lock;
      /* 0x0004 */ struct _RTL_BITMAP RangeBitmap;
    }; /* size: 0x000c */
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ long __PADDING__[2];
    }; /* size: 0x000c */
  }; /* size: 0x000c */
} RTL_SPARSE_BITMAP_RANGE, *PRTL_SPARSE_BITMAP_RANGE; /* size: 0x000c */


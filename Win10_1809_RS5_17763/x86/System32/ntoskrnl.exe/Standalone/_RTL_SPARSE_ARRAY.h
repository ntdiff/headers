typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned long CommitDirectory;
  /* 0x0004 */ unsigned long* CommitBitmap;
  /* 0x0008 */ unsigned long* UserBitmap;
  /* 0x000c */ long BitCount;
  /* 0x0010 */ unsigned long BitmapLock;
  /* 0x0014 */ unsigned long DecommitPageIndex;
  /* 0x0018 */ unsigned long RtlpCSparseBitmapWakeLock;
  /* 0x001c */ unsigned char LockType;
  /* 0x001d */ unsigned char AddressSpace;
  /* 0x001e */ unsigned char MemType;
  /* 0x001f */ unsigned char AllocAlignment;
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0020 */

typedef struct _RTL_SPARSE_ARRAY
{
  /* 0x0000 */ struct _RTL_CSPARSE_BITMAP Bitmap;
  /* 0x0020 */ unsigned long ElementCount;
  /* 0x0024 */ unsigned long ElementSizeShift;
} RTL_SPARSE_ARRAY, *PRTL_SPARSE_ARRAY; /* size: 0x0028 */


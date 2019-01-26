typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned __int64* CommitBitmap;
  /* 0x0008 */ unsigned __int64* UserBitmap;
  /* 0x0010 */ __int64 BitCount;
  /* 0x0018 */ unsigned __int64 BitmapLock;
  /* 0x0020 */ unsigned __int64 DecommitPageIndex;
  /* 0x0028 */ unsigned __int64 RtlpCSparseBitmapWakeLock;
  /* 0x0030 */ unsigned char LockType;
  /* 0x0031 */ unsigned char AddressSpace;
  /* 0x0032 */ unsigned char MemType;
  /* 0x0033 */ unsigned char AllocAlignment;
  /* 0x0034 */ unsigned long CommitDirectoryMaxSize;
  /* 0x0038 */ unsigned __int64 CommitDirectory[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0040 */


typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned __int64 CommitDirectory;
  /* 0x0008 */ unsigned __int64* CommitBitmap;
  /* 0x0010 */ unsigned __int64* UserBitmap;
  /* 0x0018 */ __int64 BitCount;
  /* 0x0020 */ unsigned __int64 BitmapLock;
  /* 0x0028 */ unsigned __int64 DecommitPageIndex;
  /* 0x0030 */ unsigned __int64 RtlpCSparseBitmapWakeLock;
  /* 0x0038 */ unsigned char LockType;
  /* 0x0039 */ unsigned char AddressSpace;
  /* 0x003a */ unsigned char MemType;
  /* 0x003b */ unsigned char AllocAlignment;
  /* 0x003c */ long __PADDING__[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0040 */


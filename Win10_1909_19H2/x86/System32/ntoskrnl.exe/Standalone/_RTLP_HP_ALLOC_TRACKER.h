typedef struct _RTL_CSPARSE_BITMAP
{
  /* 0x0000 */ unsigned long* CommitBitmap;
  /* 0x0004 */ unsigned long* UserBitmap;
  /* 0x0008 */ long BitCount;
  /* 0x000c */ unsigned long BitmapLock;
  /* 0x0010 */ unsigned long DecommitPageIndex;
  /* 0x0014 */ unsigned long RtlpCSparseBitmapWakeLock;
  /* 0x0018 */ unsigned char LockType;
  /* 0x0019 */ unsigned char AddressSpace;
  /* 0x001a */ unsigned char MemType;
  /* 0x001b */ unsigned char AllocAlignment;
  /* 0x001c */ unsigned long CommitDirectoryMaxSize;
  /* 0x0020 */ unsigned long CommitDirectory[1];
} RTL_CSPARSE_BITMAP, *PRTL_CSPARSE_BITMAP; /* size: 0x0024 */

typedef struct _RTLP_HP_ALLOC_TRACKER
{
  /* 0x0000 */ unsigned long BaseAddress;
  union
  {
    /* 0x0004 */ struct _RTL_CSPARSE_BITMAP AllocTrackerBitmap;
    /* 0x0004 */ unsigned char AllocTrackerBitmapBuffer[40];
  }; /* size: 0x0028 */
} RTLP_HP_ALLOC_TRACKER, *PRTLP_HP_ALLOC_TRACKER; /* size: 0x002c */


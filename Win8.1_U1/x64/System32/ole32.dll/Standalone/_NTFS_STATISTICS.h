typedef struct _NTFS_STATISTICS
{
  /* 0x0000 */ unsigned long LogFileFullExceptions;
  /* 0x0004 */ unsigned long OtherExceptions;
  /* 0x0008 */ unsigned long MftReads;
  /* 0x000c */ unsigned long MftReadBytes;
  /* 0x0010 */ unsigned long MftWrites;
  /* 0x0014 */ unsigned long MftWriteBytes;
  struct
  {
    /* 0x0018 */ unsigned short Write;
    /* 0x001a */ unsigned short Create;
    /* 0x001c */ unsigned short SetInfo;
    /* 0x001e */ unsigned short Flush;
  } /* size: 0x0008 */ MftWritesUserLevel;
  /* 0x0020 */ unsigned short MftWritesFlushForLogFileFull;
  /* 0x0022 */ unsigned short MftWritesLazyWriter;
  /* 0x0024 */ unsigned short MftWritesUserRequest;
  /* 0x0028 */ unsigned long Mft2Writes;
  /* 0x002c */ unsigned long Mft2WriteBytes;
  struct
  {
    /* 0x0030 */ unsigned short Write;
    /* 0x0032 */ unsigned short Create;
    /* 0x0034 */ unsigned short SetInfo;
    /* 0x0036 */ unsigned short Flush;
  } /* size: 0x0008 */ Mft2WritesUserLevel;
  /* 0x0038 */ unsigned short Mft2WritesFlushForLogFileFull;
  /* 0x003a */ unsigned short Mft2WritesLazyWriter;
  /* 0x003c */ unsigned short Mft2WritesUserRequest;
  /* 0x0040 */ unsigned long RootIndexReads;
  /* 0x0044 */ unsigned long RootIndexReadBytes;
  /* 0x0048 */ unsigned long RootIndexWrites;
  /* 0x004c */ unsigned long RootIndexWriteBytes;
  /* 0x0050 */ unsigned long BitmapReads;
  /* 0x0054 */ unsigned long BitmapReadBytes;
  /* 0x0058 */ unsigned long BitmapWrites;
  /* 0x005c */ unsigned long BitmapWriteBytes;
  /* 0x0060 */ unsigned short BitmapWritesFlushForLogFileFull;
  /* 0x0062 */ unsigned short BitmapWritesLazyWriter;
  /* 0x0064 */ unsigned short BitmapWritesUserRequest;
  struct
  {
    /* 0x0066 */ unsigned short Write;
    /* 0x0068 */ unsigned short Create;
    /* 0x006a */ unsigned short SetInfo;
  } /* size: 0x0006 */ BitmapWritesUserLevel;
  /* 0x006c */ unsigned long MftBitmapReads;
  /* 0x0070 */ unsigned long MftBitmapReadBytes;
  /* 0x0074 */ unsigned long MftBitmapWrites;
  /* 0x0078 */ unsigned long MftBitmapWriteBytes;
  /* 0x007c */ unsigned short MftBitmapWritesFlushForLogFileFull;
  /* 0x007e */ unsigned short MftBitmapWritesLazyWriter;
  /* 0x0080 */ unsigned short MftBitmapWritesUserRequest;
  struct
  {
    /* 0x0082 */ unsigned short Write;
    /* 0x0084 */ unsigned short Create;
    /* 0x0086 */ unsigned short SetInfo;
    /* 0x0088 */ unsigned short Flush;
  } /* size: 0x0008 */ MftBitmapWritesUserLevel;
  /* 0x008c */ unsigned long UserIndexReads;
  /* 0x0090 */ unsigned long UserIndexReadBytes;
  /* 0x0094 */ unsigned long UserIndexWrites;
  /* 0x0098 */ unsigned long UserIndexWriteBytes;
  /* 0x009c */ unsigned long LogFileReads;
  /* 0x00a0 */ unsigned long LogFileReadBytes;
  /* 0x00a4 */ unsigned long LogFileWrites;
  /* 0x00a8 */ unsigned long LogFileWriteBytes;
  struct
  {
    /* 0x00ac */ unsigned long Calls;
    /* 0x00b0 */ unsigned long Clusters;
    /* 0x00b4 */ unsigned long Hints;
    /* 0x00b8 */ unsigned long RunsReturned;
    /* 0x00bc */ unsigned long HintsHonored;
    /* 0x00c0 */ unsigned long HintsClusters;
    /* 0x00c4 */ unsigned long Cache;
    /* 0x00c8 */ unsigned long CacheClusters;
    /* 0x00cc */ unsigned long CacheMiss;
    /* 0x00d0 */ unsigned long CacheMissClusters;
  } /* size: 0x0028 */ Allocate;
  /* 0x00d4 */ unsigned long DiskResourcesExhausted;
  /* 0x00d8 */ unsigned __int64 VolumeTrimCount;
  /* 0x00e0 */ unsigned __int64 VolumeTrimTime;
  /* 0x00e8 */ unsigned __int64 VolumeTrimByteCount;
  /* 0x00f0 */ unsigned __int64 FileLevelTrimCount;
  /* 0x00f8 */ unsigned __int64 FileLevelTrimTime;
  /* 0x0100 */ unsigned __int64 FileLevelTrimByteCount;
} NTFS_STATISTICS, *PNTFS_STATISTICS; /* size: 0x0108 */


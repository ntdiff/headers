typedef struct _NTFS_STATISTICS_EX
{
  /* 0x0000 */ unsigned long LogFileFullExceptions;
  /* 0x0004 */ unsigned long OtherExceptions;
  /* 0x0008 */ unsigned __int64 MftReads;
  /* 0x0010 */ unsigned __int64 MftReadBytes;
  /* 0x0018 */ unsigned __int64 MftWrites;
  /* 0x0020 */ unsigned __int64 MftWriteBytes;
  struct
  {
    /* 0x0028 */ unsigned long Write;
    /* 0x002c */ unsigned long Create;
    /* 0x0030 */ unsigned long SetInfo;
    /* 0x0034 */ unsigned long Flush;
  } /* size: 0x0010 */ MftWritesUserLevel;
  /* 0x0038 */ unsigned long MftWritesFlushForLogFileFull;
  /* 0x003c */ unsigned long MftWritesLazyWriter;
  /* 0x0040 */ unsigned long MftWritesUserRequest;
  /* 0x0048 */ unsigned __int64 Mft2Writes;
  /* 0x0050 */ unsigned __int64 Mft2WriteBytes;
  struct
  {
    /* 0x0058 */ unsigned long Write;
    /* 0x005c */ unsigned long Create;
    /* 0x0060 */ unsigned long SetInfo;
    /* 0x0064 */ unsigned long Flush;
  } /* size: 0x0010 */ Mft2WritesUserLevel;
  /* 0x0068 */ unsigned long Mft2WritesFlushForLogFileFull;
  /* 0x006c */ unsigned long Mft2WritesLazyWriter;
  /* 0x0070 */ unsigned long Mft2WritesUserRequest;
  /* 0x0078 */ unsigned __int64 RootIndexReads;
  /* 0x0080 */ unsigned __int64 RootIndexReadBytes;
  /* 0x0088 */ unsigned __int64 RootIndexWrites;
  /* 0x0090 */ unsigned __int64 RootIndexWriteBytes;
  /* 0x0098 */ unsigned __int64 BitmapReads;
  /* 0x00a0 */ unsigned __int64 BitmapReadBytes;
  /* 0x00a8 */ unsigned __int64 BitmapWrites;
  /* 0x00b0 */ unsigned __int64 BitmapWriteBytes;
  /* 0x00b8 */ unsigned long BitmapWritesFlushForLogFileFull;
  /* 0x00bc */ unsigned long BitmapWritesLazyWriter;
  /* 0x00c0 */ unsigned long BitmapWritesUserRequest;
  struct
  {
    /* 0x00c4 */ unsigned long Write;
    /* 0x00c8 */ unsigned long Create;
    /* 0x00cc */ unsigned long SetInfo;
    /* 0x00d0 */ unsigned long Flush;
  } /* size: 0x0010 */ BitmapWritesUserLevel;
  /* 0x00d8 */ unsigned __int64 MftBitmapReads;
  /* 0x00e0 */ unsigned __int64 MftBitmapReadBytes;
  /* 0x00e8 */ unsigned __int64 MftBitmapWrites;
  /* 0x00f0 */ unsigned __int64 MftBitmapWriteBytes;
  /* 0x00f8 */ unsigned long MftBitmapWritesFlushForLogFileFull;
  /* 0x00fc */ unsigned long MftBitmapWritesLazyWriter;
  /* 0x0100 */ unsigned long MftBitmapWritesUserRequest;
  struct
  {
    /* 0x0104 */ unsigned long Write;
    /* 0x0108 */ unsigned long Create;
    /* 0x010c */ unsigned long SetInfo;
    /* 0x0110 */ unsigned long Flush;
  } /* size: 0x0010 */ MftBitmapWritesUserLevel;
  /* 0x0118 */ unsigned __int64 UserIndexReads;
  /* 0x0120 */ unsigned __int64 UserIndexReadBytes;
  /* 0x0128 */ unsigned __int64 UserIndexWrites;
  /* 0x0130 */ unsigned __int64 UserIndexWriteBytes;
  /* 0x0138 */ unsigned __int64 LogFileReads;
  /* 0x0140 */ unsigned __int64 LogFileReadBytes;
  /* 0x0148 */ unsigned __int64 LogFileWrites;
  /* 0x0150 */ unsigned __int64 LogFileWriteBytes;
  struct
  {
    /* 0x0158 */ unsigned long Calls;
    /* 0x015c */ unsigned long RunsReturned;
    /* 0x0160 */ unsigned long Hints;
    /* 0x0164 */ unsigned long HintsHonored;
    /* 0x0168 */ unsigned long Cache;
    /* 0x016c */ unsigned long CacheMiss;
    /* 0x0170 */ unsigned __int64 Clusters;
    /* 0x0178 */ unsigned __int64 HintsClusters;
    /* 0x0180 */ unsigned __int64 CacheClusters;
    /* 0x0188 */ unsigned __int64 CacheMissClusters;
  } /* size: 0x0038 */ Allocate;
  /* 0x0190 */ unsigned long DiskResourcesExhausted;
  /* 0x0198 */ unsigned __int64 VolumeTrimCount;
  /* 0x01a0 */ unsigned __int64 VolumeTrimTime;
  /* 0x01a8 */ unsigned __int64 VolumeTrimByteCount;
  /* 0x01b0 */ unsigned __int64 FileLevelTrimCount;
  /* 0x01b8 */ unsigned __int64 FileLevelTrimTime;
  /* 0x01c0 */ unsigned __int64 FileLevelTrimByteCount;
  /* 0x01c8 */ unsigned __int64 VolumeTrimSkippedCount;
  /* 0x01d0 */ unsigned __int64 VolumeTrimSkippedByteCount;
  /* 0x01d8 */ unsigned __int64 NtfsFillStatInfoFromMftRecordCalledCount;
  /* 0x01e0 */ unsigned __int64 NtfsFillStatInfoFromMftRecordBailedBecauseOfAttributeListCount;
  /* 0x01e8 */ unsigned __int64 NtfsFillStatInfoFromMftRecordBailedBecauseOfNonResReparsePointCount;
} NTFS_STATISTICS_EX, *PNTFS_STATISTICS_EX; /* size: 0x01f0 */


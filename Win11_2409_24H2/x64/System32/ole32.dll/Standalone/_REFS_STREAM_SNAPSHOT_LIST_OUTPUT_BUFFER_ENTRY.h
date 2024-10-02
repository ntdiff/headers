typedef struct _REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY
{
  /* 0x0000 */ unsigned long NextEntryOffset;
  /* 0x0004 */ unsigned short SnapshotNameLength;
  /* 0x0008 */ unsigned __int64 SnapshotCreationTime;
  /* 0x0010 */ unsigned __int64 StreamSize;
  /* 0x0018 */ unsigned __int64 StreamAllocationSize;
  /* 0x0020 */ unsigned __int64 Reserved[2];
  /* 0x0030 */ wchar_t SnapshotName[1];
  /* 0x0032 */ char __PADDING__[6];
} REFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY, *PREFS_STREAM_SNAPSHOT_LIST_OUTPUT_BUFFER_ENTRY; /* size: 0x0038 */


typedef struct _REFS_STREAM_EXTENT
{
  /* 0x0000 */ __int64 Vcn;
  /* 0x0008 */ __int64 Lcn;
  /* 0x0010 */ __int64 Length;
  /* 0x0018 */ unsigned short Properties;
  /* 0x001a */ char __PADDING__[6];
} REFS_STREAM_EXTENT, *PREFS_STREAM_EXTENT; /* size: 0x0020 */

typedef struct _REFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER
{
  /* 0x0000 */ unsigned long ExtentCount;
  /* 0x0004 */ unsigned long Reserved[2];
  /* 0x0010 */ struct _REFS_STREAM_EXTENT Extents[1];
} REFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER, *PREFS_STREAM_SNAPSHOT_QUERY_DELTAS_OUTPUT_BUFFER; /* size: 0x0030 */


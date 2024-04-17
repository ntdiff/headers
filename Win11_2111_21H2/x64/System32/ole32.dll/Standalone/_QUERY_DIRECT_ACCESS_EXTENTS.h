typedef struct _QUERY_DIRECT_ACCESS_EXTENTS
{
  /* 0x0000 */ __int64 FileOffset;
  /* 0x0008 */ __int64 Length;
  /* 0x0010 */ unsigned long Flags;
  /* 0x0014 */ unsigned long Reserved;
} QUERY_DIRECT_ACCESS_EXTENTS, *PQUERY_DIRECT_ACCESS_EXTENTS; /* size: 0x0018 */


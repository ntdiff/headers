typedef struct _CSV_QUERY_MDS_PATH
{
  /* 0x0000 */ unsigned long MdsNodeId;
  /* 0x0004 */ unsigned long DsNodeId;
  /* 0x0008 */ unsigned long PathLength;
  /* 0x000c */ wchar_t Path[1];
  /* 0x000e */ char __PADDING__[2];
} CSV_QUERY_MDS_PATH, *PCSV_QUERY_MDS_PATH; /* size: 0x0010 */


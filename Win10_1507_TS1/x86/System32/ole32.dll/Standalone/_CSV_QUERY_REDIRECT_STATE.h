typedef struct _CSV_QUERY_REDIRECT_STATE
{
  /* 0x0000 */ unsigned long MdsNodeId;
  /* 0x0004 */ unsigned long DsNodeId;
  /* 0x0008 */ unsigned char FileRedirected;
  /* 0x0009 */ char __PADDING__[3];
} CSV_QUERY_REDIRECT_STATE, *PCSV_QUERY_REDIRECT_STATE; /* size: 0x000c */


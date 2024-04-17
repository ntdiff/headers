typedef struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT
{
  /* 0x0000 */ unsigned long ExtentCount;
  /* 0x0004 */ unsigned long TotalExtentCount;
  /* 0x0008 */ unsigned char Extents[1];
  /* 0x0009 */ char __PADDING__[3];
} FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT, *PFSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT; /* size: 0x000c */


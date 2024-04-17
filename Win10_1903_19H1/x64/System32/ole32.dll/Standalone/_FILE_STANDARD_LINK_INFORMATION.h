typedef struct _FILE_STANDARD_LINK_INFORMATION
{
  /* 0x0000 */ unsigned long NumberOfAccessibleLinks;
  /* 0x0004 */ unsigned long TotalNumberOfLinks;
  /* 0x0008 */ unsigned char DeletePending;
  /* 0x0009 */ unsigned char Directory;
  /* 0x000a */ char __PADDING__[2];
} FILE_STANDARD_LINK_INFORMATION, *PFILE_STANDARD_LINK_INFORMATION; /* size: 0x000c */


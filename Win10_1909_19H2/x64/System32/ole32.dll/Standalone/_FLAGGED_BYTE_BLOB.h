typedef struct _FLAGGED_BYTE_BLOB
{
  /* 0x0000 */ unsigned long fFlags;
  /* 0x0004 */ unsigned long clSize;
  /* 0x0008 */ unsigned char abData[1];
  /* 0x0009 */ char __PADDING__[3];
} FLAGGED_BYTE_BLOB, *PFLAGGED_BYTE_BLOB; /* size: 0x000c */


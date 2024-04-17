typedef struct _FLAGGED_WORD_BLOB
{
  /* 0x0000 */ unsigned long fFlags;
  /* 0x0004 */ unsigned long clSize;
  /* 0x0008 */ unsigned short asData[1];
  /* 0x000a */ char __PADDING__[2];
} FLAGGED_WORD_BLOB, *PFLAGGED_WORD_BLOB; /* size: 0x000c */


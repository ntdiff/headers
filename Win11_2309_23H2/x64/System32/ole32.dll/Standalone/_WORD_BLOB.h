typedef struct _WORD_BLOB
{
  /* 0x0000 */ unsigned long clSize;
  /* 0x0004 */ unsigned short asData[1];
  /* 0x0006 */ char __PADDING__[2];
} WORD_BLOB, *PWORD_BLOB; /* size: 0x0008 */


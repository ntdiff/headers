typedef struct _LBLOB
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long MaximumLength;
  /* 0x0008 */ unsigned char* Buffer;
} LBLOB, *PLBLOB; /* size: 0x000c */


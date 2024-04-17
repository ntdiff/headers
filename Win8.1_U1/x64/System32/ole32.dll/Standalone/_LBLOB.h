typedef struct _LBLOB
{
  /* 0x0000 */ unsigned __int64 Length;
  /* 0x0008 */ unsigned __int64 MaximumLength;
  /* 0x0010 */ unsigned char* Buffer;
} LBLOB, *PLBLOB; /* size: 0x0018 */


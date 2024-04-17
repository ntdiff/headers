typedef struct _STRING64
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned __int64 Buffer;
} STRING64, *PSTRING64; /* size: 0x0010 */

typedef struct _CURDIR64
{
  /* 0x0000 */ struct _STRING64 DosPath;
  /* 0x0010 */ __int64 Handle;
} CURDIR64, *PCURDIR64; /* size: 0x0018 */


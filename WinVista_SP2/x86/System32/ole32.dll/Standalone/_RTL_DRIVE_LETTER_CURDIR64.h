typedef struct _STRING64
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ unsigned __int64 Buffer;
} STRING64, *PSTRING64; /* size: 0x0010 */

typedef struct _RTL_DRIVE_LETTER_CURDIR64
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Length;
  /* 0x0004 */ unsigned long TimeStamp;
  /* 0x0008 */ struct _STRING64 DosPath;
} RTL_DRIVE_LETTER_CURDIR64, *PRTL_DRIVE_LETTER_CURDIR64; /* size: 0x0018 */


typedef struct _STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ char* Buffer;
} STRING, *PSTRING; /* size: 0x0010 */

typedef struct _RTL_DRIVE_LETTER_CURDIR
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Length;
  /* 0x0004 */ unsigned long TimeStamp;
  /* 0x0008 */ struct _STRING DosPath;
} RTL_DRIVE_LETTER_CURDIR, *PRTL_DRIVE_LETTER_CURDIR; /* size: 0x0018 */


typedef struct _STRING32
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned long Buffer;
} STRING32, *PSTRING32; /* size: 0x0008 */

typedef struct _RTL_DRIVE_LETTER_CURDIR32
{
  /* 0x0000 */ unsigned short Flags;
  /* 0x0002 */ unsigned short Length;
  /* 0x0004 */ unsigned long TimeStamp;
  /* 0x0008 */ struct _STRING32 DosPath;
} RTL_DRIVE_LETTER_CURDIR32, *PRTL_DRIVE_LETTER_CURDIR32; /* size: 0x0010 */


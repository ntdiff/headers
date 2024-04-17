typedef struct _RTL_PERTHREAD_CURDIR
{
  /* 0x0000 */ struct _RTL_DRIVE_LETTER_CURDIR* CurrentDirectories;
  /* 0x0008 */ struct _UNICODE_STRING* ImageName;
  /* 0x0010 */ void* Environment;
} RTL_PERTHREAD_CURDIR, *PRTL_PERTHREAD_CURDIR; /* size: 0x0018 */


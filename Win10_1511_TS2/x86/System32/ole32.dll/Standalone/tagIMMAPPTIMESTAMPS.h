typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

struct tagIMMAPPTIMESTAMPS
{
  /* 0x0000 */ struct _FILETIME ftCreation;
  /* 0x0008 */ struct _FILETIME ftClosed;
  /* 0x0010 */ struct _FILETIME ftActivation;
  /* 0x0018 */ struct _FILETIME ftInactive;
  /* 0x0020 */ struct _FILETIME ftVisible;
  /* 0x0028 */ struct _FILETIME ftHidden;
}; /* size: 0x0030 */


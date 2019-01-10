typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0008 */ wchar_t* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0010 */

typedef struct _OBJECT_SYMBOLIC_LINK
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  union
  {
    /* 0x0008 */ struct _UNICODE_STRING LinkTarget;
    struct
    {
      /* 0x0008 */ void* Callback /* function */;
      /* 0x0010 */ void* CallbackContext;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0018 */ unsigned long DosDeviceDriveIndex;
  /* 0x001c */ unsigned long Flags;
  /* 0x0020 */ unsigned long AccessMask;
  /* 0x0024 */ long __PADDING__[1];
} OBJECT_SYMBOLIC_LINK, *POBJECT_SYMBOLIC_LINK; /* size: 0x0028 */


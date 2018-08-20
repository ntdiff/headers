typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
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
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef struct _OBJECT_SYMBOLIC_LINK
{
  /* 0x0000 */ union _LARGE_INTEGER CreationTime;
  /* 0x0008 */ struct _UNICODE_STRING LinkTarget;
  /* 0x0010 */ unsigned long DosDeviceDriveIndex;
  /* 0x0014 */ unsigned long Flags;
} OBJECT_SYMBOLIC_LINK, *POBJECT_SYMBOLIC_LINK; /* size: 0x0018 */


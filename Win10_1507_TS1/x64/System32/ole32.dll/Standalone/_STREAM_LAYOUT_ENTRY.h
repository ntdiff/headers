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

typedef struct _STREAM_LAYOUT_ENTRY
{
  /* 0x0000 */ unsigned long Version;
  /* 0x0004 */ unsigned long NextStreamOffset;
  /* 0x0008 */ unsigned long Flags;
  /* 0x000c */ unsigned long ExtentInformationOffset;
  /* 0x0010 */ union _LARGE_INTEGER AllocationSize;
  /* 0x0018 */ union _LARGE_INTEGER EndOfFile;
  /* 0x0020 */ unsigned __int64 Reserved;
  /* 0x0028 */ unsigned long AttributeFlags;
  /* 0x002c */ unsigned long StreamIdentifierLength;
  /* 0x0030 */ wchar_t StreamIdentifier[1];
  /* 0x0032 */ char __PADDING__[6];
} STREAM_LAYOUT_ENTRY, *PSTREAM_LAYOUT_ENTRY; /* size: 0x0038 */


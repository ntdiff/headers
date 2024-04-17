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

struct tagStorageLayout
{
  /* 0x0000 */ unsigned long LayoutType;
  /* 0x0004 */ wchar_t* pwcsElementName;
  /* 0x0008 */ union _LARGE_INTEGER cOffset;
  /* 0x0010 */ union _LARGE_INTEGER cBytes;
}; /* size: 0x0018 */


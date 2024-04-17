typedef union _ULARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ unsigned long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ unsigned __int64 QuadPart;
  }; /* size: 0x0008 */
} ULARGE_INTEGER, *PULARGE_INTEGER; /* size: 0x0008 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

struct tagSTATSTG
{
  /* 0x0000 */ unsigned short* pwcsName;
  /* 0x0004 */ unsigned long type;
  /* 0x0008 */ union _ULARGE_INTEGER cbSize;
  /* 0x0010 */ struct _FILETIME mtime;
  /* 0x0018 */ struct _FILETIME ctime;
  /* 0x0020 */ struct _FILETIME atime;
  /* 0x0028 */ unsigned long grfMode;
  /* 0x002c */ unsigned long grfLocksSupported;
  /* 0x0030 */ struct _GUID clsid;
  /* 0x0040 */ unsigned long grfStateBits;
  /* 0x0044 */ unsigned long reserved;
}; /* size: 0x0048 */


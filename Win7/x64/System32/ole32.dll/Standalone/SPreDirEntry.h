class CDfName
{
  /* 0x0000 */ unsigned char _ab[64];
  /* 0x0040 */ unsigned short _cb;
}; /* size: 0x0042 */

typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _FILETIME
{
  /* 0x0000 */ unsigned long dwLowDateTime;
  /* 0x0004 */ unsigned long dwHighDateTime;
} FILETIME, *PFILETIME; /* size: 0x0008 */

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

struct SPreDirEntry
{
  /* 0x0000 */ class CDfName _dfn;
  /* 0x0042 */ unsigned char _mse;
  /* 0x0043 */ unsigned char _bflags;
  /* 0x0044 */ unsigned long _sidLeftSib;
  /* 0x0048 */ unsigned long _sidRightSib;
  /* 0x004c */ unsigned long _sidChild;
  /* 0x0050 */ struct _GUID _clsId;
  /* 0x0060 */ unsigned long _dwUserFlags;
  /* 0x0064 */ struct _FILETIME _time[2];
  /* 0x0074 */ unsigned long _sectStart;
  /* 0x0078 */ union _ULARGE_INTEGER _ulSize;
}; /* size: 0x0080 */


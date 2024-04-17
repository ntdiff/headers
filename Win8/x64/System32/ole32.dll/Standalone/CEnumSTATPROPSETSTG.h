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
  /* 0x0000 */ wchar_t* pwcsName;
  /* 0x0008 */ unsigned long type;
  /* 0x0010 */ union _ULARGE_INTEGER cbSize;
  /* 0x0018 */ struct _FILETIME mtime;
  /* 0x0020 */ struct _FILETIME ctime;
  /* 0x0028 */ struct _FILETIME atime;
  /* 0x0030 */ unsigned long grfMode;
  /* 0x0034 */ unsigned long grfLocksSupported;
  /* 0x0038 */ struct _GUID clsid;
  /* 0x0048 */ unsigned long grfStateBits;
  /* 0x004c */ unsigned long reserved;
}; /* size: 0x0050 */

class CEnumSTATPROPSETSTG
{
  /* 0x0008 */ unsigned long _ulSig;
  /* 0x000c */ long _cRefs;
  /* 0x0010 */ struct IEnumSTATSTG* _penumSTATSTG;
  /* 0x0018 */ struct tagSTATSTG _statarray[1];
  /* 0x0068 */ unsigned long _cstatTotalInArray;
  /* 0x006c */ unsigned long _istatNextToRead;
}; /* size: 0x0070 */


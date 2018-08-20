typedef struct _GUID
{
  /* 0x0000 */ unsigned long Data1;
  /* 0x0004 */ unsigned short Data2;
  /* 0x0006 */ unsigned short Data3;
  /* 0x0008 */ unsigned char Data4[8];
} GUID, *PGUID; /* size: 0x0010 */

typedef struct _ETW_WMITRACE_WORK
{
  /* 0x0000 */ unsigned long LoggerId;
  /* 0x0004 */ unsigned long SiloSessionId;
  union
  {
    struct
    {
      /* 0x0008 */ char LoggerName[65];
      /* 0x0049 */ char FileName[129];
      /* 0x00cc */ unsigned long MaximumFileSize;
      /* 0x00d0 */ unsigned long MinBuffers;
      /* 0x00d4 */ unsigned long MaxBuffers;
      /* 0x00d8 */ unsigned long BufferSize;
      /* 0x00dc */ unsigned long Mode;
      /* 0x00e0 */ unsigned long FlushTimer;
    }; /* size: 0x00da */
    struct
    {
      /* 0x0008 */ unsigned __int64 MatchAny;
      /* 0x0010 */ unsigned __int64 MatchAll;
      /* 0x0018 */ unsigned long EnableProperty;
      /* 0x001c */ struct _GUID Guid;
      /* 0x002c */ unsigned char Level;
      /* 0x00e8 */ long Status;
      /* 0x00ec */ long __PADDING__[1];
    }; /* size: 0x002d */
  }; /* size: 0x00da */
} ETW_WMITRACE_WORK, *PETW_WMITRACE_WORK; /* size: 0x00f0 */


typedef struct _CLIENT_ID
{
  /* 0x0000 */ void* UniqueProcess;
  /* 0x0008 */ void* UniqueThread;
} CLIENT_ID, *PCLIENT_ID; /* size: 0x0010 */

typedef struct _PORT_MESSAGE
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ short DataLength;
        /* 0x0002 */ short TotalLength;
      } /* size: 0x0004 */ s1;
      /* 0x0000 */ unsigned long Length;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u1;
  union
  {
    union
    {
      struct
      {
        /* 0x0004 */ short Type;
        /* 0x0006 */ short DataInfoOffset;
      } /* size: 0x0004 */ s2;
      /* 0x0004 */ unsigned long ZeroInit;
    }; /* size: 0x0004 */
  } /* size: 0x0004 */ u2;
  union
  {
    /* 0x0008 */ struct _CLIENT_ID ClientId;
    /* 0x0008 */ double DoNotUseThisField;
  }; /* size: 0x0010 */
  /* 0x0018 */ unsigned long MessageId;
  union
  {
    /* 0x0020 */ unsigned __int64 ClientViewSize;
    struct
    {
      /* 0x0020 */ unsigned long CallbackId;
      /* 0x0024 */ long __PADDING__[1];
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} PORT_MESSAGE, *PPORT_MESSAGE; /* size: 0x0028 */

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

typedef struct _HARDERROR_MSG
{
  /* 0x0000 */ struct _PORT_MESSAGE h;
  /* 0x0028 */ long Status;
  /* 0x0030 */ union _LARGE_INTEGER ErrorTime;
  /* 0x0038 */ unsigned long ValidResponseOptions;
  /* 0x003c */ unsigned long Response;
  /* 0x0040 */ unsigned long NumberOfParameters;
  /* 0x0044 */ unsigned long UnicodeStringParameterMask;
  /* 0x0048 */ unsigned __int64 Parameters[5];
} HARDERROR_MSG, *PHARDERROR_MSG; /* size: 0x0070 */


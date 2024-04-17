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

typedef struct _FILE_MAILSLOT_QUERY_INFORMATION
{
  /* 0x0000 */ unsigned long MaximumMessageSize;
  /* 0x0004 */ unsigned long MailslotQuota;
  /* 0x0008 */ unsigned long NextMessageSize;
  /* 0x000c */ unsigned long MessagesAvailable;
  /* 0x0010 */ union _LARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_QUERY_INFORMATION, *PFILE_MAILSLOT_QUERY_INFORMATION; /* size: 0x0018 */


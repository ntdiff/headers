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

typedef struct _MAILSLOT_CREATE_PARAMETERS
{
  /* 0x0000 */ unsigned long MailslotQuota;
  /* 0x0004 */ unsigned long MaximumMessageSize;
  /* 0x0008 */ union _LARGE_INTEGER ReadTimeout;
  /* 0x0010 */ unsigned char TimeoutSpecified;
  /* 0x0011 */ char __PADDING__[7];
} MAILSLOT_CREATE_PARAMETERS, *PMAILSLOT_CREATE_PARAMETERS; /* size: 0x0018 */


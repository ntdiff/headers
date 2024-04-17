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

typedef enum _REQUESTER_TYPE
{
  KernelRequester = 0,
  UserProcessRequester = 1,
  UserSharedServiceRequester = 2,
} REQUESTER_TYPE, *PREQUESTER_TYPE;

typedef struct _DIAGNOSTIC_BUFFER
{
  /* 0x0000 */ unsigned __int64 Size;
  /* 0x0008 */ enum _REQUESTER_TYPE CallerType;
  union
  {
    struct
    {
      /* 0x0010 */ unsigned __int64 ProcessImageNameOffset;
      /* 0x0018 */ unsigned long ProcessId;
      /* 0x001c */ unsigned long ServiceTag;
    }; /* size: 0x0010 */
    struct
    {
      /* 0x0010 */ unsigned __int64 DeviceDescriptionOffset;
      /* 0x0018 */ unsigned __int64 DevicePathOffset;
    }; /* size: 0x0010 */
  }; /* size: 0x0010 */
  /* 0x0020 */ unsigned __int64 ReasonOffset;
} DIAGNOSTIC_BUFFER, *PDIAGNOSTIC_BUFFER; /* size: 0x0028 */

typedef struct _WAKE_TIMER_INFO
{
  /* 0x0000 */ unsigned __int64 OffsetToNext;
  /* 0x0008 */ union _ULARGE_INTEGER DueTime;
  /* 0x0010 */ unsigned long Period;
  /* 0x0018 */ struct _DIAGNOSTIC_BUFFER ReasonContext;
} WAKE_TIMER_INFO, *PWAKE_TIMER_INFO; /* size: 0x0040 */


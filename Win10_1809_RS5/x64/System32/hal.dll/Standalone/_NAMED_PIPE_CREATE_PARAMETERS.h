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

typedef struct _NAMED_PIPE_CREATE_PARAMETERS
{
  /* 0x0000 */ unsigned long NamedPipeType;
  /* 0x0004 */ unsigned long ReadMode;
  /* 0x0008 */ unsigned long CompletionMode;
  /* 0x000c */ unsigned long MaximumInstances;
  /* 0x0010 */ unsigned long InboundQuota;
  /* 0x0014 */ unsigned long OutboundQuota;
  /* 0x0018 */ union _LARGE_INTEGER DefaultTimeout;
  /* 0x0020 */ unsigned char TimeoutSpecified;
  /* 0x0021 */ char __PADDING__[7];
} NAMED_PIPE_CREATE_PARAMETERS, *PNAMED_PIPE_CREATE_PARAMETERS; /* size: 0x0028 */


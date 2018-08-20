typedef struct _WMI_TRACE_PACKET
{
  /* 0x0000 */ unsigned short Size;
  union
  {
    /* 0x0002 */ unsigned short HookId;
    struct
    {
      /* 0x0002 */ unsigned char Type;
      /* 0x0003 */ unsigned char Group;
    }; /* size: 0x0002 */
  }; /* size: 0x0002 */
} WMI_TRACE_PACKET, *PWMI_TRACE_PACKET; /* size: 0x0004 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct // _TAG_UNNAMED_1
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _SYSTEM_TRACE_HEADER
{
  union
  {
    /* 0x0000 */ unsigned long Marker;
    struct
    {
      /* 0x0000 */ unsigned short Version;
      /* 0x0002 */ unsigned char HeaderType;
      /* 0x0003 */ unsigned char Flags;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  union
  {
    /* 0x0004 */ unsigned long Header;
    /* 0x0004 */ struct _WMI_TRACE_PACKET Packet;
  }; /* size: 0x0004 */
  /* 0x0008 */ unsigned long ThreadId;
  /* 0x000c */ unsigned long ProcessId;
  /* 0x0010 */ union _LARGE_INTEGER SystemTime;
  /* 0x0018 */ unsigned long KernelTime;
  /* 0x001c */ unsigned long UserTime;
} SYSTEM_TRACE_HEADER, *PSYSTEM_TRACE_HEADER; /* size: 0x0020 */


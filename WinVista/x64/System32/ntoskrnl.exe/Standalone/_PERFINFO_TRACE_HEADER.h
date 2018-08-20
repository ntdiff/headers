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
    struct // _TAG_UNNAMED_5
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _PERFINFO_TRACE_HEADER
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
  union
  {
    /* 0x0008 */ unsigned __int64 TS;
    /* 0x0008 */ union _LARGE_INTEGER SystemTime;
  }; /* size: 0x0008 */
  /* 0x0010 */ unsigned char Data[1];
  /* 0x0011 */ char __PADDING__[7];
} PERFINFO_TRACE_HEADER, *PPERFINFO_TRACE_HEADER; /* size: 0x0018 */


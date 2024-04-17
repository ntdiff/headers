typedef enum _SYSTEM_NET_RATE_CONTROL_TYPE
{
  SystemNetRateControlSet = 0,
  SystemNetRateControlQuota = 1,
} SYSTEM_NET_RATE_CONTROL_TYPE, *PSYSTEM_NET_RATE_CONTROL_TYPE;

typedef struct _SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER
{
  /* 0x0000 */ unsigned __int64 PolicyCookie;
  /* 0x0008 */ enum _SYSTEM_NET_RATE_CONTROL_TYPE Type;
  /* 0x000c */ long __PADDING__[1];
} SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER, *PSYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER; /* size: 0x0010 */

typedef struct _SYSTEM_NET_RATE_CONTROL_SET_CONTEXT
{
  /* 0x0000 */ struct _SYSTEM_NET_RATE_CONTROL_CONTEXT_HEADER Header;
  /* 0x0010 */ unsigned __int64 MaxBandwidth;
  /* 0x0018 */ struct _GUID* ContainerId;
  union
  {
    /* 0x0020 */ unsigned long Flags;
    struct /* bitfield */
    {
      /* 0x0020 */ unsigned long Set : 1; /* bit position: 0 */
      /* 0x0020 */ unsigned long Update : 1; /* bit position: 1 */
      /* 0x0020 */ unsigned long Clear : 1; /* bit position: 2 */
      /* 0x0020 */ unsigned long DscpTagEnabled : 1; /* bit position: 3 */
      /* 0x0020 */ unsigned long MaxBandwidthEnabled : 1; /* bit position: 4 */
      /* 0x0020 */ unsigned long Reserved : 27; /* bit position: 5 */
    }; /* bitfield */
  }; /* size: 0x0004 */
  /* 0x0024 */ unsigned char DscpTag;
  /* 0x0025 */ char __PADDING__[3];
} SYSTEM_NET_RATE_CONTROL_SET_CONTEXT, *PSYSTEM_NET_RATE_CONTROL_SET_CONTEXT; /* size: 0x0028 */


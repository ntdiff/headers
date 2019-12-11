typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

typedef struct _TCP_OFFLOAD_STATE_CACHED
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ unsigned short Flags;
  /* 0x000c */ unsigned long InitialRcvWnd;
  /* 0x0010 */ unsigned long RcvIndicationSize;
  /* 0x0014 */ unsigned char KaProbeCount;
  /* 0x0018 */ unsigned long KaTimeout;
  /* 0x001c */ unsigned long KaInterval;
  /* 0x0020 */ unsigned long MaxRT;
  /* 0x0024 */ unsigned long FlowLabel : 20; /* bit position: 0 */
  /* 0x0028 */ unsigned char TtlOrHopLimit;
  /* 0x0029 */ unsigned char TosOrTrafficClass;
  /* 0x002a */ unsigned char UserPriority : 3; /* bit position: 0 */
  /* 0x002b */ char __PADDING__[1];
} TCP_OFFLOAD_STATE_CACHED, *PTCP_OFFLOAD_STATE_CACHED; /* size: 0x002c */


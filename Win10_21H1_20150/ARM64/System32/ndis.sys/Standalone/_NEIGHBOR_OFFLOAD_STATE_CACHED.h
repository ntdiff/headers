typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

typedef struct _NEIGHBOR_OFFLOAD_STATE_CACHED
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ unsigned char DlDestinationAddress[32];
  /* 0x0028 */ unsigned long HostReachabilityDelta;
} NEIGHBOR_OFFLOAD_STATE_CACHED, *PNEIGHBOR_OFFLOAD_STATE_CACHED; /* size: 0x002c */


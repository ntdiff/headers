typedef struct _OFFLOAD_STATE_HEADER
{
  /* 0x0000 */ unsigned long Length;
  /* 0x0004 */ unsigned long RecognizedOptions;
} OFFLOAD_STATE_HEADER, *POFFLOAD_STATE_HEADER; /* size: 0x0008 */

typedef struct _NEIGHBOR_OFFLOAD_STATE_DELEGATED
{
  /* 0x0000 */ struct _OFFLOAD_STATE_HEADER Header;
  /* 0x0008 */ unsigned long NicReachabilityDelta;
} NEIGHBOR_OFFLOAD_STATE_DELEGATED, *PNEIGHBOR_OFFLOAD_STATE_DELEGATED; /* size: 0x000c */


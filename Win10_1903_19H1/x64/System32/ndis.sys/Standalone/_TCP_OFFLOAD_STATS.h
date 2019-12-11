typedef struct _TCP_OFFLOAD_STATS
{
  /* 0x0000 */ unsigned __int64 InSegments;
  /* 0x0008 */ unsigned __int64 OutSegments;
  /* 0x0010 */ unsigned long CurrentlyEstablished;
  /* 0x0014 */ unsigned long ResetEstablished;
  /* 0x0018 */ unsigned long RetransmittedSegments;
  /* 0x001c */ unsigned long InErrors;
  /* 0x0020 */ unsigned long OutResets;
  /* 0x0024 */ long __PADDING__[1];
} TCP_OFFLOAD_STATS, *PTCP_OFFLOAD_STATS; /* size: 0x0028 */


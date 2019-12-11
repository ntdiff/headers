typedef struct _flowspec
{
  /* 0x0000 */ unsigned long TokenRate;
  /* 0x0004 */ unsigned long TokenBucketSize;
  /* 0x0008 */ unsigned long PeakBandwidth;
  /* 0x000c */ unsigned long Latency;
  /* 0x0010 */ unsigned long DelayVariation;
  /* 0x0014 */ unsigned long ServiceType;
  /* 0x0018 */ unsigned long MaxSduSize;
  /* 0x001c */ unsigned long MinimumPolicedSize;
} flowspec, *Pflowspec; /* size: 0x0020 */


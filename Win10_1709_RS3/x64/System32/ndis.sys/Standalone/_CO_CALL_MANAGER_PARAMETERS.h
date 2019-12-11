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

typedef struct _CO_SPECIFIC_PARAMETERS
{
  /* 0x0000 */ unsigned long ParamType;
  /* 0x0004 */ unsigned long Length;
  /* 0x0008 */ unsigned char Parameters[1];
  /* 0x0009 */ char __PADDING__[3];
} CO_SPECIFIC_PARAMETERS, *PCO_SPECIFIC_PARAMETERS; /* size: 0x000c */

typedef struct _CO_CALL_MANAGER_PARAMETERS
{
  /* 0x0000 */ struct _flowspec Transmit;
  /* 0x0020 */ struct _flowspec Receive;
  /* 0x0040 */ struct _CO_SPECIFIC_PARAMETERS CallMgrSpecific;
} CO_CALL_MANAGER_PARAMETERS, *PCO_CALL_MANAGER_PARAMETERS; /* size: 0x004c */


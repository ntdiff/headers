typedef struct _LCN_WEAK_REFERENCE_BUFFER
{
  /* 0x0000 */ __int64 Lcn;
  /* 0x0008 */ __int64 LengthInClusters;
  /* 0x0010 */ unsigned long ReferenceCount;
  /* 0x0014 */ unsigned short State;
  /* 0x0016 */ char __PADDING__[2];
} LCN_WEAK_REFERENCE_BUFFER, *PLCN_WEAK_REFERENCE_BUFFER; /* size: 0x0018 */


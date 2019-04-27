typedef struct _SUPPORTED_RANGE
{
  /* 0x0000 */ struct _SUPPORTED_RANGE* Next;
  /* 0x0008 */ unsigned long SystemAddressSpace;
  /* 0x0010 */ __int64 SystemBase;
  /* 0x0018 */ __int64 Base;
  /* 0x0020 */ __int64 Limit;
} SUPPORTED_RANGE, *PSUPPORTED_RANGE; /* size: 0x0028 */


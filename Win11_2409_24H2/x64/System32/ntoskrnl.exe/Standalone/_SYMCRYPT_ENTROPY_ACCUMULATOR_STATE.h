typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0008 */

typedef struct _KDPC
{
  union
  {
    /* 0x0000 */ unsigned long TargetInfoAsUlong;
    struct
    {
      /* 0x0000 */ unsigned char Type;
      /* 0x0001 */ unsigned char Importance;
      /* 0x0002 */ volatile unsigned short Number;
    }; /* size: 0x0004 */
  }; /* size: 0x0004 */
  /* 0x0008 */ struct _SINGLE_LIST_ENTRY DpcListEntry;
  /* 0x0010 */ unsigned __int64 ProcessorHistory;
  /* 0x0018 */ void* DeferredRoutine /* function */;
  /* 0x0020 */ void* DeferredContext;
  /* 0x0028 */ void* SystemArgument1;
  /* 0x0030 */ void* SystemArgument2;
  /* 0x0038 */ void* DpcData;
} KDPC, *PKDPC; /* size: 0x0040 */

typedef struct _SYMCRYPT_ENTROPY_ACCUMULATOR_STATE
{
  /* 0x0000 */ unsigned char buffer[256];
  /* 0x0100 */ struct _KDPC Dpc;
  /* 0x0140 */ unsigned __int64 nSamplesAccumulated;
  /* 0x0148 */ unsigned __int64 nHealthTestFailures;
  /* 0x0150 */ unsigned char* pCombinedSampleBuffer;
  /* 0x0158 */ unsigned __int64 nRawSamples;
  /* 0x0160 */ unsigned int accumulatorId;
  /* 0x0164 */ unsigned int nDPCScheduleFailures;
  /* 0x0168 */ unsigned char dpcInProgress;
  /* 0x0169 */ char __PADDING__[23];
} SYMCRYPT_ENTROPY_ACCUMULATOR_STATE, *PSYMCRYPT_ENTROPY_ACCUMULATOR_STATE; /* size: 0x0180 */


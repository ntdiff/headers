enum tCorruptionPattern
{
};

enum tCorruptionSizeType
{
};

enum tCorruptionDistributionType
{
};

enum tDelayType
{
};

typedef struct _tRpcVerifierSettings
{
  /* 0x0000 */ int fFaultInjectImpersonateClient;
  /* 0x0004 */ unsigned int ProbFaultInjectImpersonateClient;
  /* 0x0008 */ unsigned int DelayFaultInjectImpersonateClient;
  /* 0x000c */ int fCorruptionInjectServerReceives;
  /* 0x0010 */ int fCorruptionInjectClientReceives;
  /* 0x0014 */ int fCorruptionInjectSends;
  /* 0x0018 */ int fCorruptionInjectNdrSends;
  /* 0x001c */ int fCorruptionInjectNdrReturns;
  /* 0x0020 */ int fCorruptionInjectNdr;
  /* 0x0024 */ unsigned int ProbRpcHeaderCorruption;
  /* 0x0028 */ unsigned int ProbDataCorruption;
  /* 0x002c */ unsigned int ProbSecureDataCorruption;
  /* 0x0030 */ enum tCorruptionPattern CorruptionPattern;
  /* 0x0034 */ enum tCorruptionSizeType CorruptionSizeType;
  /* 0x0038 */ unsigned int CorruptionSize;
  /* 0x003c */ enum tCorruptionDistributionType CorruptionDistributionType;
  /* 0x0040 */ unsigned int ProbBufferTruncation;
  /* 0x0044 */ unsigned int MaxBufferTruncationSize;
  /* 0x0048 */ int fFaultInjectTransports;
  /* 0x004c */ unsigned int ProbFaultInjectTransports;
  /* 0x0050 */ unsigned int DelayFaultInjectTransports;
  /* 0x0054 */ int fSendReplay;
  /* 0x0058 */ unsigned int SentBufferListSize;
  /* 0x005c */ unsigned int ReplayFrequency;
  /* 0x0060 */ int fPauseInject;
  /* 0x0064 */ enum tDelayType PauseInjectIntervalType;
  /* 0x0068 */ unsigned int PauseInjectIntervalLength;
  /* 0x006c */ enum tDelayType PauseInjectPauseType;
  /* 0x0070 */ unsigned int PauseInjectPauseLength;
  /* 0x0074 */ int fPauseInjectExternalAPIs;
  /* 0x0078 */ unsigned int ProbPauseInjectExternalAPIs;
  /* 0x007c */ unsigned int PauseInjectExternalAPIsMaxWait;
  /* 0x0080 */ int IsHighPrivilege;
  /* 0x0084 */ int fSupressAppVerifierBreaks;
  /* 0x0088 */ void* TestCorruptionInjectCallback /* function */;
  /* 0x008c */ void* NdrCorruptionCallback /* function */;
  /* 0x0090 */ unsigned long NDRVerifierMaxExtensionFactor;
  /* 0x0094 */ unsigned long NDRVerifierMaxExtensionBufferLength;
  /* 0x0098 */ unsigned int DelayCorruption;
  /* 0x009c */ void* InitializeRpcShim /* function */;
  /* 0x00a0 */ void* CorruptionInject /* function */;
  /* 0x00a4 */ void* NDRSendCorruptionInject /* function */;
  /* 0x00a8 */ void* NDRReturnCorruptionInject /* function */;
  /* 0x00ac */ void* RegisterThreadForPauseInjection /* function */;
  /* 0x00b0 */ void* UnregisterThreadForPauseInjection /* function */;
  /* 0x00b4 */ void* CloseAlpcPort /* function */;
} tRpcVerifierSettings, *PtRpcVerifierSettings; /* size: 0x00b8 */


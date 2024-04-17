typedef enum _ETW_BUFFER_STATE
{
  EtwBufferStateFree = 0,
  EtwBufferStateGeneralLogging = 1,
  EtwBufferStateCSwitch = 2,
  EtwBufferStateFlush = 3,
  EtwBufferStatePendingCompression = 4,
  EtwBufferStateCompressed = 5,
  EtwBufferStatePlaceholder = 6,
  EtwBufferStateMaximum = 7,
} ETW_BUFFER_STATE, *PETW_BUFFER_STATE;


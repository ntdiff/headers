typedef enum _KEY_SET_INFORMATION_CLASS
{
  KeyWriteTimeInformation = 0,
  KeyWow64FlagsInformation = 1,
  KeyControlFlagsInformation = 2,
  KeySetVirtualizationInformation = 3,
  KeySetDebugInformation = 4,
  KeySetHandleTagsInformation = 5,
  KeySetLayerInformation = 6,
  MaxKeySetInfoClass = 7,
} KEY_SET_INFORMATION_CLASS, *PKEY_SET_INFORMATION_CLASS;


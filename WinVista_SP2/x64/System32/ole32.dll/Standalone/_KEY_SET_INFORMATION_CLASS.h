typedef enum _KEY_SET_INFORMATION_CLASS
{
  KeyWriteTimeInformation = 0,
  KeyWow64FlagsInformation = 1,
  KeyControlFlagsInformation = 2,
  KeySetVirtualizationInformation = 3,
  KeySetDebugInformation = 4,
  MaxKeySetInfoClass = 5,
} KEY_SET_INFORMATION_CLASS, *PKEY_SET_INFORMATION_CLASS;


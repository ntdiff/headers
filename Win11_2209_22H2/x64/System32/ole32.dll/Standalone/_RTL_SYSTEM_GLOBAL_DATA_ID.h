typedef enum _RTL_SYSTEM_GLOBAL_DATA_ID
{
  GlobalDataIdUnknown = 0,
  GlobalDataIdRngSeedVersion = 1,
  GlobalDataIdInterruptTime = 2,
  GlobalDataIdTimeZoneBias = 3,
  GlobalDataIdImageNumberLow = 4,
  GlobalDataIdImageNumberHigh = 5,
  GlobalDataIdTimeZoneId = 6,
  GlobalDataIdNtMajorVersion = 7,
  GlobalDataIdNtMinorVersion = 8,
  GlobalDataIdSystemExpirationDate = 9,
  GlobalDataIdKdDebuggerEnabled = 10,
  GlobalDataIdCyclesPerYield = 11,
  GlobalDataIdSafeBootMode = 12,
  GlobalDataIdLastSystemRITEventTickCount = 13,
  GlobalDataIdConsoleSharedDataFlags = 14,
  GlobalDataIdNtSystemRootDrive = 15,
  GlobalDataIdQpcShift = 16,
  GlobalDataIdQpcBypassEnabled = 17,
  GlobalDataIdQpcData = 18,
  GlobalDataIdQpcBias = 19,
} RTL_SYSTEM_GLOBAL_DATA_ID, *PRTL_SYSTEM_GLOBAL_DATA_ID;


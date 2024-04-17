typedef enum _TAPE_DRIVE_PROBLEM_TYPE
{
  TapeDriveProblemNone = 0,
  TapeDriveReadWriteWarning = 1,
  TapeDriveReadWriteError = 2,
  TapeDriveReadWarning = 3,
  TapeDriveWriteWarning = 4,
  TapeDriveReadError = 5,
  TapeDriveWriteError = 6,
  TapeDriveHardwareError = 7,
  TapeDriveUnsupportedMedia = 8,
  TapeDriveScsiConnectionError = 9,
  TapeDriveTimetoClean = 10,
  TapeDriveCleanDriveNow = 11,
  TapeDriveMediaLifeExpired = 12,
  TapeDriveSnappedTape = 13,
} TAPE_DRIVE_PROBLEM_TYPE, *PTAPE_DRIVE_PROBLEM_TYPE;


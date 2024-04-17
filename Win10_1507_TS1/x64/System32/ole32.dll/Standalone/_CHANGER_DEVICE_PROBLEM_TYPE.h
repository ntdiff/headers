typedef enum _CHANGER_DEVICE_PROBLEM_TYPE
{
  DeviceProblemNone = 0,
  DeviceProblemHardware = 1,
  DeviceProblemCHMError = 2,
  DeviceProblemDoorOpen = 3,
  DeviceProblemCalibrationError = 4,
  DeviceProblemTargetFailure = 5,
  DeviceProblemCHMMoveError = 6,
  DeviceProblemCHMZeroError = 7,
  DeviceProblemCartridgeInsertError = 8,
  DeviceProblemPositionError = 9,
  DeviceProblemSensorError = 10,
  DeviceProblemCartridgeEjectError = 11,
  DeviceProblemGripperError = 12,
  DeviceProblemDriveError = 13,
} CHANGER_DEVICE_PROBLEM_TYPE, *PCHANGER_DEVICE_PROBLEM_TYPE;


typedef enum _RTL_PATH_TYPE
{
  RtlPathTypeUnknown = 0,
  RtlPathTypeUncAbsolute = 1,
  RtlPathTypeDriveAbsolute = 2,
  RtlPathTypeDriveRelative = 3,
  RtlPathTypeRooted = 4,
  RtlPathTypeRelative = 5,
  RtlPathTypeLocalDevice = 6,
  RtlPathTypeRootLocalDevice = 7,
} RTL_PATH_TYPE, *PRTL_PATH_TYPE;


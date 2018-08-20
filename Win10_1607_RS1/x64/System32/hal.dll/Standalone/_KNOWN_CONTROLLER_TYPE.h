typedef enum _KNOWN_CONTROLLER_TYPE
{
  InterruptControllerInvalid = 0,
  InterruptControllerPic = 1,
  InterruptControllerApic = 2,
  InterruptControllerGic = 3,
  InterruptControllerGicV3 = 4,
  InterruptControllerBcm = 5,
  InterruptControllerUnknown = 4096,
} KNOWN_CONTROLLER_TYPE, *PKNOWN_CONTROLLER_TYPE;


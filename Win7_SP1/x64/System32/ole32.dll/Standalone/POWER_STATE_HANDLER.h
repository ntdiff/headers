enum POWER_STATE_HANDLER_TYPE
{
  PowerStateSleeping1 = 0,
  PowerStateSleeping2 = 1,
  PowerStateSleeping3 = 2,
  PowerStateSleeping4 = 3,
  PowerStateShutdownOff = 4,
  PowerStateShutdownReset = 5,
  PowerStateSleeping4Firmware = 6,
  PowerStateMaximum = 7,
};

struct POWER_STATE_HANDLER
{
  /* 0x0000 */ enum POWER_STATE_HANDLER_TYPE Type;
  /* 0x0004 */ unsigned char RtcWake;
  /* 0x0005 */ unsigned char Spare[3];
  /* 0x0008 */ void* Handler /* function */;
  /* 0x0010 */ void* Context;
}; /* size: 0x0018 */


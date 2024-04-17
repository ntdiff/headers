typedef enum _PS_STD_HANDLE_STATE
{
  PsNeverDuplicate = 0,
  PsRequestDuplicate = 1,
  PsAlwaysDuplicate = 2,
  PsMaxStdHandleStates = 3,
} PS_STD_HANDLE_STATE, *PPS_STD_HANDLE_STATE;


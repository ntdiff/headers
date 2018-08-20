typedef enum _PP_NPAGED_LOOKASIDE_NUMBER
{
  LookasideSmallIrpList = 0,
  LookasideLargeIrpList = 1,
  LookasideMdlList = 2,
  LookasideCreateInfoList = 3,
  LookasideNameBufferList = 4,
  LookasideTwilightList = 5,
  LookasideCompletionList = 6,
  LookasideScratchBufferList = 7,
  LookasideMaximumList = 8,
} PP_NPAGED_LOOKASIDE_NUMBER, *PPP_NPAGED_LOOKASIDE_NUMBER;


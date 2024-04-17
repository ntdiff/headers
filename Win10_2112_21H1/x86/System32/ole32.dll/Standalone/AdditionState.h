enum AdditionState
{
  AdditionState_CastIntCheckMax = 0,
  AdditionState_CastUintCheckOverflow = 1,
  AdditionState_CastUintCheckOverflowMax = 2,
  AdditionState_CastUint64CheckOverflow = 3,
  AdditionState_CastUint64CheckOverflowMax = 4,
  AdditionState_CastIntCheckMinMax = 5,
  AdditionState_CastInt64CheckMinMax = 6,
  AdditionState_CastInt64CheckMax = 7,
  AdditionState_CastUint64CheckMinMax = 8,
  AdditionState_CastUint64CheckMinMax2 = 9,
  AdditionState_CastInt64CheckOverflow = 10,
  AdditionState_CastInt64CheckOverflowMinMax = 11,
  AdditionState_CastInt64CheckOverflowMax = 12,
  AdditionState_ManualCheckInt64Uint64 = 13,
  AdditionState_ManualCheck = 14,
  AdditionState_Error = 15,
};


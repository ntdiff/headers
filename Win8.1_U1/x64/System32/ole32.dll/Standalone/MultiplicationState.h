enum MultiplicationState
{
  MultiplicationState_CastInt = 0,
  MultiplicationState_CastInt64 = 1,
  MultiplicationState_CastUint = 2,
  MultiplicationState_CastUint64 = 3,
  MultiplicationState_Uint64Uint = 4,
  MultiplicationState_Uint64Uint64 = 5,
  MultiplicationState_Uint64Int = 6,
  MultiplicationState_Uint64Int64 = 7,
  MultiplicationState_UintUint64 = 8,
  MultiplicationState_UintInt64 = 9,
  MultiplicationState_Int64Uint = 10,
  MultiplicationState_Int64Int64 = 11,
  MultiplicationState_Int64Int = 12,
  MultiplicationState_IntUint64 = 13,
  MultiplicationState_IntInt64 = 14,
  MultiplicationState_Int64Uint64 = 15,
  MultiplicationState_Error = 16,
};


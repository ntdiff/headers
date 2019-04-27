typedef enum _IOP_PRIORITY_HINT
{
  IopIoPriorityNotSet = 0,
  IopIoPriorityVeryLow = 1,
  IopIoPriorityLow = 2,
  IopIoPriorityNormal = 3,
  IopIoPriorityHigh = 4,
  IopIoPriorityCritical = 5,
  MaxIopIoPriorityTypes = 6,
} IOP_PRIORITY_HINT, *PIOP_PRIORITY_HINT;


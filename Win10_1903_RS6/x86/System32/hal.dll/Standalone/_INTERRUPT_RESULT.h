typedef enum _INTERRUPT_RESULT
{
  InterruptBeginFatalError = 0,
  InterruptBeginLine = 1,
  InterruptBeginSpurious = 2,
  InterruptBeginVector = 3,
  InterruptBeginNone = 4,
} INTERRUPT_RESULT, *PINTERRUPT_RESULT;


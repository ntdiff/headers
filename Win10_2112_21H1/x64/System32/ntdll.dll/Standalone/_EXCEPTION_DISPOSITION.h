typedef enum _EXCEPTION_DISPOSITION
{
  ExceptionContinueExecution = 0,
  ExceptionContinueSearch = 1,
  ExceptionNestedException = 2,
  ExceptionCollidedUnwind = 3,
} EXCEPTION_DISPOSITION, *PEXCEPTION_DISPOSITION;


typedef enum _MINIDUMP_HANDLE_OBJECT_INFORMATION_TYPE
{
  MiniHandleObjectInformationNone = 0,
  MiniThreadInformation1 = 1,
  MiniMutantInformation1 = 2,
  MiniMutantInformation2 = 3,
  MiniProcessInformation1 = 4,
  MiniProcessInformation2 = 5,
  MiniEventInformation1 = 6,
  MiniSectionInformation1 = 7,
  MiniSemaphoreInformation1 = 8,
  MiniHandleObjectInformationTypeMax = 9,
} MINIDUMP_HANDLE_OBJECT_INFORMATION_TYPE, *PMINIDUMP_HANDLE_OBJECT_INFORMATION_TYPE;


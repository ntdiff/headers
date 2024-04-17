typedef enum _MINIDUMP_CALLBACK_TYPE
{
  ModuleCallback = 0,
  ThreadCallback = 1,
  ThreadExCallback = 2,
  IncludeThreadCallback = 3,
  IncludeModuleCallback = 4,
  MemoryCallback = 5,
  CancelCallback = 6,
  WriteKernelMinidumpCallback = 7,
  KernelMinidumpStatusCallback = 8,
  RemoveMemoryCallback = 9,
  IncludeVmRegionCallback = 10,
  IoStartCallback = 11,
  IoWriteAllCallback = 12,
  IoFinishCallback = 13,
  ReadMemoryFailureCallback = 14,
  SecondaryFlagsCallback = 15,
} MINIDUMP_CALLBACK_TYPE, *PMINIDUMP_CALLBACK_TYPE;


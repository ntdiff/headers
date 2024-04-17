typedef enum _MINIDUMP_TYPE
{
  MiniDumpNormal = 0,
  MiniDumpWithDataSegs = 1,
  MiniDumpWithFullMemory = 2,
  MiniDumpWithHandleData = 4,
  MiniDumpFilterMemory = 8,
  MiniDumpScanMemory = 16,
  MiniDumpWithUnloadedModules = 32,
  MiniDumpWithIndirectlyReferencedMemory = 64,
  MiniDumpFilterModulePaths = 128,
  MiniDumpWithProcessThreadData = 256,
  MiniDumpWithPrivateReadWriteMemory = 512,
  MiniDumpWithoutOptionalData = 1024,
  MiniDumpWithFullMemoryInfo = 2048,
  MiniDumpWithThreadInfo = 4096,
  MiniDumpWithCodeSegs = 8192,
  MiniDumpWithoutAuxiliaryState = 16384,
  MiniDumpWithFullAuxiliaryState = 0xffff8000,
  MiniDumpValidTypeFlags = 0xffffffff,
} MINIDUMP_TYPE, *PMINIDUMP_TYPE;


typedef enum _MODULE_WRITE_FLAGS
{
  ModuleWriteModule = 1,
  ModuleWriteDataSeg = 2,
  ModuleWriteMiscRecord = 4,
  ModuleWriteCvRecord = 8,
  ModuleReferencedByMemory = 16,
  ModuleWriteTlsData = 32,
  ModuleWriteCodeSegs = 64,
} MODULE_WRITE_FLAGS, *PMODULE_WRITE_FLAGS;


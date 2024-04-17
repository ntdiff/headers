typedef enum _IMAGEHLP_STATUS_REASON
{
  BindOutOfMemory = 0,
  BindRvaToVaFailed = 1,
  BindNoRoomInImage = 2,
  BindImportModuleFailed = 3,
  BindImportProcedureFailed = 4,
  BindImportModule = 5,
  BindImportProcedure = 6,
  BindForwarder = 7,
  BindForwarderNOT = 8,
  BindImageModified = 9,
  BindExpandFileHeaders = 10,
  BindImageComplete = 11,
  BindMismatchedSymbols = 12,
  BindSymbolsNotUpdated = 13,
  BindImportProcedure32 = 14,
  BindImportProcedure64 = 15,
  BindForwarder32 = 16,
  BindForwarder64 = 17,
  BindForwarderNOT32 = 18,
  BindForwarderNOT64 = 19,
} IMAGEHLP_STATUS_REASON, *PIMAGEHLP_STATUS_REASON;


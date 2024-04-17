typedef struct _NTOS_TEST_EXPORT_INTERFACE
{
  /* 0x0000 */ void* ExIsTestExportExtensionRegistered /* function */;
  /* 0x0008 */ void* CmSaveKeyToBuffer /* function */;
  /* 0x0010 */ void* CmOpenKeyForBugCheckRecovery /* function */;
  /* 0x0018 */ void* PsTlsTestAlloc /* function */;
  /* 0x0020 */ void* KeDpcTestQueryWatchdogConfiguration /* function */;
  /* 0x0028 */ void* CallSkSvc /* function */;
} NTOS_TEST_EXPORT_INTERFACE, *PNTOS_TEST_EXPORT_INTERFACE; /* size: 0x0030 */


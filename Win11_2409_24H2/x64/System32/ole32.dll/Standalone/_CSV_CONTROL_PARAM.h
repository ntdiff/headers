typedef enum _CSV_CONTROL_OP
{
  CsvControlStartRedirectFile = 2,
  CsvControlStopRedirectFile = 3,
  CsvControlQueryRedirectState = 4,
  CsvControlQueryFileRevision = 6,
  CsvControlQueryMdsPath = 8,
  CsvControlQueryFileRevisionFileId128 = 9,
  CsvControlQueryVolumeRedirectState = 10,
  CsvControlEnableUSNRangeModificationTracking = 13,
  CsvControlMarkHandleLocalVolumeMount = 14,
  CsvControlUnmarkHandleLocalVolumeMount = 15,
  CsvControlGetCsvFsMdsPathV2 = 18,
  CsvControlDisableCaching = 19,
  CsvControlEnableCaching = 20,
  CsvControlStartForceDFO = 21,
  CsvControlStopForceDFO = 22,
  CsvControlQueryMdsPathNoPause = 23,
  CsvControlSetVolumeId = 24,
  CsvControlQueryVolumeId = 25,
} CSV_CONTROL_OP, *PCSV_CONTROL_OP;

typedef struct _CSV_CONTROL_PARAM
{
  /* 0x0000 */ enum _CSV_CONTROL_OP Operation;
  /* 0x0008 */ __int64 Unused;
} CSV_CONTROL_PARAM, *PCSV_CONTROL_PARAM; /* size: 0x0010 */


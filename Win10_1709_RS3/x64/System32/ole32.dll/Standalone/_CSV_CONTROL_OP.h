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
} CSV_CONTROL_OP, *PCSV_CONTROL_OP;

